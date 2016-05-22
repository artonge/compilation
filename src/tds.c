#include "tds.h"


void newTDS() {
  debug(DEBUG_TDS, "\033[01;36mnewTDS\033[0m");
  TDS = newNode();
}


/* Create a new children scope in the current scope
 * Set the current scope to the one just created
 */
void enterScope() {
  debug(DEBUG_TDS, "\033[01;36menterScope\033[0m");
  node *scope = newNode();

  if (TDS->children != NULL)
    scope->brother = TDS->children;

  scope->father = TDS;

  TDS->children = scope;

  TDS = scope;
}


/* Set the current scope to current one's father
 */
void leaveScope() {
  debug(DEBUG_TDS, "\033[01;36mleaveScope\033[0m");
  TDS = TDS->father;
}


/* Add an entity (var or func) to the current scope
 */
void addEntity(ANTLR3_BASE_TREE *node) {
  entity *e;

  debug(
    DEBUG_TDS,
    "\033[01;36mentity\033[0m %s",
    node->toString(node->getChild(node, 0))->chars
  );

  switch (node->getToken(node)->type) {
    case VAR_DECLARATION:
      e = buildVarEntity(node);
      break;
    case FUNC_DECLARATION:
      e = buildFuncEntity(node);
      break;
  }

  e->brother = NULL;

  if (TDS->entities != NULL)
    e->brother = TDS->entities;

  TDS->entities = e;
}


entity *searchVar(char *name) {
  debug(DEBUG_TDS, "\033[01;36msearchVar\033[0m");
  return search_helper(TDS, name, VAR_DECLARATION);
}

entity *searchFunc(char *name) {
  debug(DEBUG_TDS, "\033[01;36msearchFunc\033[0m");
  return search_helper(TDS, name, FUNC_DECLARATION);
}


void printTDS(node *TDS) {
  debug(DEBUG_TDS, "\033[01;36mprintTDS\033[0m");
  if (TDS == NULL) return;

  printEntities(TDS->entities);

  printTDS(TDS->children);
  printTDS(TDS->brother);
}


// Return the global type of a expression node
// Usefull to know the type of : 1+a+f()
// It parse the tree until it gets to the extrem left bottom
// 1 in our example
// If it's a var declaration, it return the associated type, if not set,
// then the type of the associated expr
int getType(ANTLR3_BASE_TREE *tree) {

	int token = tree->getToken(tree)->type;

	if (token == VAR_DECLARATION) {
		if (tree->getChildCount(tree) == 3)
			return typeToInt((char*)tree->toString(tree->getChild(tree, 1)));
		else
			return getType(tree->getChild(tree, 1));
  }

  debug(DEBUG_TDS, "\033[01;36mgettype\033[0m %d", token);

	switch (token) {
		case INT:
		case STRING:
			return token;

		case FUNC_CALL:
      debug(DEBUG_TDS, "\033[01;36msearching\033[0m %s", tree->toString(tree->getChild(tree, 0))->chars);
      token = searchFunc((char *)tree->toString(tree->getChild(tree, 0))->chars)->type;
      return token;

		case ID:
			debug(DEBUG_TDS, "\033[01;36msearching\033[0m %s", tree->toString(tree->getChild(tree, 0))->chars);
      token = searchVar((char *)tree->toString(tree->getChild(tree, 0))->chars)->type;
			return token;

		default :
			return getType(tree->getChild(tree, 0));
	}
}