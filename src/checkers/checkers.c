#include "checkers.h"


// Check that type is 'int' or 'string'
void checkVarDeclaration(ANTLR3_BASE_TREE *tree) {
  debug(DEBUG_CHECKERS, "\033[22;35mcheckVarDeclaration\033[0m");

  ANTLR3_BASE_TREE * typeNode   =         tree->getChild(tree, 1);
  char             * typeString = (char *)tree->toString(typeNode)->chars;

  if (tree->getChildCount(tree) == 3) {
      if (strcmp(typeString, "int") &&
          strcmp(typeString, "string") ) {

        error("Unknown type (%s) at line %d:%d",
               typeString,
               tree->getLine(typeNode),
               tree->getCharPositionInLine(typeNode));
      }
  }
}

// Check that return type is 'int' or 'string'
// Check if a RETURN node exists when return type is set
// TODO - check return type is same as returned var
void checkFuncDeclaration(ANTLR3_BASE_TREE *tree) {
  debug(DEBUG_CHECKERS, "\033[22;35mcheckFuncDeclaration\033[0m");

  ANTLR3_UINT32 count = tree->getChildCount(tree);

  ANTLR3_BASE_TREE * nameNode   = tree->getChild(tree, 0);
  char             * nameString = (char *)tree->toString(nameNode)->chars;

  ANTLR3_BASE_TREE * returnTypeNode   =         tree->getChild(tree, 2);
  char             * returnTypeString = (char *)tree->toString(returnTypeNode)->chars;

  ANTLR3_BASE_TREE *instructionsNode = tree->getChild(tree, count-1);


  if (count == 4) {

      if (strcmp(returnTypeString, "int") &&
          strcmp(returnTypeString, "string") ) {

        error("Unknown return type (%s) at line %d:%d",
               returnTypeString,
               tree->getLine(returnTypeNode),
               tree->getCharPositionInLine(returnTypeNode));
      }


      if (!findReturnInstruction(instructionsNode)) {
        warning("Reached end of non void function (%s) at line %d:%d",
               nameString,
               tree->getLine(instructionsNode),
               tree->getCharPositionInLine(instructionsNode));
      }
  }
}


// Check that type is 'int' or 'string' for each param
void checkParam(ANTLR3_BASE_TREE *tree) {
  debug(DEBUG_CHECKERS, "\033[22;35mcheckParam\033[0m");

  ANTLR3_BASE_TREE *   typeNode = tree->getChild(tree, 1);
  char             * typeString = (char *)tree->toString(typeNode)->chars;

  if (strcmp(typeString, "int") &&
      strcmp(typeString, "string") ) {

    error("Unknown type (%s) at line %d:%d",
           typeString,
           tree->getLine(typeNode),
           tree->getCharPositionInLine(typeNode));
  }
}


// Check that one of the parent node is a loop
// THINK - Until where is it smart to climb the tree ?
void checkBreak(ANTLR3_BASE_TREE *tree) {

}

// Check that one of the parent node is a function with a return type specified
// THINK - Until where is it smart to climb the tree ?
void checkReturn(ANTLR3_BASE_TREE *tree) {

}


// Check that left operand is an ID and do not contain any children
// Check that right operand is not an INSTRUCTIONS node
void checkAssigne(ANTLR3_BASE_TREE *tree) {
  debug(DEBUG_CHECKERS, "\033[22;35mcheckAssigne\033[0m");

  ANTLR3_BASE_TREE * id   = tree->getChild(tree, 0);
  ANTLR3_BASE_TREE * expr = tree->getChild(tree, 1);

  pANTLR3_COMMON_TOKEN idToken   = tree->getToken(id);
  pANTLR3_COMMON_TOKEN exprToken = tree->getToken(expr);

  if (idToken->type != ID) {
    error("Left operand must be an identifiant in an assignement %d:%d",
           tree->getLine(id),
           tree->getCharPositionInLine(id));
  }

  if (containsInstruction(tree)) {
    error("Right assignement can not contains an instruction %d:%d",
           tree->getLine(expr),
           tree->getCharPositionInLine(expr));
  }
}


// Check that both operands are not :
// - an INSTRUCTIONS node
// - an assignement
// - a procedure call
void checkOr(ANTLR3_BASE_TREE *tree) {

}


// Check that both operands are not :
// - an INSTRUCTIONS node
// - an assignement
// - a procedure call
void checkAnd(ANTLR3_BASE_TREE *tree) {

}

// Check that both operands are not :
// - an INSTRUCTIONS node
// - an assignement
// - a procedure call
// - a NIL NODE
void checkComp(ANTLR3_BASE_TREE *tree) {

}

// Check that both operands are not :
// - an INSTRUCTIONS node
// - an assignement
// - a procedure call
// - a NIL NODE
void checkAdd(ANTLR3_BASE_TREE *tree) {

}



// Check that both operands are not :
// - an INSTRUCTIONS node
// - an assignement
// - a procedure call
// - a NIL NODE
// Check that division by 0 do not happen
void checkMult(ANTLR3_BASE_TREE *tree) {

}


// Check that the atom is an ID or a FUNC_CALL
void checkNeg(ANTLR3_BASE_TREE *tree) {

}


// Check that the number of parameters is the same as in the declaration
void checkFuncCall(ANTLR3_BASE_TREE *tree) {

}


// Check that ARGS are not an INSTRUCTIONS node
void checkArgs(ANTLR3_BASE_TREE *tree) {

}