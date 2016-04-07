/** \file
 *  This C header file was generated by $ANTLR version 3.4
 *
 *     -  From the grammar source file : Tiger.g
 *     -                            On : 2016-04-07 22:15:07
 *     -                 for the lexer : TigerLexerLexer
 *
 * Editing it, at least manually, is not wise.
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The lexer 
TigerLexer

has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 *
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pTigerLexer, which is returned from a call to TigerLexerNew().
 *
 * As this is a generated lexer, it is unlikely you will call it 'manually'. However
 * the methods are provided anyway.
 *
 * The methods in pTigerLexer are  as follows:
 *
 *  - 
 void
      pTigerLexer->T__35(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__36(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__37(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__38(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__39(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__40(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__41(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__42(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__43(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__44(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__45(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__46(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__47(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__48(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__49(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__50(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__51(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__52(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__53(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__54(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__55(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__56(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__57(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__58(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__59(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__60(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__61(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__62(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__63(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__64(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__65(pTigerLexer)
 *  - 
 void
      pTigerLexer->T__66(pTigerLexer)
 *  - 
 void
      pTigerLexer->WHITESPACE(pTigerLexer)
 *  - 
 void
      pTigerLexer->COMMENT(pTigerLexer)
 *  - 
 void
      pTigerLexer->LETTER(pTigerLexer)
 *  - 
 void
      pTigerLexer->ID(pTigerLexer)
 *  - 
 void
      pTigerLexer->STRING(pTigerLexer)
 *  - 
 void
      pTigerLexer->INTEGER(pTigerLexer)
 *  - 
 void
      pTigerLexer->Tokens(pTigerLexer)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD license"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_TigerLexer_H
#define _TigerLexer_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */

#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct TigerLexer_Ctx_struct TigerLexer, * pTigerLexer;



#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif

/** Context tracking structure for 
TigerLexer

 */
struct TigerLexer_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_LEXER    pLexer;

     void
     (*mT__35)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__36)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__37)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__38)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__39)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__40)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__41)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__42)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__43)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__44)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__45)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__46)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__47)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__48)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__49)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__50)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__51)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__52)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__53)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__54)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__55)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__56)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__57)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__58)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__59)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__60)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__61)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__62)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__63)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__64)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__65)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mT__66)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mWHITESPACE)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mCOMMENT)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mLETTER)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mID)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mSTRING)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mINTEGER)	(struct TigerLexer_Ctx_struct * ctx);

     void
     (*mTokens)	(struct TigerLexer_Ctx_struct * ctx);
    const char * (*getGrammarFileName)();
    void            (*reset)  (struct TigerLexer_Ctx_struct * ctx);
    void	    (*free)   (struct TigerLexer_Ctx_struct * ctx);
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pTigerLexer TigerLexerNew         (
pANTLR3_INPUT_STREAM
 instream);
ANTLR3_API pTigerLexer TigerLexerNewSSD      (
pANTLR3_INPUT_STREAM
 instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the 
lexer
 will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif
#define EOF      -1
#define T__35      35
#define T__36      36
#define T__37      37
#define T__38      38
#define T__39      39
#define T__40      40
#define T__41      41
#define T__42      42
#define T__43      43
#define T__44      44
#define T__45      45
#define T__46      46
#define T__47      47
#define T__48      48
#define T__49      49
#define T__50      50
#define T__51      51
#define T__52      52
#define T__53      53
#define T__54      54
#define T__55      55
#define T__56      56
#define T__57      57
#define T__58      58
#define T__59      59
#define T__60      60
#define T__61      61
#define T__62      62
#define T__63      63
#define T__64      64
#define T__65      65
#define T__66      66
#define ADD      4
#define AND      5
#define ARGS      6
#define ASSIGNE      7
#define COMMENT      8
#define COMP      9
#define DECLARATION      10
#define EXPR      11
#define FOR      12
#define FUNC      13
#define FUNC_CALL      14
#define ID      15
#define IF      16
#define INSTRUCTIONS      17
#define INT      18
#define INTEGER      19
#define LET      20
#define LETTER      21
#define MULT      22
#define NEG      23
#define NIL      24
#define OR      25
#define PARAM      26
#define PARAMS      27
#define STR      28
#define STRING      29
#define TYPE      30
#define VAR      31
#define VARIABLE      32
#define WHILE      33
#define WHITESPACE      34
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for TigerLexer
 * =============================================================================
 */
/** } */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
