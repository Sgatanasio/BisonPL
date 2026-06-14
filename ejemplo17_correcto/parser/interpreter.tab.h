/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_INTERPRETER_TAB_H_INCLUDED
# define YY_YY_INTERPRETER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    SEMICOLON = 258,               /* SEMICOLON  */
    COMMA = 259,                   /* COMMA  */
    PRINT = 260,                   /* PRINT  */
    READ = 261,                    /* READ  */
    READ_STRING = 262,             /* READ_STRING  */
    IF = 263,                      /* IF  */
    THEN = 264,                    /* THEN  */
    ELSE = 265,                    /* ELSE  */
    END_IF = 266,                  /* END_IF  */
    WHILE = 267,                   /* WHILE  */
    DO = 268,                      /* DO  */
    END_WHILE = 269,               /* END_WHILE  */
    REPEAT = 270,                  /* REPEAT  */
    UNTIL = 271,                   /* UNTIL  */
    FOR = 272,                     /* FOR  */
    FROM = 273,                    /* FROM  */
    STEP = 274,                    /* STEP  */
    END_FOR = 275,                 /* END_FOR  */
    WHICH = 276,                   /* WHICH  */
    CASE = 277,                    /* CASE  */
    DEFAULT = 278,                 /* DEFAULT  */
    END_WHICH = 279,               /* END_WHICH  */
    CLR_SCR = 280,                 /* CLR_SCR  */
    PLACE = 281,                   /* PLACE  */
    LETFCURLYBRACKET = 282,        /* LETFCURLYBRACKET  */
    RIGHTCURLYBRACKET = 283,       /* RIGHTCURLYBRACKET  */
    ASSIGNMENT = 284,              /* ASSIGNMENT  */
    NUMBER = 285,                  /* NUMBER  */
    BOOL = 286,                    /* BOOL  */
    STRING = 287,                  /* STRING  */
    VARIABLE = 288,                /* VARIABLE  */
    UNDEFINED = 289,               /* UNDEFINED  */
    CONSTANT = 290,                /* CONSTANT  */
    BUILTIN = 291,                 /* BUILTIN  */
    OR = 292,                      /* OR  */
    AND = 293,                     /* AND  */
    GREATER_OR_EQUAL = 294,        /* GREATER_OR_EQUAL  */
    LESS_OR_EQUAL = 295,           /* LESS_OR_EQUAL  */
    GREATER_THAN = 296,            /* GREATER_THAN  */
    LESS_THAN = 297,               /* LESS_THAN  */
    EQUAL = 298,                   /* EQUAL  */
    NOT_EQUAL = 299,               /* NOT_EQUAL  */
    NOT = 300,                     /* NOT  */
    PLUS = 301,                    /* PLUS  */
    MINUS = 302,                   /* MINUS  */
    MULTIPLICATION = 303,          /* MULTIPLICATION  */
    DIVISION = 304,                /* DIVISION  */
    INT_DIVISION = 305,            /* INT_DIVISION  */
    MODULO = 306,                  /* MODULO  */
    LPAREN = 307,                  /* LPAREN  */
    RPAREN = 308,                  /* RPAREN  */
    CONCAT = 309,                  /* CONCAT  */
    UNARY = 310,                   /* UNARY  */
    POWER = 311                    /* POWER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 141 "interpreter.y"

  double number;
  char * string; 				 /* NEW in example 7 */
  bool logic;						 /* NEW in example 15 */
  lp::ExpNode *expNode;  			 /* NEW in example 16 */
  std::list<lp::ExpNode *>  *parameters;    // New in example 16; NOTE: #include<list> must be in interpreter.l, init.cpp, interpreter.cpp
  std::list<lp::Statement *> *stmts; /* NEW in example 16 */
  lp::Statement *st;				 /* NEW in example 16 */
  lp::AST *prog;					 /* NEW in example 16 */

#line 131 "interpreter.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_INTERPRETER_TAB_H_INCLUDED  */
