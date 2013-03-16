/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 3 "grammar.y"


extern char *outp;
#include "std.h"
#include "compiler.h"
#include "lex.h"
#include "scratchpad.h"

#include "lpc_incl.h"
#include "simul_efun.h"
#include "generate.h"
#include "master.h"

/* gross. Necessary? - Beek */
#ifdef WIN32
#define MSDOS
#endif
#define YYSTACK_USE_ALLOCA 0
#line 20 "grammar.y.pre"
/*
 * This is the grammar definition of LPC, and its parse tree generator.
 */

/* down to one global :) 
   bits:
      SWITCH_CONTEXT     - we're inside a switch
      LOOP_CONTEXT       - we're inside a loop
      SWITCH_STRINGS     - a string case has been found
      SWITCH_NUMBERS     - a non-zero numeric case has been found
      SWITCH_RANGES      - a range has been found
      SWITCH_DEFAULT     - a default has been found
 */
int context;
int num_refs;
int func_present;
/*
 * bison & yacc don't prototype this in y.tab.h
 */
int yyparse (void);



/* Line 268 of yacc.c  */
#line 114 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     L_STRING = 258,
     L_NUMBER = 259,
     L_REAL = 260,
     L_BASIC_TYPE = 261,
     L_TYPE_MODIFIER = 262,
     L_DEFINED_NAME = 263,
     L_IDENTIFIER = 264,
     L_EFUN = 265,
     L_INC = 266,
     L_DEC = 267,
     L_ASSIGN = 268,
     L_LAND = 269,
     L_LOR = 270,
     L_LSH = 271,
     L_RSH = 272,
     L_ORDER = 273,
     L_NOT = 274,
     L_IF = 275,
     L_ELSE = 276,
     L_SWITCH = 277,
     L_CASE = 278,
     L_DEFAULT = 279,
     L_RANGE = 280,
     L_DOT_DOT_DOT = 281,
     L_WHILE = 282,
     L_DO = 283,
     L_FOR = 284,
     L_FOREACH = 285,
     L_IN = 286,
     L_BREAK = 287,
     L_CONTINUE = 288,
     L_RETURN = 289,
     L_ARROW = 290,
     L_INHERIT = 291,
     L_COLON_COLON = 292,
     L_ARRAY_OPEN = 293,
     L_MAPPING_OPEN = 294,
     L_FUNCTION_OPEN = 295,
     L_NEW_FUNCTION_OPEN = 296,
     L_SSCANF = 297,
     L_CATCH = 298,
     L_TREE = 299,
     L_ARRAY = 300,
     L_REF = 301,
     L_PARSE_COMMAND = 302,
     L_TIME_EXPRESSION = 303,
     L_CLASS = 304,
     L_NEW = 305,
     L_PARAMETER = 306,
     LOWER_THAN_ELSE = 307,
     L_NE = 308,
     L_EQ = 309
   };
#endif
/* Tokens.  */
#define L_STRING 258
#define L_NUMBER 259
#define L_REAL 260
#define L_BASIC_TYPE 261
#define L_TYPE_MODIFIER 262
#define L_DEFINED_NAME 263
#define L_IDENTIFIER 264
#define L_EFUN 265
#define L_INC 266
#define L_DEC 267
#define L_ASSIGN 268
#define L_LAND 269
#define L_LOR 270
#define L_LSH 271
#define L_RSH 272
#define L_ORDER 273
#define L_NOT 274
#define L_IF 275
#define L_ELSE 276
#define L_SWITCH 277
#define L_CASE 278
#define L_DEFAULT 279
#define L_RANGE 280
#define L_DOT_DOT_DOT 281
#define L_WHILE 282
#define L_DO 283
#define L_FOR 284
#define L_FOREACH 285
#define L_IN 286
#define L_BREAK 287
#define L_CONTINUE 288
#define L_RETURN 289
#define L_ARROW 290
#define L_INHERIT 291
#define L_COLON_COLON 292
#define L_ARRAY_OPEN 293
#define L_MAPPING_OPEN 294
#define L_FUNCTION_OPEN 295
#define L_NEW_FUNCTION_OPEN 296
#define L_SSCANF 297
#define L_CATCH 298
#define L_TREE 299
#define L_ARRAY 300
#define L_REF 301
#define L_PARSE_COMMAND 302
#define L_TIME_EXPRESSION 303
#define L_CLASS 304
#define L_NEW 305
#define L_PARAMETER 306
#define LOWER_THAN_ELSE 307
#define L_NE 308
#define L_EQ 309




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 125 "grammar.y"

    POINTER_INT pointer_int;
    long number;
    float real;
    char *string;
    struct { short num_arg; char flags; } argument;
    ident_hash_elem_t *ihe;
    parse_node_t *node;
    function_context_t *contextp;
    struct {
	parse_node_t *node;
        char num;
    } decl; /* 5 */
    struct {
	char num_local;
	char max_num_locals; 
	short context; 
	short save_current_type; 
	short save_exact_types;
    } func_block; /* 8 */



/* Line 293 of yacc.c  */
#line 282 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 294 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1895

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  102
/* YYNRULES -- Number of rules.  */
#define YYNRULES  260
/* YYNRULES -- Number of states.  */
#define YYNSTATES  491

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    73,    63,    56,     2,
      67,    68,    62,    60,    70,    61,     2,    64,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    69,    66,
      59,     2,     2,    53,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    74,     2,    75,    55,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    71,    54,    72,    65,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    57,    58
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     9,    10,    11,    13,    18,    20,
      22,    23,    25,    27,    29,    31,    33,    35,    36,    37,
      47,    51,    53,    55,    57,    60,    63,    65,    69,    70,
      71,    77,    78,    86,    88,    90,    92,    95,    98,   100,
     101,   103,   106,   108,   111,   114,   118,   120,   121,   123,
     126,   128,   132,   133,   136,   139,   144,   146,   147,   149,
     153,   156,   161,   166,   168,   170,   172,   173,   174,   180,
     183,   188,   192,   196,   198,   202,   203,   206,   209,   212,
     214,   216,   218,   220,   222,   224,   226,   229,   232,   233,
     240,   241,   250,   251,   262,   264,   266,   268,   270,   274,
     275,   284,   285,   287,   289,   291,   292,   303,   306,   309,
     310,   314,   320,   325,   330,   333,   335,   337,   341,   345,
     349,   353,   357,   361,   365,   369,   373,   377,   381,   385,
     389,   393,   397,   399,   402,   405,   408,   410,   414,   416,
     419,   423,   427,   433,   437,   441,   445,   449,   453,   457,
     461,   465,   469,   473,   477,   481,   485,   489,   493,   497,
     500,   503,   506,   509,   512,   515,   518,   521,   523,   525,
     527,   529,   531,   533,   536,   540,   541,   543,   546,   548,
     551,   553,   557,   558,   560,   563,   565,   569,   573,   575,
     577,   580,   582,   584,   586,   588,   589,   595,   599,   606,
     614,   623,   631,   637,   644,   650,   655,   657,   661,   663,
     665,   666,   673,   677,   683,   688,   693,   698,   700,   704,
     705,   709,   712,   717,   725,   735,   736,   740,   741,   745,
     747,   749,   753,   757,   759,   762,   766,   767,   771,   772,
     778,   779,   785,   792,   799,   800,   806,   807,   813,   814,
     822,   823,   832,   836,   840,   842,   845,   849,   853,   860,
     861
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      77,     0,    -1,    78,    -1,    78,    86,    79,    -1,    -1,
      -1,    66,    -1,   104,    36,   163,    66,    -1,     5,    -1,
       4,    -1,    -1,    62,    -1,   110,    -1,    66,    -1,     1,
      -1,     8,    -1,     9,    -1,    -1,    -1,   105,    83,    85,
      87,    67,   102,    68,    88,    84,    -1,   105,   108,    66,
      -1,    80,    -1,    94,    -1,    89,    -1,   104,    69,    -1,
      83,    85,    -1,    90,    -1,    90,    70,    91,    -1,    -1,
      -1,    92,    99,    93,    91,    66,    -1,    -1,   104,    49,
      85,    71,    95,    92,    72,    -1,     9,    -1,     8,    -1,
       6,    -1,    49,     8,    -1,    49,     9,    -1,    97,    -1,
      -1,    97,    -1,    98,    45,    -1,    99,    -1,    99,   139,
      -1,   100,    83,    -1,   100,    83,    96,    -1,    96,    -1,
      -1,   103,    -1,   103,    26,    -1,   101,    -1,   103,    70,
     101,    -1,    -1,     7,   104,    -1,   104,   107,    -1,    67,
      99,    83,    68,    -1,    99,    -1,    -1,   109,    -1,   109,
      70,   108,    -1,    83,    85,    -1,    83,    85,    13,   140,
      -1,    71,   112,   118,    72,    -1,   110,    -1,   124,    -1,
     128,    -1,    -1,    -1,   112,    99,   113,   117,    66,    -1,
      83,    96,    -1,    83,    96,    13,   140,    -1,   100,    83,
      96,    -1,   115,    13,   140,    -1,   114,    -1,   114,    70,
     117,    -1,    -1,   119,   118,    -1,     1,    66,    -1,   138,
      66,    -1,   176,    -1,   120,    -1,   122,    -1,   132,    -1,
     141,    -1,   111,    -1,    66,    -1,    32,    66,    -1,    33,
      66,    -1,    -1,    27,    67,   138,    68,   121,   119,    -1,
      -1,    28,   123,   119,    27,    67,   138,    68,    66,    -1,
      -1,    29,    67,   131,    66,   130,    66,   130,    68,   125,
     119,    -1,     8,    -1,   115,    -1,     9,    -1,   126,    -1,
     126,    70,   126,    -1,    -1,    30,    67,   127,    31,   140,
      68,   129,   119,    -1,    -1,   138,    -1,   130,    -1,   116,
      -1,    -1,    22,    67,   138,    68,   133,    71,   112,   135,
     134,    72,    -1,   135,   134,    -1,   119,   134,    -1,    -1,
      23,   136,    69,    -1,    23,   136,    25,   136,    69,    -1,
      23,   136,    25,    69,    -1,    23,    25,   136,    69,    -1,
      24,    69,    -1,   137,    -1,   163,    -1,   137,    54,   137,
      -1,   137,    55,   137,    -1,   137,    56,   137,    -1,   137,
      58,   137,    -1,   137,    57,   137,    -1,   137,    18,   137,
      -1,   137,    59,   137,    -1,   137,    16,   137,    -1,   137,
      17,   137,    -1,   137,    60,   137,    -1,   137,    61,   137,
      -1,   137,    62,   137,    -1,   137,    63,   137,    -1,   137,
      64,   137,    -1,    67,   137,    68,    -1,     4,    -1,    61,
       4,    -1,    19,     4,    -1,    65,     4,    -1,   140,    -1,
     138,    70,   140,    -1,    46,    -1,   139,   148,    -1,   148,
      13,   140,    -1,     1,    13,   140,    -1,   140,    53,   140,
      69,   140,    -1,   140,    15,   140,    -1,   140,    14,   140,
      -1,   140,    54,   140,    -1,   140,    55,   140,    -1,   140,
      56,   140,    -1,   140,    58,   140,    -1,   140,    57,   140,
      -1,   140,    18,   140,    -1,   140,    59,   140,    -1,   140,
      16,   140,    -1,   140,    17,   140,    -1,   140,    60,   140,
      -1,   140,    61,   140,    -1,   140,    62,   140,    -1,   140,
      63,   140,    -1,   140,    64,   140,    -1,   106,   140,    -1,
      11,   148,    -1,    12,   148,    -1,    19,   140,    -1,    65,
     140,    -1,    61,   140,    -1,   148,    11,    -1,   148,    12,
      -1,   150,    -1,   157,    -1,   158,    -1,   159,    -1,    82,
      -1,    81,    -1,    34,    66,    -1,    34,   138,    66,    -1,
      -1,   144,    -1,   144,    70,    -1,   140,    -1,   140,    26,
      -1,   143,    -1,   144,    70,   143,    -1,    -1,   146,    -1,
     146,    70,    -1,   147,    -1,   146,    70,   147,    -1,   140,
      69,   140,    -1,   150,    -1,    41,    -1,    40,   174,    -1,
     167,    -1,     8,    -1,     9,    -1,    51,    -1,    -1,    73,
      67,   151,   138,    68,    -1,   150,    35,    85,    -1,   150,
      74,   138,    25,   138,    75,    -1,   150,    74,    59,   138,
      25,   138,    75,    -1,   150,    74,    59,   138,    25,    59,
     138,    75,    -1,   150,    74,   138,    25,    59,   138,    75,
      -1,   150,    74,   138,    25,    75,    -1,   150,    74,    59,
     138,    25,    75,    -1,   150,    74,    59,   138,    75,    -1,
     150,    74,   138,    75,    -1,   162,    -1,    67,   138,    68,
      -1,   154,    -1,   156,    -1,    -1,     6,   152,    67,   102,
      68,   110,    -1,   149,    69,    68,    -1,   149,    70,   144,
      69,    68,    -1,    40,   138,    69,    68,    -1,    39,   145,
      75,    68,    -1,    38,   142,    72,    68,    -1,   110,    -1,
      67,   138,    68,    -1,    -1,    43,   155,   153,    -1,    44,
     110,    -1,    44,    67,   138,    68,    -1,    42,    67,   140,
      70,   140,   161,    68,    -1,    47,    67,   140,    70,   140,
      70,   140,   161,    68,    -1,    -1,    48,   160,   153,    -1,
      -1,    70,   148,   161,    -1,   164,    -1,   164,    -1,    67,
     163,    68,    -1,   163,    60,   163,    -1,     3,    -1,   164,
       3,    -1,    85,    69,   140,    -1,    -1,   166,    70,   165,
      -1,    -1,   174,    67,   168,   142,    68,    -1,    -1,    50,
      67,   169,   142,    68,    -1,    50,    67,    49,     8,   166,
      68,    -1,    50,    67,    49,     9,   166,    68,    -1,    -1,
       8,    67,   170,   142,    68,    -1,    -1,   175,    67,   171,
     142,    68,    -1,    -1,   150,    35,    85,    67,   172,   142,
      68,    -1,    -1,    67,    62,   138,    68,    67,   173,   142,
      68,    -1,    10,    37,    85,    -1,    10,    37,    50,    -1,
       9,    -1,    37,    85,    -1,     6,    37,    85,    -1,    85,
      37,    85,    -1,    20,    67,   138,    68,   119,   177,    -1,
      -1,    21,   119,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   215,   215,   223,   229,   235,   237,   247,   343,   351,
     360,   364,   372,   380,   385,   393,   398,   403,   445,   402,
     503,   510,   511,   512,   515,   533,   547,   548,   551,   554,
     553,   563,   562,   643,   644,   662,   663,   680,   696,   698,
     705,   706,   714,   715,   723,   730,   739,   753,   758,   759,
     778,   790,   805,   809,   832,   841,   849,   851,   858,   859,
     863,   889,   945,   955,   955,   955,   959,   965,   964,   986,
     998,  1033,  1045,  1078,  1084,  1096,  1100,  1107,  1115,  1128,
    1129,  1130,  1131,  1132,  1133,  1139,  1144,  1167,  1181,  1180,
    1196,  1195,  1211,  1210,  1236,  1258,  1269,  1287,  1293,  1305,
    1304,  1326,  1330,  1334,  1340,  1350,  1349,  1390,  1397,  1405,
    1413,  1421,  1436,  1451,  1465,  1482,  1497,  1514,  1519,  1524,
    1529,  1534,  1539,  1548,  1553,  1558,  1563,  1568,  1573,  1578,
    1583,  1588,  1593,  1598,  1603,  1608,  1616,  1621,  1629,  1633,
    1662,  1688,  1694,  1719,  1726,  1733,  1759,  1764,  1788,  1811,
    1826,  1871,  1909,  1914,  1919,  2090,  2185,  2266,  2271,  2367,
    2389,  2411,  2434,  2444,  2456,  2481,  2504,  2526,  2527,  2528,
    2529,  2530,  2531,  2535,  2542,  2564,  2568,  2573,  2581,  2586,
    2594,  2601,  2615,  2620,  2625,  2633,  2644,  2663,  2671,  2787,
    2788,  2797,  2798,  2841,  2858,  2864,  2863,  2895,  2920,  2928,
    2933,  2941,  2949,  2954,  2959,  3005,  3060,  3061,  3066,  3067,
    3069,  3068,  3125,  3163,  3258,  3281,  3290,  3302,  3307,  3316,
    3315,  3330,  3337,  3346,  3356,  3368,  3367,  3383,  3389,  3404,
    3413,  3414,  3419,  3427,  3428,  3435,  3447,  3451,  3462,  3461,
    3477,  3476,  3509,  3545,  3565,  3564,  3634,  3633,  3707,  3706,
    3760,  3759,  3791,  3817,  3833,  3834,  3849,  3865,  3881,  3916,
    3921
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "L_STRING", "L_NUMBER", "L_REAL",
  "L_BASIC_TYPE", "L_TYPE_MODIFIER", "L_DEFINED_NAME", "L_IDENTIFIER",
  "L_EFUN", "L_INC", "L_DEC", "L_ASSIGN", "L_LAND", "L_LOR", "L_LSH",
  "L_RSH", "L_ORDER", "L_NOT", "L_IF", "L_ELSE", "L_SWITCH", "L_CASE",
  "L_DEFAULT", "L_RANGE", "L_DOT_DOT_DOT", "L_WHILE", "L_DO", "L_FOR",
  "L_FOREACH", "L_IN", "L_BREAK", "L_CONTINUE", "L_RETURN", "L_ARROW",
  "L_INHERIT", "L_COLON_COLON", "L_ARRAY_OPEN", "L_MAPPING_OPEN",
  "L_FUNCTION_OPEN", "L_NEW_FUNCTION_OPEN", "L_SSCANF", "L_CATCH",
  "L_TREE", "L_ARRAY", "L_REF", "L_PARSE_COMMAND", "L_TIME_EXPRESSION",
  "L_CLASS", "L_NEW", "L_PARAMETER", "LOWER_THAN_ELSE", "'?'", "'|'",
  "'^'", "'&'", "L_NE", "L_EQ", "'<'", "'+'", "'-'", "'*'", "'%'", "'/'",
  "'~'", "';'", "'('", "')'", "':'", "','", "'{'", "'}'", "'$'", "'['",
  "']'", "$accept", "all", "program", "possible_semi_colon", "inheritance",
  "real", "number", "optional_star", "block_or_semi", "identifier", "def",
  "$@1", "@2", "modifier_change", "member_name", "member_name_list",
  "member_list", "$@3", "type_decl", "@4", "new_local_name", "atomic_type",
  "opt_atomic_type", "basic_type", "arg_type", "new_arg", "argument",
  "argument_list", "type_modifier_list", "type", "cast", "opt_basic_type",
  "name_list", "new_name", "block", "decl_block", "local_declarations",
  "$@5", "new_local_def", "single_new_local_def",
  "single_new_local_def_with_init", "local_name_list", "statements",
  "statement", "while", "$@6", "do", "$@7", "for", "$@8", "foreach_var",
  "foreach_vars", "foreach", "$@9", "for_expr", "first_for_expr", "switch",
  "$@10", "switch_block", "case", "case_label", "constant", "comma_expr",
  "ref", "expr0", "return", "expr_list", "expr_list_node", "expr_list2",
  "expr_list3", "expr_list4", "assoc_pair", "lvalue",
  "l_new_function_open", "expr4", "@11", "@12", "expr_or_block", "catch",
  "@13", "tree", "sscanf", "parse_command", "time_expression", "@14",
  "lvalue_list", "string", "string_con1", "string_con2", "class_init",
  "opt_class_init", "function_call", "@15", "@16", "@17", "@18", "@19",
  "@20", "efun_override", "function_name", "cond", "optional_else_part", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,    63,   124,    94,    38,   308,   309,    60,
      43,    45,    42,    37,    47,   126,    59,    40,    41,    58,
      44,   123,   125,    36,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    78,    78,    79,    79,    80,    81,    82,
      83,    83,    84,    84,    84,    85,    85,    87,    88,    86,
      86,    86,    86,    86,    89,    90,    91,    91,    92,    93,
      92,    95,    94,    96,    96,    97,    97,    97,    98,    98,
      99,    99,   100,   100,   101,   101,   101,   102,   102,   102,
     103,   103,   104,   104,   105,   106,   107,   107,   108,   108,
     109,   109,   110,   111,   111,   111,   112,   113,   112,   114,
     114,   115,   116,   117,   117,   118,   118,   118,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   121,   120,
     123,   122,   125,   124,   126,   126,   126,   127,   127,   129,
     128,   130,   130,   131,   131,   133,   132,   134,   134,   134,
     135,   135,   135,   135,   135,   136,   136,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   138,   138,   139,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   141,   141,   142,   142,   142,   143,   143,
     144,   144,   145,   145,   145,   146,   146,   147,   148,   149,
     149,   150,   150,   150,   150,   151,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     152,   150,   150,   150,   150,   150,   150,   153,   153,   155,
     154,   156,   156,   157,   158,   160,   159,   161,   161,   162,
     163,   163,   163,   164,   164,   165,   166,   166,   168,   167,
     169,   167,   167,   167,   170,   167,   171,   167,   172,   167,
     173,   167,   174,   174,   175,   175,   175,   175,   176,   177,
     177
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     0,     0,     1,     4,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     0,     0,     9,
       3,     1,     1,     1,     2,     2,     1,     3,     0,     0,
       5,     0,     7,     1,     1,     1,     2,     2,     1,     0,
       1,     2,     1,     2,     2,     3,     1,     0,     1,     2,
       1,     3,     0,     2,     2,     4,     1,     0,     1,     3,
       2,     4,     4,     1,     1,     1,     0,     0,     5,     2,
       4,     3,     3,     1,     3,     0,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     0,     6,
       0,     8,     0,    10,     1,     1,     1,     1,     3,     0,
       8,     0,     1,     1,     1,     0,    10,     2,     2,     0,
       3,     5,     4,     4,     2,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     2,     2,     2,     1,     3,     1,     2,
       3,     3,     5,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     2,     3,     0,     1,     2,     1,     2,
       1,     3,     0,     1,     2,     1,     3,     3,     1,     1,
       2,     1,     1,     1,     1,     0,     5,     3,     6,     7,
       8,     7,     5,     6,     5,     4,     1,     3,     1,     1,
       0,     6,     3,     5,     4,     4,     4,     1,     3,     0,
       3,     2,     4,     7,     9,     0,     3,     0,     3,     1,
       1,     3,     3,     1,     2,     3,     0,     3,     0,     5,
       0,     5,     6,     6,     0,     5,     0,     5,     0,     7,
       0,     8,     3,     3,     1,     2,     3,     3,     6,     0,
       2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,    52,     1,    52,    21,     5,    23,    22,    57,
      10,    53,     6,     3,    35,     0,     0,    24,    40,     0,
      56,    54,    11,     0,     0,    58,   233,     0,     0,   230,
      36,    37,     0,    41,    15,    16,    60,    20,    10,     0,
       0,     7,   234,    31,     0,     0,     0,    59,   231,   232,
      28,     0,     9,     8,   210,   192,   193,     0,     0,     0,
       0,     0,     0,     0,     0,   189,     0,   219,     0,   138,
       0,   225,     0,   194,     0,     0,     0,     0,   172,   171,
       0,     0,     0,    61,     0,     0,   167,   208,   209,   168,
     169,   170,   206,   229,   191,     0,     0,    39,    60,    39,
       0,     0,     0,   244,     0,     0,   160,   188,   161,   162,
     255,   178,     0,   180,   176,     0,     0,   183,   185,     0,
     136,   190,     0,     0,     0,    66,   221,     0,     0,   240,
     164,   163,    35,     0,     0,    10,     0,   195,     0,   159,
     139,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   165,   166,
       0,     0,     0,     0,     0,   238,   246,    34,    33,    46,
      42,    10,    50,     0,    48,    32,    29,   141,   256,    39,
       0,   253,   252,   179,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   217,   220,     0,     0,     0,   226,     0,
       0,    36,    37,     0,     0,   207,     0,   257,   144,   143,
     152,   153,   150,     0,   145,   146,   147,   149,   148,   151,
     154,   155,   156,   157,   158,   140,   212,     0,   197,     0,
       0,     0,     0,    43,    44,    18,    49,    39,    10,     0,
       0,   216,   181,   187,   215,   186,   214,   137,     0,     0,
     222,     0,     0,     0,     0,    90,     0,     0,     0,     0,
       0,    85,    67,    63,    84,     0,     0,    80,    81,    64,
      65,    82,     0,    83,    79,     0,   236,   236,     0,     0,
      55,     0,     0,     0,     0,   248,     0,     0,   205,     0,
       0,    45,     0,    51,     0,    26,     0,     0,   245,   227,
     218,    77,     0,     0,     0,     0,     0,    39,    86,    87,
     173,     0,    10,    62,    76,    78,     0,     0,     0,   241,
     250,   196,   142,   213,     0,     0,   204,     0,   202,     0,
     239,   247,    14,    13,    19,    12,    25,    10,    30,   211,
       0,     0,     0,     0,     0,     0,    10,     0,   104,   103,
       0,   102,    94,    96,    95,    97,     0,   174,     0,    73,
       0,     0,   242,     0,   243,     0,     0,     0,   203,     0,
       0,   198,    27,   227,   223,     0,   105,    88,     0,     0,
       0,     0,    39,     0,    69,    10,    68,   227,     0,   237,
       0,   249,     0,   199,   201,   228,   259,     0,     0,     0,
      71,    72,     0,    98,     0,     0,    74,     0,     0,   251,
     200,     0,   258,    66,    89,     0,     0,    99,    70,   224,
     235,   260,    39,     0,     0,     0,     0,     0,     0,    91,
      92,   100,   132,     0,     0,     0,     0,     0,     0,   115,
     116,   114,     0,     0,     0,     0,   134,     0,   133,   135,
       0,     0,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   108,   106,   107,
      93,   113,   131,   112,     0,     0,   124,   125,   122,   117,
     118,   119,   121,   120,   123,   126,   127,   128,   129,   130,
     111
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    13,     5,    78,    79,   294,   334,    80,
       6,    45,   292,     7,   295,   296,    99,   238,     8,    50,
     169,    18,    19,   170,   171,   172,   173,   174,     9,    10,
      81,    21,    24,    25,   263,   264,   196,   312,   359,   354,
     348,   360,   265,   442,   267,   398,   268,   305,   269,   445,
     355,   356,   270,   425,   349,   350,   271,   397,   443,   444,
     438,   439,   272,    82,   120,   273,   112,   113,   114,   116,
     117,   118,    84,    85,    86,   206,   102,   194,    87,   123,
      88,    89,    90,    91,   128,   341,    92,   440,    93,   389,
     317,    94,   231,   200,   180,   232,   324,   365,    95,    96,
     274,   412
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -396
static const yytype_int16 yypact[] =
{
    -396,    60,    41,  -396,    23,  -396,     2,  -396,  -396,    88,
      14,  -396,  -396,  -396,  -396,    11,   238,  -396,    77,   111,
    -396,  -396,  -396,   276,    82,   110,  -396,    11,    65,    49,
     115,   123,   134,  -396,  -396,  -396,     4,  -396,    14,   -18,
      11,  -396,  -396,  -396,  1736,   107,   276,  -396,  -396,  -396,
    -396,   208,  -396,  -396,   205,    -1,    21,   226,   189,   189,
    1736,   276,  1237,   586,  1736,  -396,   200,  -396,   -10,  -396,
     222,  -396,   262,  -396,  1736,  1736,  1022,   299,  -396,  -396,
     307,  1736,   189,   989,   248,   252,    52,  -396,  -396,  -396,
    -396,  -396,  -396,    49,  -396,   318,   338,   154,   340,     5,
    1736,   276,   339,  -396,   160,  1310,  -396,     0,  -396,  -396,
    -396,   626,   329,  -396,   337,   254,   333,   342,  -396,   268,
     989,   318,  1736,    79,  1736,  -396,  -396,  1736,    79,   364,
    -396,  -396,   104,   372,  1736,    14,    64,  -396,   276,  -396,
    -396,  1736,  1736,  1736,  1736,  1736,  1736,  1736,  1736,  1736,
    1736,  1736,  1736,  1736,  1736,  1736,  1736,  1736,  -396,  -396,
    1736,   346,  1736,   276,  1381,  -396,  -396,  -396,  -396,  -396,
     375,    14,  -396,   350,    20,  -396,  -396,   989,  -396,   154,
    1452,  -396,  -396,  -396,   352,  1164,  1736,   356,   659,   357,
    1736,   334,  1736,  -396,  -396,   150,   732,  1774,  -396,   374,
    1452,  -396,  -396,   167,   359,  -396,  1736,  -396,  1059,   314,
     213,   213,   393,   480,  1202,  1346,  1488,  1352,  1352,   393,
     239,   239,  -396,  -396,  -396,   989,  -396,   330,   361,  1736,
     102,  1452,  1452,  -396,   394,  -396,  -396,    89,    14,   362,
     363,  -396,  -396,   989,  -396,  -396,  -396,   989,  1736,   187,
    -396,     7,   365,   366,   367,  -396,   368,   370,   373,   376,
    1523,  -396,  -396,  -396,  -396,   395,   878,  -396,  -396,  -396,
    -396,  -396,   100,  -396,  -396,  1736,  -396,  -396,   379,   371,
    -396,   196,  1736,   397,  1736,  -396,   103,   440,  -396,   398,
     401,  -396,     9,  -396,   276,   402,   404,   358,  -396,  1796,
    -396,  -396,  1736,  1736,  1736,   951,  1093,   176,  -396,  -396,
    -396,   179,    14,  -396,  -396,  -396,  1825,   265,   266,  -396,
    -396,  -396,   989,  -396,  1452,   513,  -396,  1736,  -396,   106,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,    14,  -396,  -396,
     189,   403,   273,   277,   286,   441,    14,   460,  -396,  -396,
     408,   406,  -396,  -396,  -396,   415,   458,  -396,   394,   422,
     427,  1736,  -396,   276,  -396,  1452,   432,  1736,  -396,   126,
     142,  -396,  -396,   433,  -396,   951,  -396,  -396,   435,   394,
    1736,  1594,   176,  1736,   491,    14,  -396,  1796,   437,  -396,
     442,  -396,   144,  -396,  -396,  -396,   487,   438,   951,  1736,
    -396,   989,   445,  -396,   553,  1736,  -396,   444,  1736,  -396,
    -396,   951,  -396,  -396,  -396,   289,  1665,  -396,   989,  -396,
     989,  -396,   130,   454,   459,   951,    24,   457,   805,  -396,
    -396,  -396,  -396,   524,   148,   525,   526,   148,    30,  1130,
     471,  -396,   805,   473,   805,   951,  -396,   477,  -396,  -396,
     236,   139,  -396,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,   478,   183,   218,   218,   400,  1275,
    1417,  1559,  1494,  1494,   400,   263,   263,  -396,  -396,  -396,
    -396
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -396,  -396,  -396,  -396,  -396,  -396,  -396,    -6,  -396,    -8,
    -396,  -396,  -396,  -396,  -396,   211,  -396,  -396,  -396,  -396,
    -218,  -396,  -396,    -7,  -262,   321,   383,  -396,   561,  -396,
    -396,  -396,   528,  -396,   -61,  -396,   162,  -396,  -396,   267,
    -396,   191,   311,  -187,  -396,  -396,  -396,  -396,  -396,  -396,
     197,  -396,  -396,  -396,  -344,  -396,  -396,  -396,   -84,   159,
    -395,  1235,    59,   412,   -41,  -396,  -149,  -167,   421,  -396,
    -396,   396,   -53,  -396,   -35,  -396,  -396,   465,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -303,  -396,   -14,   -15,  -396,
     308,  -396,  -396,  -396,  -396,  -396,  -396,  -396,   535,  -396,
    -396,  -396
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -255
static const yytype_int16 yytable[] =
{
      29,    28,    20,    83,    23,   106,   108,   126,    32,   266,
     332,    14,    29,    39,    26,    36,   291,    44,   242,   109,
     100,   111,   115,   107,   107,    29,    49,    26,   432,   140,
       4,   240,    46,   130,   131,   163,   -15,   402,    98,   447,
     139,    -2,    40,   433,   346,   346,   236,   107,     4,   434,
      48,   278,    42,   110,   133,   451,   474,   124,   -16,   177,
       3,   125,   193,  -188,  -188,  -188,   103,   193,    12,   135,
     395,   -17,   424,   301,   164,   333,    22,   175,    27,   266,
     125,   191,   289,   290,   407,   435,   197,   163,  -254,   436,
     237,   437,   176,   178,    14,    14,   182,   167,   168,   452,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   242,   345,   225,
     346,   111,   -38,   119,    15,    40,   164,   287,   325,   204,
     207,    41,   205,   -39,   190,   136,    14,    16,   133,   111,
     384,   101,    26,   432,   111,   243,   192,   115,    37,   247,
     125,    26,   432,   426,   427,   228,    33,    17,   433,   111,
      14,   400,   167,   168,   136,   234,   315,   433,    34,    35,
     190,  -210,   190,   190,    97,   366,   190,   288,   326,   133,
      38,   371,    14,   195,   352,   353,   -15,   432,   396,   262,
     111,   111,    26,   203,   -16,    54,   190,    55,    56,    57,
     435,   393,   433,   133,   436,    43,   437,   299,   473,   435,
     181,   414,   190,   436,   190,   437,   390,   394,   250,   410,
     190,   100,   -47,   230,   421,   133,    61,    62,    63,    64,
      65,   335,    67,    68,   316,   279,   339,   190,   431,    72,
      73,   322,   101,   111,   435,   357,    30,    31,   436,   190,
     475,   249,   453,   454,   455,   300,   105,   190,   470,   158,
     159,   160,    77,   104,   321,   281,   190,   122,   141,   142,
     143,   144,   145,   153,   154,   155,   156,   157,   462,   463,
     464,   465,   466,   111,    34,    35,   336,   373,   286,   127,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   155,   156,   157,   472,   107,   358,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   311,
     387,   161,   162,   186,   111,   464,   465,   466,   141,   129,
     143,   144,   145,   362,   364,   363,   363,   189,   190,   401,
     379,   375,   404,   190,   138,   376,   329,   190,   141,   142,
     143,   144,   145,    44,   377,   388,   190,   423,   467,   190,
     469,   342,   343,   344,   418,   351,   137,   420,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   358,
     201,   202,   276,   277,   369,   165,   370,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   283,
     284,   184,   167,   168,   248,   166,   179,   185,   187,   143,
     144,    29,   188,   199,   226,   262,   453,   454,   235,    29,
     241,    69,    29,    39,   244,   246,   392,   280,   285,   125,
     297,   298,   302,   303,   304,   306,    29,   307,   320,   308,
     351,    51,   309,    26,    52,    53,    54,   319,    55,    56,
      57,    58,    59,   153,   154,   155,   156,   157,   415,    60,
     462,   463,   464,   465,   466,   323,   330,   313,   378,   331,
     338,   374,   337,   380,   381,   351,   190,    61,    62,    63,
      64,    65,    66,    67,    68,   382,    69,    70,    71,   383,
      72,    73,   385,   386,   141,   142,   143,   144,   145,   327,
     391,    74,   399,   340,   405,    75,   408,    76,   411,   413,
     409,   416,   419,    77,    51,   328,    26,    52,    53,    54,
     429,    55,    56,    57,    58,    59,   441,   430,   446,   448,
     449,    40,    60,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   468,   471,   490,   372,   282,
      61,    62,    63,    64,    65,    66,    67,    68,   293,    69,
      70,    71,   239,    72,    73,    11,    47,   141,   142,   143,
     144,   145,   367,   347,    74,   422,   406,   314,    75,   403,
      76,   428,   233,   227,   245,   318,    77,    51,   368,    26,
      52,    53,    54,   198,    55,    56,    57,    58,    59,   121,
       0,     0,     0,     0,     0,    60,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,     0,     0,
       0,   417,     0,    61,    62,    63,    64,    65,    66,    67,
      68,     0,    69,    70,    71,     0,    72,    73,     0,     0,
     141,   142,   143,   144,   145,     0,     0,    74,     0,     0,
       0,    75,   183,    76,     0,     0,     0,     0,     0,    77,
      51,  -182,    26,    52,    53,    54,     0,    55,    56,    57,
      58,    59,     0,     0,     0,     0,     0,     0,    60,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,     0,     0,     0,     0,     0,    61,    62,    63,    64,
      65,    66,    67,    68,     0,    69,    70,    71,     0,    72,
      73,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,     0,     0,     0,    75,     0,    76,     0,     0,     0,
       0,     0,    77,   251,  -184,    26,    52,    53,   132,     0,
      55,    56,    57,    58,    59,     0,     0,     0,     0,     0,
       0,    60,   252,     0,   253,     0,     0,     0,     0,   254,
     255,   256,   257,     0,   258,   259,   260,     0,     0,    61,
      62,    63,    64,    65,    66,    67,    68,   -39,    69,    70,
      71,   133,    72,    73,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,     0,     0,     0,    75,   261,    76,
       0,     0,     0,   125,   -75,    77,    51,     0,    26,    52,
      53,    54,     0,    55,    56,    57,    58,    59,     0,     0,
       0,     0,     0,     0,    60,   252,     0,   253,   426,   427,
       0,     0,   254,   255,   256,   257,     0,   258,   259,   260,
       0,     0,    61,    62,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    71,     0,    72,    73,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,     0,     0,     0,
      75,   261,    76,     0,     0,     0,   125,  -109,    77,   251,
       0,    26,    52,    53,    54,     0,    55,    56,    57,    58,
      59,     0,     0,     0,     0,     0,     0,    60,   252,     0,
     253,     0,     0,     0,     0,   254,   255,   256,   257,     0,
     258,   259,   260,     0,     0,    61,    62,    63,    64,    65,
      66,    67,    68,     0,    69,    70,    71,     0,    72,    73,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
       0,     0,     0,    75,   261,    76,     0,     0,     0,   125,
     -75,    77,    51,     0,    26,    52,    53,    54,     0,    55,
      56,    57,    58,    59,     0,     0,     0,     0,     0,     0,
      60,   252,     0,   253,     0,     0,     0,     0,   254,   255,
     256,   257,     0,   258,   259,   260,     0,     0,    61,    62,
      63,    64,    65,    66,    67,    68,     0,    69,    70,    71,
       0,    72,    73,   141,   142,   143,   144,   145,     0,     0,
       0,     0,    74,     0,     0,     0,    75,   261,    76,     0,
       0,     0,   125,    51,    77,    26,    52,    53,   132,     0,
      55,    56,    57,    58,    59,     0,     0,     0,     0,     0,
       0,    60,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,     0,     0,     0,     0,     0,    61,
      62,    63,    64,    65,    66,    67,    68,   -39,    69,    70,
      71,   133,    72,    73,     0,   143,   144,   145,     0,     0,
       0,     0,     0,    74,   134,     0,     0,    75,     0,    76,
       0,     0,     0,     0,    51,    77,    26,    52,    53,   132,
       0,    55,    56,    57,    58,    59,     0,     0,     0,     0,
       0,     0,    60,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,     0,     0,     0,     0,     0,     0,
      61,    62,    63,    64,    65,    66,    67,    68,   -39,    69,
      70,    71,   133,    72,    73,     0,   453,   454,   455,     0,
       0,     0,     0,     0,    74,     0,     0,     0,    75,  -101,
      76,     0,     0,     0,     0,    51,    77,    26,    52,    53,
      54,     0,    55,    56,    57,    58,    59,     0,     0,     0,
       0,     0,     0,    60,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,     0,     0,     0,     0,     0,
       0,    61,    62,    63,    64,    65,    66,    67,    68,     0,
      69,    70,    71,     0,    72,    73,     0,     0,   143,   144,
     145,     0,     0,     0,     0,    74,     0,     0,     0,    75,
       0,    76,  -177,     0,     0,     0,  -177,    77,    51,     0,
      26,    52,    53,    54,     0,    55,    56,    57,    58,    59,
       0,     0,     0,     0,     0,     0,    60,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,     0,     0,     0,
       0,     0,     0,     0,    61,    62,    63,    64,    65,    66,
      67,    68,     0,    69,    70,    71,     0,    72,    73,     0,
       0,   453,   454,   455,     0,     0,     0,     0,    74,     0,
       0,     0,    75,     0,    76,     0,     0,     0,     0,  -175,
      77,    51,     0,    26,    52,    53,    54,     0,    55,    56,
      57,    58,    59,     0,     0,     0,     0,     0,     0,    60,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
       0,     0,     0,     0,     0,     0,     0,    61,    62,    63,
      64,    65,    66,    67,    68,     0,    69,    70,    71,     0,
      72,    73,   143,   144,   145,     0,     0,     0,   143,   144,
     145,    74,   134,     0,     0,    75,     0,    76,     0,     0,
       0,     0,    51,    77,    26,    52,    53,    54,     0,    55,
      56,    57,    58,    59,     0,     0,     0,     0,     0,     0,
      60,     0,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   152,   153,   154,   155,   156,   157,     0,    61,    62,
      63,    64,    65,    66,    67,    68,     0,    69,    70,    71,
       0,    72,    73,   453,   454,   455,     0,     0,     0,     0,
     229,     0,    74,     0,     0,     0,    75,     0,    76,     0,
       0,     0,     0,    51,    77,    26,    52,    53,    54,     0,
      55,    56,    57,    58,    59,     0,     0,     0,     0,     0,
       0,    60,     0,   458,   459,   460,   461,   462,   463,   464,
     465,   466,     0,     0,     0,     0,     0,     0,     0,    61,
      62,    63,    64,    65,    66,    67,    68,     0,    69,    70,
      71,     0,    72,    73,   143,   144,   145,     0,     0,     0,
     453,   454,   455,    74,     0,     0,     0,    75,     0,    76,
    -175,     0,     0,     0,    51,    77,    26,    52,    53,    54,
       0,    55,    56,    57,    58,    59,     0,     0,     0,     0,
       0,     0,    60,     0,     0,   150,   151,   152,   153,   154,
     155,   156,   157,   461,   462,   463,   464,   465,   466,     0,
      61,    62,    63,    64,    65,    66,    67,    68,     0,    69,
      70,    71,     0,    72,    73,   453,   454,   455,     0,     0,
       0,     0,     0,     0,    74,     0,     0,     0,    75,   310,
      76,     0,     0,     0,     0,    51,    77,    26,    52,    53,
      54,     0,    55,    56,    57,    58,    59,     0,     0,     0,
       0,     0,     0,    60,     0,     0,   459,   460,   461,   462,
     463,   464,   465,   466,     0,     0,     0,     0,     0,     0,
       0,    61,    62,    63,    64,    65,    66,    67,    68,     0,
      69,    70,    71,     0,    72,    73,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    74,     0,     0,     0,    75,
    -101,    76,     0,     0,     0,     0,    51,    77,    26,    52,
      53,    54,   450,    55,    56,    57,    58,    59,     0,     0,
       0,     0,     0,     0,    60,     0,     0,     0,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,    61,    62,    63,    64,    65,    66,    67,    68,
     450,    69,    70,    71,     0,    72,    73,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,     0,     0,     0,
      75,     0,    76,  -101,     0,     0,     0,    51,    77,    26,
      52,    53,    54,     0,    55,    56,    57,    58,    59,     0,
       0,     0,     0,     0,     0,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    61,    62,    63,    64,    65,    66,    67,
      68,     0,    69,    70,    71,     0,    72,    73,   141,   142,
     143,   144,   145,     0,     0,     0,     0,    74,     0,     0,
       0,    75,     0,    76,     0,     0,     0,     0,     0,    77,
     141,   142,   143,   144,   145,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   141,
     142,   143,   144,   145,   275,     0,     0,     0,     0,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,     0,     0,     0,     0,     0,   340,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
       0,     0,     0,     0,     0,   361
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-396))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      15,    15,     9,    44,    10,    58,    59,    68,    16,   196,
       1,     6,    27,    27,     3,    23,   234,    13,   185,    60,
      13,    62,    63,    58,    59,    40,    40,     3,     4,    82,
       7,   180,    38,    74,    75,    35,    37,   381,    46,   434,
      81,     0,    60,    19,   306,   307,    26,    82,     7,    25,
      68,   200,     3,    61,    49,    25,   451,    67,    37,   100,
       0,    71,   123,    11,    12,    13,    67,   128,    66,    76,
     373,    67,   416,    66,    74,    66,    62,    72,    67,   266,
      71,   122,   231,   232,   387,    61,   127,    35,    67,    65,
      70,    67,    99,   101,     6,     6,   104,     8,     9,    69,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   284,   305,   160,
     382,   162,    45,    64,    36,    60,    74,    25,    25,   135,
     138,    66,    68,    45,    70,    76,     6,    49,    49,   180,
     358,    37,     3,     4,   185,   186,    67,   188,    66,   190,
      71,     3,     4,    23,    24,   163,    45,    69,    19,   200,
       6,   379,     8,     9,   105,   171,    66,    19,     8,     9,
      70,    67,    70,    70,    67,   324,    70,    75,    75,    49,
      70,    75,     6,   124,     8,     9,    71,     4,   375,   196,
     231,   232,     3,   134,    71,     6,    70,     8,     9,    10,
      61,    75,    19,    49,    65,    71,    67,   248,    69,    61,
      50,   398,    70,    65,    70,    67,   365,    75,    68,    75,
      70,    13,    68,   164,   411,    49,    37,    38,    39,    40,
      41,   292,    43,    44,   275,    68,   297,    70,   425,    50,
      51,   282,    37,   284,    61,    66,     8,     9,    65,    70,
      67,   192,    16,    17,    18,    68,    67,    70,   445,    11,
      12,    13,    73,    37,    68,   206,    70,    67,    14,    15,
      16,    17,    18,    60,    61,    62,    63,    64,    60,    61,
      62,    63,    64,   324,     8,     9,   294,   340,   229,    67,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    62,    63,    64,    68,   340,   312,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,   260,
     361,    69,    70,    69,   365,    62,    63,    64,    14,    67,
      16,    17,    18,    68,    68,    70,    70,    69,    70,   380,
     346,    68,   383,    70,    37,    68,   287,    70,    14,    15,
      16,    17,    18,    13,    68,   363,    70,    68,   442,    70,
     444,   302,   303,   304,   405,   306,    67,   408,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,   385,
       8,     9,     8,     9,   325,    67,   327,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    69,
      70,    72,     8,     9,    70,    67,    67,    70,    75,    16,
      17,   426,    70,    49,    68,   422,    16,    17,    68,   434,
      68,    46,   437,   437,    68,    68,   367,    68,    67,    71,
      68,    68,    67,    67,    67,    67,   451,    67,    67,    66,
     381,     1,    66,     3,     4,     5,     6,    68,     8,     9,
      10,    11,    12,    60,    61,    62,    63,    64,   399,    19,
      60,    61,    62,    63,    64,    68,    68,    72,    27,    68,
      66,    68,    70,    13,    66,   416,    70,    37,    38,    39,
      40,    41,    42,    43,    44,    70,    46,    47,    48,    31,
      50,    51,    70,    66,    14,    15,    16,    17,    18,    59,
      68,    61,    67,    70,    13,    65,    69,    67,    21,    71,
      68,    66,    68,    73,     1,    75,     3,     4,     5,     6,
      66,     8,     9,    10,    11,    12,    69,    68,     4,     4,
       4,    60,    19,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    72,    69,    69,   337,    69,
      37,    38,    39,    40,    41,    42,    43,    44,   237,    46,
      47,    48,   179,    50,    51,     4,    38,    14,    15,    16,
      17,    18,    59,   306,    61,   413,   385,   266,    65,   382,
      67,   422,   170,   162,   188,   277,    73,     1,    75,     3,
       4,     5,     6,   128,     8,     9,    10,    11,    12,    64,
      -1,    -1,    -1,    -1,    -1,    19,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    68,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    46,    47,    48,    -1,    50,    51,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    -1,    61,    -1,    -1,
      -1,    65,    26,    67,    -1,    -1,    -1,    -1,    -1,    73,
       1,    75,     3,     4,     5,     6,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    46,    47,    48,    -1,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    65,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    73,     1,    75,     3,     4,     5,     6,    -1,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    20,    -1,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    -1,    32,    33,    34,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    65,    66,    67,
      -1,    -1,    -1,    71,    72,    73,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    20,    -1,    22,    23,    24,
      -1,    -1,    27,    28,    29,    30,    -1,    32,    33,    34,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    46,    47,    48,    -1,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      65,    66,    67,    -1,    -1,    -1,    71,    72,    73,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    -1,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      32,    33,    34,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    46,    47,    48,    -1,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    65,    66,    67,    -1,    -1,    -1,    71,
      72,    73,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    20,    -1,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    32,    33,    34,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    -1,    46,    47,    48,
      -1,    50,    51,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    65,    66,    67,    -1,
      -1,    -1,    71,     1,    73,     3,     4,     5,     6,    -1,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    -1,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    61,    62,    -1,    -1,    65,    -1,    67,
      -1,    -1,    -1,    -1,     1,    73,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    -1,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    65,    66,
      67,    -1,    -1,    -1,    -1,     1,    73,     3,     4,     5,
       6,    -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      46,    47,    48,    -1,    50,    51,    -1,    -1,    16,    17,
      18,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    65,
      -1,    67,    68,    -1,    -1,    -1,    72,    73,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    -1,    46,    47,    48,    -1,    50,    51,    -1,
      -1,    16,    17,    18,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    65,    -1,    67,    -1,    -1,    -1,    -1,    72,
      73,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    46,    47,    48,    -1,
      50,    51,    16,    17,    18,    -1,    -1,    -1,    16,    17,
      18,    61,    62,    -1,    -1,    65,    -1,    67,    -1,    -1,
      -1,    -1,     1,    73,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    59,    60,    61,    62,    63,    64,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    -1,    46,    47,    48,
      -1,    50,    51,    16,    17,    18,    -1,    -1,    -1,    -1,
      59,    -1,    61,    -1,    -1,    -1,    65,    -1,    67,    -1,
      -1,    -1,    -1,     1,    73,     3,     4,     5,     6,    -1,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    46,    47,
      48,    -1,    50,    51,    16,    17,    18,    -1,    -1,    -1,
      16,    17,    18,    61,    -1,    -1,    -1,    65,    -1,    67,
      68,    -1,    -1,    -1,     1,    73,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    59,    60,    61,    62,    63,    64,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    46,
      47,    48,    -1,    50,    51,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    65,    66,
      67,    -1,    -1,    -1,    -1,     1,    73,     3,     4,     5,
       6,    -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      46,    47,    48,    -1,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    65,
      66,    67,    -1,    -1,    -1,    -1,     1,    73,     3,     4,
       5,     6,   437,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,    37,    38,    39,    40,    41,    42,    43,    44,
     475,    46,    47,    48,    -1,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      65,    -1,    67,    68,    -1,    -1,    -1,     1,    73,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    46,    47,    48,    -1,    50,    51,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,    73,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    14,
      15,    16,    17,    18,    70,    -1,    -1,    -1,    -1,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    70
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    77,    78,     0,     7,    80,    86,    89,    94,   104,
     105,   104,    66,    79,     6,    36,    49,    69,    97,    98,
      99,   107,    62,    83,   108,   109,     3,    67,   163,   164,
       8,     9,    85,    45,     8,     9,    85,    66,    70,   163,
      60,    66,     3,    71,    13,    87,    83,   108,    68,   163,
      95,     1,     4,     5,     6,     8,     9,    10,    11,    12,
      19,    37,    38,    39,    40,    41,    42,    43,    44,    46,
      47,    48,    50,    51,    61,    65,    67,    73,    81,    82,
      85,   106,   139,   140,   148,   149,   150,   154,   156,   157,
     158,   159,   162,   164,   167,   174,   175,    67,    85,    92,
      13,    37,   152,    67,    37,    67,   148,   150,   148,   140,
      85,   140,   142,   143,   144,   140,   145,   146,   147,   138,
     140,   174,    67,   155,    67,    71,   110,    67,   160,    67,
     140,   140,     6,    49,    62,    99,   138,    67,    37,   140,
     148,    14,    15,    16,    17,    18,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    11,    12,
      13,    69,    70,    35,    74,    67,    67,     8,     9,    96,
      99,   100,   101,   102,   103,    72,    99,   140,    85,    67,
     170,    50,    85,    26,    72,    70,    69,    75,    70,    69,
      70,   140,    67,   110,   153,   138,   112,   140,   153,    49,
     169,     8,     9,   138,    83,    68,   151,    85,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,    68,   144,    85,    59,
     138,   168,   171,   139,    83,    68,    26,    70,    93,   102,
     142,    68,   143,   140,    68,   147,    68,   140,    70,   138,
      68,     1,    20,    22,    27,    28,    29,    30,    32,    33,
      34,    66,    99,   110,   111,   118,   119,   120,   122,   124,
     128,   132,   138,   141,   176,    70,     8,     9,   142,    68,
      68,   138,    69,    69,    70,    67,   138,    25,    75,   142,
     142,    96,    88,   101,    83,    90,    91,    68,    68,   140,
      68,    66,    67,    67,    67,   123,    67,    67,    66,    66,
      66,   138,   113,    72,   118,    66,   140,   166,   166,    68,
      67,    68,   140,    68,   172,    25,    75,    59,    75,   138,
      68,    68,     1,    66,    84,   110,    85,    70,    66,   110,
      70,   161,   138,   138,   138,   119,   100,   115,   116,   130,
     131,   138,     8,     9,   115,   126,   127,    66,    83,   114,
     117,    70,    68,    70,    68,   173,   142,    59,    75,   138,
     138,    75,    91,   148,    68,    68,    68,    68,    27,    83,
      13,    66,    70,    31,    96,    70,    66,   140,    85,   165,
     142,    68,   138,    75,    75,   161,   119,   133,   121,    67,
      96,   140,   130,   126,   140,    13,   117,   161,    69,    68,
      75,    21,   177,    71,   119,   138,    66,    68,   140,    68,
     140,   119,   112,    68,   130,   129,    23,    24,   135,    66,
      68,   119,     4,    19,    25,    61,    65,    67,   136,   137,
     163,    69,   119,   134,   135,   125,     4,   136,     4,     4,
     137,    25,    69,    16,    17,    18,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,   134,    72,   134,
     119,    69,    68,    69,   136,    67,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
      69
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 216 "grammar.y"
    {
#line 230 "grammar.y.pre"
	    comp_trees[TREE_MAIN] = (yyval.node);
	}
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 224 "grammar.y"
    {
#line 237 "grammar.y.pre"
	    CREATE_TWO_VALUES((yyval.node), 0, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node));
	}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 229 "grammar.y"
    {
#line 241 "grammar.y.pre"
	    (yyval.node) = 0;
	}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 238 "grammar.y"
    {
#line 249 "grammar.y.pre"

		yywarn("Extra ';'. Ignored.");
	    }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 248 "grammar.y"
    {
#line 258 "grammar.y.pre"
		object_t *ob;
		inherit_t inherit;
		int initializer;
		int acc_mod;
		
		(yyvsp[(1) - (4)].number) |= global_modifiers;

                acc_mod = ((yyvsp[(1) - (4)].number) & DECL_ACCESS) & ~global_modifiers;
		if (acc_mod & (acc_mod - 1)) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Multiple access modifiers (");
		    p = get_type_modifiers(p, end, (yyvsp[(1) - (4)].number));
		    p = strput(p, end, ") for inheritance");
		    yyerror(buf);
		}	       
		
		if (!((yyvsp[(1) - (4)].number) & DECL_ACCESS)) (yyvsp[(1) - (4)].number) |= DECL_PUBLIC;
#ifndef ALLOW_INHERIT_AFTER_FUNCTION
		if (func_present)
		    yyerror("Illegal to inherit after defining functions.");
#endif
		if (var_defined)
		    yyerror("Illegal to inherit after defining global variables.");
#ifndef ALLOW_INHERIT_AFTER_FUNCTION
		if (func_present || var_defined){
#else
		if (var_defined){
#endif
		  inherit_file = 0;
		  YYACCEPT;
		}
#ifdef NEVER
		} //stupid bison
#endif
		ob = find_object2((yyvsp[(3) - (4)].string));
		if (ob == 0) {
		    inherit_file = alloc_cstring((yyvsp[(3) - (4)].string), "inherit");
		    /* Return back to load_object() */
		    YYACCEPT;
		}
		scratch_free((yyvsp[(3) - (4)].string));
		inherit.prog = ob->prog;

		if (mem_block[A_INHERITS].current_size){
		    inherit_t *prev_inherit = INHERIT(NUM_INHERITS - 1);
		    
		    inherit.function_index_offset 
			= prev_inherit->function_index_offset
			+ prev_inherit->prog->num_functions_defined
			+ prev_inherit->prog->last_inherited;
		    if (prev_inherit->prog->num_functions_defined &&
			prev_inherit->prog->function_table[prev_inherit->prog->num_functions_defined - 1].funcname[0] == APPLY___INIT_SPECIAL_CHAR)
			inherit.function_index_offset--;
		} else inherit.function_index_offset = 0;
		
		inherit.variable_index_offset =
		    mem_block[A_VAR_TEMP].current_size /
		    sizeof (variable_t);
		inherit.type_mod = (yyvsp[(1) - (4)].number);
		add_to_mem_block(A_INHERITS, (char *)&inherit, sizeof inherit);

		/* The following has to come before copy_vars - Sym */
		copy_structures(ob->prog);
		copy_variables(ob->prog, (yyvsp[(1) - (4)].number));
		initializer = copy_functions(ob->prog, (yyvsp[(1) - (4)].number));
		if (initializer >= 0) {
		    parse_node_t *node, *newnode;
		    /* initializer is an index into the object we're
		       inheriting's function table; this finds the
		       appropriate entry in our table and generates
		       a call to it */
		    node = new_node_no_line();
		    node->kind = NODE_CALL_2;
		    node->r.expr = 0;
		    node->v.number = F_CALL_INHERITED;
		    node->l.number = initializer | ((NUM_INHERITS - 1) << 16);
		    node->type = TYPE_ANY;
		    
		    /* The following illustrates a distinction between */
		    /* macros and funcs...newnode is needed here - Sym */
		    newnode = comp_trees[TREE_INIT];
		    CREATE_TWO_VALUES(comp_trees[TREE_INIT],0, newnode, node);
		    comp_trees[TREE_INIT] = pop_value(comp_trees[TREE_INIT]);
		    
		} 
		(yyval.node) = 0;
	    }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 344 "grammar.y"
    {
#line 357 "grammar.y.pre"
		CREATE_REAL((yyval.node), (yyvsp[(1) - (1)].real));
	    }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 352 "grammar.y"
    {
#line 364 "grammar.y.pre"
		CREATE_NUMBER((yyval.node), (yyvsp[(1) - (1)].number));
	    }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 360 "grammar.y"
    {
#line 371 "grammar.y.pre"
		(yyval.number) = 0;
	    }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 365 "grammar.y"
    {
#line 375 "grammar.y.pre"
		(yyval.number) = TYPE_MOD_ARRAY;
	    }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 373 "grammar.y"
    {
#line 382 "grammar.y.pre"
		(yyval.node) = (yyvsp[(1) - (1)].decl).node;
		if (!(yyval.node)) {
		    CREATE_RETURN((yyval.node), 0);
		}
            }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 381 "grammar.y"
    {
#line 389 "grammar.y.pre"
		(yyval.node) = 0;
	    }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 386 "grammar.y"
    {
#line 393 "grammar.y.pre"
		(yyval.node) = 0;
	    }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 394 "grammar.y"
    {
#line 400 "grammar.y.pre"
		(yyval.string) = scratch_copy((yyvsp[(1) - (1)].ihe)->name);
	    }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 403 "grammar.y"
    {
#line 408 "grammar.y.pre"
		int flags;
                int acc_mod;
                func_present = 1;
		flags = ((yyvsp[(1) - (3)].number) >> 16);
		
		flags |= global_modifiers;

                acc_mod = (flags & DECL_ACCESS) & ~global_modifiers;
		if (acc_mod & (acc_mod - 1)) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Multiple access modifiers (");
		    p = get_type_modifiers(p, end, flags);
		    p = strput(p, end, ") for function");
		    yyerror(buf);
		}	 

		if (!(flags & DECL_ACCESS)) flags |= DECL_PUBLIC;
		if (flags & DECL_NOSAVE) {
		    yywarn("Illegal to declare nosave function.");
		    flags &= ~DECL_NOSAVE;
		}
                (yyvsp[(1) - (3)].number) = (flags << 16) | ((yyvsp[(1) - (3)].number) & 0xffff);
		/* Handle type checking here so we know whether to typecheck
		   'argument' */
		if ((yyvsp[(1) - (3)].number) & 0xffff) {
		    exact_types = ((yyvsp[(1) - (3)].number)& 0xffff) | (yyvsp[(2) - (3)].number);
		} else {
		    if (pragmas & PRAGMA_STRICT_TYPES) {
			if (strcmp((yyvsp[(3) - (3)].string), "create") != 0)
			    yyerror("\"#pragma strict_types\" requires type of function");
			else
			    exact_types = TYPE_VOID; /* default for create() */
		    } else
			exact_types = 0;
		}
	    }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 445 "grammar.y"
    {
#line 459 "grammar.y.pre"
		char *p = (yyvsp[(3) - (7)].string);
		(yyvsp[(3) - (7)].string) = make_shared_string((yyvsp[(3) - (7)].string));
		scratch_free(p);

		/* If we had nested functions, we would need to check */
		/* here if we have enough space for locals */
		
		/*
		 * Define a prototype. If it is a real function, then the
		 * prototype will be replaced below.
		 */

		(yyval.number) = FUNC_PROTOTYPE;
		if ((yyvsp[(6) - (7)].argument).flags & ARG_IS_VARARGS) {
		    (yyval.number) |= (FUNC_TRUE_VARARGS | FUNC_VARARGS);
		}
		(yyval.number) |= ((yyvsp[(1) - (7)].number) >> 16);

		define_new_function((yyvsp[(3) - (7)].string), (yyvsp[(6) - (7)].argument).num_arg, 0, (yyval.number), ((yyvsp[(1) - (7)].number) & 0xffff)| (yyvsp[(2) - (7)].number));
		/* This is safe since it is guaranteed to be in the
		   function table, so it can't be dangling */
		free_string((yyvsp[(3) - (7)].string)); 
		context = 0;
	    }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 472 "grammar.y"
    {
#line 485 "grammar.y.pre"
		/* Either a prototype or a block */
		if ((yyvsp[(9) - (9)].node)) {
		    int fun;

		    (yyvsp[(8) - (9)].number) &= ~FUNC_PROTOTYPE;
		    if ((yyvsp[(9) - (9)].node)->kind != NODE_RETURN &&
			((yyvsp[(9) - (9)].node)->kind != NODE_TWO_VALUES
			 || (yyvsp[(9) - (9)].node)->r.expr->kind != NODE_RETURN)) {
			parse_node_t *replacement;
			CREATE_STATEMENTS(replacement, (yyvsp[(9) - (9)].node), 0);
			CREATE_RETURN(replacement->r.expr, 0);
			(yyvsp[(9) - (9)].node) = replacement;
		    }

		    fun = define_new_function((yyvsp[(3) - (9)].string), (yyvsp[(6) - (9)].argument).num_arg, 
					      max_num_locals - (yyvsp[(6) - (9)].argument).num_arg,
					      (yyvsp[(8) - (9)].number), ((yyvsp[(1) - (9)].number) & 0xffff) | (yyvsp[(2) - (9)].number));
		    if (fun != -1) {
			(yyval.node) = new_node_no_line();
			(yyval.node)->kind = NODE_FUNCTION;
			(yyval.node)->v.number = fun;
			(yyval.node)->l.number = max_num_locals;
			(yyval.node)->r.expr = (yyvsp[(9) - (9)].node);
		    } else 
			(yyval.node) = 0;
		} else
		    (yyval.node) = 0;
		free_all_local_names(!!(yyvsp[(9) - (9)].node));
	    }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 504 "grammar.y"
    {
#line 516 "grammar.y.pre"
		if (!((yyvsp[(1) - (3)].number) & ~(DECL_MODS)) && (pragmas & PRAGMA_STRICT_TYPES))
		    yyerror("Missing type for global variable declaration");
		(yyval.node) = 0;
	    }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 516 "grammar.y"
    {
#line 527 "grammar.y.pre"
		if (!(yyvsp[(1) - (2)].number)) 
		    yyerror("modifier list may not be empty.");
		
		if ((yyvsp[(1) - (2)].number) & FUNC_VARARGS) {
		    yyerror("Illegal modifier 'varargs' in global modifier list.");
		    (yyvsp[(1) - (2)].number) &= ~FUNC_VARARGS;
		}

		if (!((yyvsp[(1) - (2)].number) & DECL_ACCESS)) (yyvsp[(1) - (2)].number) |= DECL_PUBLIC;
		global_modifiers = (yyvsp[(1) - (2)].number);
		(yyval.node) = 0;
	    }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 534 "grammar.y"
    {
#line 544 "grammar.y.pre"
		/* At this point, the current_type here is only a basic_type */
		/* and cannot be unused yet - Sym */
		
		if (current_type == TYPE_VOID)
		    yyerror("Illegal to declare class member of type void.");
		add_local_name((yyvsp[(2) - (2)].string), current_type | (yyvsp[(1) - (2)].number));
		scratch_free((yyvsp[(2) - (2)].string));
	    }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 554 "grammar.y"
    {
#line 563 "grammar.y.pre"
	      current_type = (yyvsp[(2) - (2)].number);
	  }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 563 "grammar.y"
    {
#line 571 "grammar.y.pre"
		ident_hash_elem_t *ihe;

		ihe = find_or_add_ident(
			   PROG_STRING((yyval.number) = store_prog_string((yyvsp[(3) - (4)].string))),
			   FOA_GLOBAL_SCOPE);
		if (ihe->dn.class_num == -1) {
		    ihe->sem_value++;
		    ihe->dn.class_num = mem_block[A_CLASS_DEF].current_size / sizeof(class_def_t);
		    if (ihe->dn.class_num > CLASS_NUM_MASK){
			char buf[256];
			char *p;

			p = buf;
			sprintf(p, "Too many classes, max is %d.\n", CLASS_NUM_MASK + 1);
			yyerror(buf);
		    }

		    scratch_free((yyvsp[(3) - (4)].string));
		    (yyvsp[(2) - (4)].ihe) = 0;
		}
		else {
		    (yyvsp[(2) - (4)].ihe) = ihe;
		}
	    }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 590 "grammar.y"
    {
#line 597 "grammar.y.pre"
		class_def_t *sd;
		class_member_entry_t *sme;
		int i, raise_error = 0;
		
		/* check for a redefinition */
		if ((yyvsp[(2) - (7)].ihe) != 0) {
		    sd = CLASS((yyvsp[(2) - (7)].ihe)->dn.class_num);
		    if (sd->size != current_number_of_locals)
			raise_error = 1;
		    else {
			i = sd->size;
			sme = (class_member_entry_t *)mem_block[A_CLASS_MEMBER].block + sd->index;
			while (i--) {
			    /* check for matching names and types */
			    if (strcmp(PROG_STRING(sme[i].membername), locals_ptr[i].ihe->name) != 0 ||
				sme[i].type != (type_of_locals_ptr[i] & ~LOCAL_MODS)) {
				raise_error = 1;
				break;
			    }
			}
		    }
		}

		if (raise_error) {
		    char buf[512];
		    char *end = EndOf(buf);
		    char *p;

		    p = strput(buf, end, "Illegal to redefine class ");
		    p = strput(p, end, PROG_STRING((yyval.number)));
		    yyerror(buf);
		} else {
		    sd = (class_def_t *)allocate_in_mem_block(A_CLASS_DEF, sizeof(class_def_t));
		    i = sd->size = current_number_of_locals;
		    sd->index = mem_block[A_CLASS_MEMBER].current_size / sizeof(class_member_entry_t);
		    sd->classname = (yyvsp[(5) - (7)].number);

		    sme = (class_member_entry_t *)allocate_in_mem_block(A_CLASS_MEMBER, sizeof(class_member_entry_t) * current_number_of_locals);

		    while (i--) {
			sme[i].membername = store_prog_string(locals_ptr[i].ihe->name);
			sme[i].type = type_of_locals_ptr[i] & ~LOCAL_MODS;
		    }
		}

		free_all_local_names(0);
		(yyval.node) = 0;
	    }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 645 "grammar.y"
    {
#line 651 "grammar.y.pre"
		if ((yyvsp[(1) - (1)].ihe)->dn.local_num != -1) {
		    char buff[256];
		    char *end = EndOf(buff);
		    char *p;
		    
		    p = strput(buff, end, "Illegal to redeclare local name '");
		    p = strput(p, end, (yyvsp[(1) - (1)].ihe)->name);
		    p = strput(p, end, "'");
		    yyerror(buff);
		}
		(yyval.string) = scratch_copy((yyvsp[(1) - (1)].ihe)->name);
	    }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 664 "grammar.y"
    {
#line 669 "grammar.y.pre"
		if ((yyvsp[(2) - (2)].ihe)->dn.class_num == -1) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Undefined class '");
		    p = strput(p, end, (yyvsp[(2) - (2)].ihe)->name);
		    p = strput(p, end, "'");
		    yyerror(buf);
		    (yyval.number) = TYPE_ANY;
		} else {
		    (yyval.number) = (yyvsp[(2) - (2)].ihe)->dn.class_num | TYPE_MOD_CLASS;
		}
	    }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 681 "grammar.y"
    {
#line 685 "grammar.y.pre"
		char buf[256];
		char *end = EndOf(buf);
		char *p;

		p = strput(buf, end, "Undefined class '");
		p = strput(p, end, (yyvsp[(2) - (2)].string));
		p = strput(p, end, "'");
		yyerror(buf);
		(yyval.number) = TYPE_ANY;
	    }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 698 "grammar.y"
    {
#line 702 "grammar.y.pre"
		(yyval.number) = TYPE_ANY;
	    }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 707 "grammar.y"
    {
#line 712 "grammar.y.pre"
		(yyval.number) = (yyvsp[(1) - (2)].number) | TYPE_MOD_ARRAY;
	    }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 716 "grammar.y"
    {
#line 722 "grammar.y.pre"
		(yyval.number) = (yyvsp[(1) - (2)].number) | LOCAL_MOD_REF;
	    }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 724 "grammar.y"
    {
#line 730 "grammar.y.pre"
                (yyval.number) = (yyvsp[(1) - (2)].number) | (yyvsp[(2) - (2)].number);
		if ((yyvsp[(1) - (2)].number) != TYPE_VOID)
		    add_local_name("", (yyvsp[(1) - (2)].number) | (yyvsp[(2) - (2)].number));
            }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 731 "grammar.y"
    {
#line 736 "grammar.y.pre"
		if ((yyvsp[(1) - (3)].number) == TYPE_VOID)
		    yyerror("Illegal to declare argument of type void.");
                add_local_name((yyvsp[(3) - (3)].string), (yyvsp[(1) - (3)].number) | (yyvsp[(2) - (3)].number));
		scratch_free((yyvsp[(3) - (3)].string));
                (yyval.number) = (yyvsp[(1) - (3)].number) | (yyvsp[(2) - (3)].number);
	    }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 740 "grammar.y"
    {
#line 744 "grammar.y.pre"
		if (exact_types) {
		    yyerror("Missing type for argument");
		}
		add_local_name((yyvsp[(1) - (1)].string), TYPE_ANY);
		scratch_free((yyvsp[(1) - (1)].string));
		(yyval.number) = TYPE_ANY;
            }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 753 "grammar.y"
    {
#line 756 "grammar.y.pre"
		(yyval.argument).num_arg = 0;
                (yyval.argument).flags = 0;
	    }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 760 "grammar.y"
    {
#line 762 "grammar.y.pre"
		int x = type_of_locals_ptr[max_num_locals-1];
		int lt = x & ~LOCAL_MODS;
		
		(yyval.argument) = (yyvsp[(1) - (2)].argument);
		(yyval.argument).flags |= ARG_IS_VARARGS;

		if (x & LOCAL_MOD_REF) {
		    yyerror("Variable to hold remainder of args may not be a reference");
		    x &= ~LOCAL_MOD_REF;
		}
		if (lt != TYPE_ANY && !(lt & TYPE_MOD_ARRAY))
		    yywarn("Variable to hold remainder of arguments should be an array.");
	    }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 779 "grammar.y"
    {
#line 780 "grammar.y.pre"
		if (((yyvsp[(1) - (1)].number) & TYPE_MASK) == TYPE_VOID && !((yyvsp[(1) - (1)].number) & TYPE_MOD_CLASS)) {
		    if ((yyvsp[(1) - (1)].number) & ~TYPE_MASK)
			yyerror("Illegal to declare argument of type void.");
		    (yyval.argument).num_arg = 0;
		} else {
		    (yyval.argument).num_arg = 1;
		}
                (yyval.argument).flags = 0;
	    }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 791 "grammar.y"
    {
#line 791 "grammar.y.pre"
		if (!(yyval.argument).num_arg)    /* first arg was void w/no name */
		    yyerror("argument of type void must be the only argument.");
		if (((yyvsp[(3) - (3)].number) & TYPE_MASK) == TYPE_VOID && !((yyvsp[(3) - (3)].number) & TYPE_MOD_CLASS))
		    yyerror("Illegal to declare argument of type void.");

                (yyval.argument) = (yyvsp[(1) - (3)].argument);
		(yyval.argument).num_arg++;
	    }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 805 "grammar.y"
    {
#line 804 "grammar.y.pre"
		(yyval.number) = 0;
	    }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 810 "grammar.y"
    {
#line 808 "grammar.y.pre"
		int acc_mod;
		
		(yyval.number) = (yyvsp[(1) - (2)].number) | (yyvsp[(2) - (2)].number);
		
                acc_mod = ((yyval.number) & DECL_ACCESS) & ~global_modifiers;
		if (acc_mod & (acc_mod - 1)) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Multiple access modifiers (");
		    p = get_type_modifiers(p, end, (yyval.number));
		    p = strput(p, end, ") ");
		    yyerror(buf);
		    (yyval.number) = DECL_PUBLIC;
		}
	    }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 833 "grammar.y"
    {
#line 834 "grammar.y.pre"
		(yyval.number) = ((yyvsp[(1) - (2)].number) << 16) | (yyvsp[(2) - (2)].number);
		current_type = (yyval.number);
	    }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 842 "grammar.y"
    {
#line 842 "grammar.y.pre"
		(yyval.number) = (yyvsp[(2) - (4)].number) | (yyvsp[(3) - (4)].number);
	    }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 851 "grammar.y"
    {
#line 850 "grammar.y.pre"
		(yyval.number) = TYPE_UNKNOWN;
	    }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 864 "grammar.y"
    {
#line 862 "grammar.y.pre"
		if (current_type & (FUNC_VARARGS << 16)){
		    yyerror("Illegal to declare varargs variable.");
		    current_type &= ~(FUNC_VARARGS << 16);
		}
		/* Now it is ok to merge the two
		 * remember that class_num and varargs was the reason for above
		 * Do the merging once only per row of decls
		 */

		if (current_type & 0xffff0000){
		    current_type = (current_type >> 16) | (current_type & 0xffff);
		}

		current_type |= global_modifiers;

		if (!(current_type & DECL_ACCESS)) current_type |= DECL_PUBLIC;

		if ((current_type & ~DECL_MODS) == TYPE_VOID)
		    yyerror("Illegal to declare global variable of type void.");

		define_new_variable((yyvsp[(2) - (2)].string), current_type | (yyvsp[(1) - (2)].number));
		scratch_free((yyvsp[(2) - (2)].string));
	    }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 890 "grammar.y"
    {
#line 887 "grammar.y.pre"
		parse_node_t *expr, *newnode;
		int type;

		if (current_type & (FUNC_VARARGS << 16)){
		    yyerror("Illegal to declare varargs variable.");
		    current_type &= ~(FUNC_VARARGS << 16);
		}
		
		if (current_type & 0xffff0000){
		    current_type = (current_type >> 16) | (current_type & 0xffff);
		}

		current_type |= global_modifiers;

		if (!(current_type & DECL_ACCESS)) current_type |= DECL_PUBLIC;

		if ((current_type & ~DECL_MODS) == TYPE_VOID)
		    yyerror("Illegal to declare global variable of type void.");

		if ((yyvsp[(3) - (4)].number) != F_ASSIGN)
		    yyerror("Only '=' is legal in initializers.");

		/* ignore current_type == 0, which gets a missing type error
		   later anyway */
		if (current_type) {
		    type = (current_type | (yyvsp[(1) - (4)].number)) & ~DECL_MODS;
		    if ((current_type & ~DECL_MODS) == TYPE_VOID)
			yyerror("Illegal to declare global variable of type void.");
		    if (!compatible_types(type, (yyvsp[(4) - (4)].node)->type)) {
			char buff[256];
			char *end = EndOf(buff);
			char *p;
			
			p = strput(buff, end, "Type mismatch ");
			p = get_two_types(p, end, type, (yyvsp[(4) - (4)].node)->type);
			p = strput(p, end, " when initializing ");
			p = strput(p, end, (yyvsp[(2) - (4)].string));
			yyerror(buff);
		    }
		} else type = 0;
		(yyvsp[(4) - (4)].node) = do_promotions((yyvsp[(4) - (4)].node), type);

		CREATE_BINARY_OP(expr, F_VOID_ASSIGN, 0, (yyvsp[(4) - (4)].node), 0);
		CREATE_OPCODE_1(expr->r.expr, F_GLOBAL_LVALUE, 0,
				define_new_variable((yyvsp[(2) - (4)].string), current_type | (yyvsp[(1) - (4)].number)));
		newnode = comp_trees[TREE_INIT];
		CREATE_TWO_VALUES(comp_trees[TREE_INIT], 0,
				  newnode, expr);
		scratch_free((yyvsp[(2) - (4)].string));
	    }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 946 "grammar.y"
    {
#line 942 "grammar.y.pre"
		if ((yyvsp[(2) - (4)].decl).node && (yyvsp[(3) - (4)].node)) {
		    CREATE_STATEMENTS((yyval.decl).node, (yyvsp[(2) - (4)].decl).node, (yyvsp[(3) - (4)].node));
		} else (yyval.decl).node = ((yyvsp[(2) - (4)].decl).node ? (yyvsp[(2) - (4)].decl).node : (yyvsp[(3) - (4)].node));
                (yyval.decl).num = (yyvsp[(2) - (4)].decl).num;
            }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 959 "grammar.y"
    {
#line 954 "grammar.y.pre"
                (yyval.decl).node = 0;
                (yyval.decl).num = 0;
            }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 965 "grammar.y"
    {
#line 959 "grammar.y.pre"
		if ((yyvsp[(2) - (2)].number) == TYPE_VOID)
		    yyerror("Illegal to declare local variable of type void.");
                /* can't do this in basic_type b/c local_name_list contains
                 * expr0 which contains cast which contains basic_type
                 */
                current_type = (yyvsp[(2) - (2)].number);
            }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 975 "grammar.y"
    {
#line 968 "grammar.y.pre"
                if ((yyvsp[(1) - (5)].decl).node && (yyvsp[(4) - (5)].decl).node) {
		    CREATE_STATEMENTS((yyval.decl).node, (yyvsp[(1) - (5)].decl).node, (yyvsp[(4) - (5)].decl).node);
                } else (yyval.decl).node = ((yyvsp[(1) - (5)].decl).node ? (yyvsp[(1) - (5)].decl).node : (yyvsp[(4) - (5)].decl).node);
                (yyval.decl).num = (yyvsp[(1) - (5)].decl).num + (yyvsp[(4) - (5)].decl).num;
            }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 987 "grammar.y"
    {
#line 979 "grammar.y.pre"
		if (current_type & LOCAL_MOD_REF) {
		    yyerror("Illegal to declare local variable as reference");
		    current_type &= ~LOCAL_MOD_REF;
		}
		add_local_name((yyvsp[(2) - (2)].string), current_type | (yyvsp[(1) - (2)].number) | LOCAL_MOD_UNUSED);

		scratch_free((yyvsp[(2) - (2)].string));
		(yyval.node) = 0;
	    }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 999 "grammar.y"
    {
#line 990 "grammar.y.pre"
		int type = (current_type | (yyvsp[(1) - (4)].number)) & ~DECL_MODS;

		if (current_type & LOCAL_MOD_REF) {
		    yyerror("Illegal to declare local variable as reference");
		    current_type &= ~LOCAL_MOD_REF;
		    type &= ~LOCAL_MOD_REF;
		}

		if ((yyvsp[(3) - (4)].number) != F_ASSIGN)
		    yyerror("Only '=' is allowed in initializers.");
		if (!compatible_types((yyvsp[(4) - (4)].node)->type, type)) {
		    char buff[256];
		    char *end = EndOf(buff);
		    char *p;
		    
		    p = strput(buff, end, "Type mismatch ");
		    p = get_two_types(p, end, type, (yyvsp[(4) - (4)].node)->type);
		    p = strput(p, end, " when initializing ");
		    p = strput(p, end, (yyvsp[(2) - (4)].string));

		    yyerror(buff);
		}
		
		(yyvsp[(4) - (4)].node) = do_promotions((yyvsp[(4) - (4)].node), type);

		CREATE_UNARY_OP_1((yyval.node), F_VOID_ASSIGN_LOCAL, 0, (yyvsp[(4) - (4)].node),
				  add_local_name((yyvsp[(2) - (4)].string), current_type | (yyvsp[(1) - (4)].number) | LOCAL_MOD_UNUSED));
		scratch_free((yyvsp[(2) - (4)].string));
	    }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 1034 "grammar.y"
    {
#line 1024 "grammar.y.pre"
		if ((yyvsp[(1) - (3)].number) == TYPE_VOID)
		    yyerror("Illegal to declare local variable of type void.");

		(yyval.number) = add_local_name((yyvsp[(3) - (3)].string), (yyvsp[(1) - (3)].number) | (yyvsp[(2) - (3)].number));
		scratch_free((yyvsp[(3) - (3)].string));
	    }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 1046 "grammar.y"
    {
#line 1035 "grammar.y.pre"
                int type = type_of_locals_ptr[(yyvsp[(1) - (3)].number)];

		if (type & LOCAL_MOD_REF) {
		    yyerror("Illegal to declare local variable as reference");
		    type_of_locals_ptr[(yyvsp[(1) - (3)].number)] &= ~LOCAL_MOD_REF;
		}
		type &= ~LOCAL_MODS;

		if ((yyvsp[(2) - (3)].number) != F_ASSIGN)
		    yyerror("Only '=' is allowed in initializers.");
		if (!compatible_types((yyvsp[(3) - (3)].node)->type, type)) {
		    char buff[256];
		    char *end = EndOf(buff);
		    char *p;
		    
		    p = strput(buff, end, "Type mismatch ");
		    p = get_two_types(p, end, type, (yyvsp[(3) - (3)].node)->type);
		    p = strput(p, end, " when initializing.");
		    yyerror(buff);
		}

		(yyvsp[(3) - (3)].node) = do_promotions((yyvsp[(3) - (3)].node), type);

		/* this is an expression */
		CREATE_BINARY_OP((yyval.node), F_ASSIGN, 0, (yyvsp[(3) - (3)].node), 0);
                CREATE_OPCODE_1((yyval.node)->r.expr, F_LOCAL_LVALUE, 0, (yyvsp[(1) - (3)].number));
	    }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 1079 "grammar.y"
    {
#line 1067 "grammar.y.pre"
                (yyval.decl).node = (yyvsp[(1) - (1)].node);
                (yyval.decl).num = 1;
            }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 1085 "grammar.y"
    {
#line 1072 "grammar.y.pre"
                if ((yyvsp[(1) - (3)].node) && (yyvsp[(3) - (3)].decl).node) {
		    CREATE_STATEMENTS((yyval.decl).node, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].decl).node);
                } else (yyval.decl).node = ((yyvsp[(1) - (3)].node) ? (yyvsp[(1) - (3)].node) : (yyvsp[(3) - (3)].decl).node);
                (yyval.decl).num = 1 + (yyvsp[(3) - (3)].decl).num;
            }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 1096 "grammar.y"
    {
#line 1082 "grammar.y.pre"
		(yyval.node) = 0;
	    }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 1101 "grammar.y"
    {
#line 1086 "grammar.y.pre"
		if ((yyvsp[(1) - (2)].node) && (yyvsp[(2) - (2)].node)) {
		    CREATE_STATEMENTS((yyval.node), (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
		} else (yyval.node) = ((yyvsp[(1) - (2)].node) ? (yyvsp[(1) - (2)].node) : (yyvsp[(2) - (2)].node));
            }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 1108 "grammar.y"
    {
#line 1092 "grammar.y.pre"
		(yyval.node) = 0;
            }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 1116 "grammar.y"
    {
#line 1099 "grammar.y.pre"
		(yyval.node) = pop_value((yyvsp[(1) - (2)].node));
#ifdef DEBUG
		{
		    parse_node_t *replacement;
		    CREATE_STATEMENTS(replacement, (yyval.node), 0);
		    CREATE_OPCODE(replacement->r.expr, F_BREAK_POINT, 0);
		    (yyval.node) = replacement;
		}
#endif
	    }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 1134 "grammar.y"
    {
#line 1116 "grammar.y.pre"
                (yyval.node) = (yyvsp[(1) - (1)].decl).node;
                pop_n_locals((yyvsp[(1) - (1)].decl).num);
            }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 1140 "grammar.y"
    {
#line 1121 "grammar.y.pre"
		(yyval.node) = 0;
	    }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 1145 "grammar.y"
    {
#line 1125 "grammar.y.pre"
		if (context & SPECIAL_CONTEXT) {
		    yyerror("Cannot break out of catch { } or time_expression { }");
		    (yyval.node) = 0;
		} else
		if (context & SWITCH_CONTEXT) {
		    CREATE_CONTROL_JUMP((yyval.node), CJ_BREAK_SWITCH);
		} else
		if (context & LOOP_CONTEXT) {
		    CREATE_CONTROL_JUMP((yyval.node), CJ_BREAK);
		    if (context & LOOP_FOREACH) {
			parse_node_t *replace;
			CREATE_STATEMENTS(replace, 0, (yyval.node));
			CREATE_OPCODE(replace->l.expr, F_EXIT_FOREACH, 0);
			(yyval.node) = replace;
		    }
		} else {
		    yyerror("break statement outside loop");
		    (yyval.node) = 0;
		}
	    }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 1168 "grammar.y"
    {
#line 1147 "grammar.y.pre"
		if (context & SPECIAL_CONTEXT)
		    yyerror("Cannot continue out of catch { } or time_expression { }");
		else
		if (!(context & LOOP_CONTEXT))
		    yyerror("continue statement outside loop");
		CREATE_CONTROL_JUMP((yyval.node), CJ_CONTINUE);
	    }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 1181 "grammar.y"
    {
#line 1159 "grammar.y.pre"
		(yyvsp[(1) - (4)].number) = context;
		context = LOOP_CONTEXT;
	    }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 1187 "grammar.y"
    {
#line 1164 "grammar.y.pre"
		CREATE_LOOP((yyval.node), 1, (yyvsp[(6) - (6)].node), 0, optimize_loop_test((yyvsp[(3) - (6)].node)));
		context = (yyvsp[(1) - (6)].number);
	    }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 1196 "grammar.y"
    {
#line 1172 "grammar.y.pre"
		(yyvsp[(1) - (1)].number) = context;
		context = LOOP_CONTEXT;
	    }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 1202 "grammar.y"
    {
#line 1177 "grammar.y.pre"
		CREATE_LOOP((yyval.node), 0, (yyvsp[(3) - (8)].node), 0, optimize_loop_test((yyvsp[(6) - (8)].node)));
		context = (yyvsp[(1) - (8)].number);
	    }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 1211 "grammar.y"
    {
#line 1185 "grammar.y.pre"
		(yyvsp[(3) - (8)].decl).node = pop_value((yyvsp[(3) - (8)].decl).node);
		(yyvsp[(1) - (8)].number) = context;
		context = LOOP_CONTEXT;
	    }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 1218 "grammar.y"
    {
#line 1191 "grammar.y.pre"
		(yyval.decl).num = (yyvsp[(3) - (10)].decl).num; /* number of declarations (0/1) */
		
		(yyvsp[(7) - (10)].node) = pop_value((yyvsp[(7) - (10)].node));
		if ((yyvsp[(7) - (10)].node) && IS_NODE((yyvsp[(7) - (10)].node), NODE_UNARY_OP, F_INC)
		    && IS_NODE((yyvsp[(7) - (10)].node)->r.expr, NODE_OPCODE_1, F_LOCAL_LVALUE)) {
		    long lvar = (yyvsp[(7) - (10)].node)->r.expr->l.number;
		    CREATE_OPCODE_1((yyvsp[(7) - (10)].node), F_LOOP_INCR, 0, lvar);
		}

		CREATE_STATEMENTS((yyval.decl).node, (yyvsp[(3) - (10)].decl).node, 0);
		CREATE_LOOP((yyval.decl).node->r.expr, 1, (yyvsp[(10) - (10)].node), (yyvsp[(7) - (10)].node), optimize_loop_test((yyvsp[(5) - (10)].node)));

		context = (yyvsp[(1) - (10)].number);
	      }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 1237 "grammar.y"
    {
#line 1209 "grammar.y.pre"
		if ((yyvsp[(1) - (1)].ihe)->dn.local_num != -1) {
		    CREATE_OPCODE_1((yyval.decl).node, F_LOCAL_LVALUE, 0, (yyvsp[(1) - (1)].ihe)->dn.local_num);
		    type_of_locals_ptr[(yyvsp[(1) - (1)].ihe)->dn.local_num] &= ~LOCAL_MOD_UNUSED;
		} else
		if ((yyvsp[(1) - (1)].ihe)->dn.global_num != -1) {
		    CREATE_OPCODE_1((yyval.decl).node, F_GLOBAL_LVALUE, 0, (yyvsp[(1) - (1)].ihe)->dn.global_num);
		} else {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;

		    p = strput(buf, end, "'");
		    p = strput(p, end, (yyvsp[(1) - (1)].ihe)->name);
		    p = strput(p, end, "' is not a local or a global variable.");
		    yyerror(buf);
		    CREATE_OPCODE_1((yyval.decl).node, F_GLOBAL_LVALUE, 0, 0);
		}
		(yyval.decl).num = 0;
	    }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 1259 "grammar.y"
    {
#line 1230 "grammar.y.pre"
		if (type_of_locals_ptr[(yyvsp[(1) - (1)].number)] & LOCAL_MOD_REF) {
		    CREATE_OPCODE_1((yyval.decl).node, F_REF_LVALUE, 0, (yyvsp[(1) - (1)].number));
		} else {
		    CREATE_OPCODE_1((yyval.decl).node, F_LOCAL_LVALUE, 0, (yyvsp[(1) - (1)].number));
		    type_of_locals_ptr[(yyvsp[(1) - (1)].number)] &= ~LOCAL_MOD_UNUSED;
		}
		(yyval.decl).num = 1;
            }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 1270 "grammar.y"
    {
#line 1240 "grammar.y.pre"
		char buf[256];
		char *end = EndOf(buf);
		char *p;
		
		p = strput(buf, end, "'");
		p = strput(p, end, (yyvsp[(1) - (1)].string));
		p = strput(p, end, "' is not a local or a global variable.");
		yyerror(buf);
		CREATE_OPCODE_1((yyval.decl).node, F_GLOBAL_LVALUE, 0, 0);
		scratch_free((yyvsp[(1) - (1)].string));
		(yyval.decl).num = 0;
	    }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 1288 "grammar.y"
    {
#line 1257 "grammar.y.pre"
		CREATE_FOREACH((yyval.decl).node, (yyvsp[(1) - (1)].decl).node, 0);
		(yyval.decl).num = (yyvsp[(1) - (1)].decl).num;
            }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 1294 "grammar.y"
    {
#line 1262 "grammar.y.pre"
		CREATE_FOREACH((yyval.decl).node, (yyvsp[(1) - (3)].decl).node, (yyvsp[(3) - (3)].decl).node);
		(yyval.decl).num = (yyvsp[(1) - (3)].decl).num + (yyvsp[(3) - (3)].decl).num;
		if ((yyvsp[(1) - (3)].decl).node->v.number == F_REF_LVALUE)
		    yyerror("Mapping key may not be a reference in foreach()");
            }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 1305 "grammar.y"
    {
#line 1272 "grammar.y.pre"
		(yyvsp[(3) - (6)].decl).node->v.expr = (yyvsp[(5) - (6)].node);
		(yyvsp[(1) - (6)].number) = context;
		context = LOOP_CONTEXT | LOOP_FOREACH;
            }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 1312 "grammar.y"
    {
#line 1278 "grammar.y.pre"
		(yyval.decl).num = (yyvsp[(3) - (8)].decl).num;

		CREATE_STATEMENTS((yyval.decl).node, (yyvsp[(3) - (8)].decl).node, 0);
		CREATE_LOOP((yyval.decl).node->r.expr, 2, (yyvsp[(8) - (8)].node), 0, 0);
		CREATE_OPCODE((yyval.decl).node->r.expr->r.expr, F_NEXT_FOREACH, 0);
		
		context = (yyvsp[(1) - (8)].number);
	    }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 1326 "grammar.y"
    {
#line 1291 "grammar.y.pre"
		(yyval.node) = 0;
	    }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 1335 "grammar.y"
    {
#line 1299 "grammar.y.pre"
	 	(yyval.decl).node = (yyvsp[(1) - (1)].node);
		(yyval.decl).num = 0;
	    }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 1341 "grammar.y"
    {
#line 1304 "grammar.y.pre"
		(yyval.decl).node = (yyvsp[(1) - (1)].node);
		(yyval.decl).num = 1;
	    }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 1350 "grammar.y"
    {
#line 1312 "grammar.y.pre"
                (yyvsp[(1) - (4)].number) = context;
                context &= LOOP_CONTEXT;
                context |= SWITCH_CONTEXT;
                (yyvsp[(2) - (4)].number) = mem_block[A_CASES].current_size;
            }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 1358 "grammar.y"
    {
#line 1319 "grammar.y.pre"
                parse_node_t *node1, *node2;

                if ((yyvsp[(9) - (10)].node)) {
		    CREATE_STATEMENTS(node1, (yyvsp[(8) - (10)].node), (yyvsp[(9) - (10)].node));
                } else node1 = (yyvsp[(8) - (10)].node);

                if (context & SWITCH_STRINGS) {
                    NODE_NO_LINE(node2, NODE_SWITCH_STRINGS);
                } else if (context & SWITCH_RANGES) {
		    NODE_NO_LINE(node2, NODE_SWITCH_RANGES);
		} else if ((context & SWITCH_NUMBERS) ||
			   (context & SWITCH_NOT_EMPTY)) {
                    NODE_NO_LINE(node2, NODE_SWITCH_NUMBERS);
                } else {
		    // to prevent crashing during the remaining parsing bits
		    NODE_NO_LINE(node2, NODE_SWITCH_NUMBERS);

		    yyerror("need case statements in switch/case, not just default:"); //just a default case present
		}

                node2->l.expr = (yyvsp[(3) - (10)].node);
                node2->r.expr = node1;
                prepare_cases(node2, (yyvsp[(2) - (10)].number));
                context = (yyvsp[(1) - (10)].number);
		(yyval.node) = node2;
		pop_n_locals((yyvsp[(7) - (10)].decl).num);
            }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 1391 "grammar.y"
    {
#line 1351 "grammar.y.pre"
               if ((yyvsp[(2) - (2)].node)){
		   CREATE_STATEMENTS((yyval.node), (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
               } else (yyval.node) = (yyvsp[(1) - (2)].node);
           }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 1398 "grammar.y"
    {
#line 1357 "grammar.y.pre"
               if ((yyvsp[(2) - (2)].node)){
		   CREATE_STATEMENTS((yyval.node), (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
               } else (yyval.node) = (yyvsp[(1) - (2)].node);
           }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 1405 "grammar.y"
    {
#line 1363 "grammar.y.pre"
               (yyval.node) = 0;
           }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 1414 "grammar.y"
    {
#line 1371 "grammar.y.pre"
                (yyval.node) = (yyvsp[(2) - (3)].node);
                (yyval.node)->v.expr = 0;

                add_to_mem_block(A_CASES, (char *)&((yyvsp[(2) - (3)].node)), sizeof((yyvsp[(2) - (3)].node)));
            }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 1422 "grammar.y"
    {
#line 1378 "grammar.y.pre"
                if ( (yyvsp[(2) - (5)].node)->kind != NODE_CASE_NUMBER
                    || (yyvsp[(4) - (5)].node)->kind != NODE_CASE_NUMBER )
                    yyerror("String case labels not allowed as range bounds");
                if ((yyvsp[(2) - (5)].node)->r.number > (yyvsp[(4) - (5)].node)->r.number) break;

		context |= SWITCH_RANGES;

                (yyval.node) = (yyvsp[(2) - (5)].node);
                (yyval.node)->v.expr = (yyvsp[(4) - (5)].node);

                add_to_mem_block(A_CASES, (char *)&((yyvsp[(2) - (5)].node)), sizeof((yyvsp[(2) - (5)].node)));
            }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 1437 "grammar.y"
    {
#line 1392 "grammar.y.pre"
	        if ( (yyvsp[(2) - (4)].node)->kind != NODE_CASE_NUMBER )
                    yyerror("String case labels not allowed as range bounds");

		context |= SWITCH_RANGES;

                (yyval.node) = (yyvsp[(2) - (4)].node);
                (yyval.node)->v.expr = new_node();
		(yyval.node)->v.expr->kind = NODE_CASE_NUMBER;
		(yyval.node)->v.expr->r.number = ((unsigned long)-1)/2; //maxint

                add_to_mem_block(A_CASES, (char *)&((yyvsp[(2) - (4)].node)), sizeof((yyvsp[(2) - (4)].node)));
            }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 1452 "grammar.y"
    {
#line 1406 "grammar.y.pre"
	      if ( (yyvsp[(3) - (4)].node)->kind != NODE_CASE_NUMBER )
                    yyerror("String case labels not allowed as range bounds");

		context |= SWITCH_RANGES;
		(yyval.node) = new_node();
		(yyval.node)->kind = NODE_CASE_NUMBER;
                (yyval.node)->r.number = (long) 1+ ((unsigned long)-1)/2; //maxint +1 wraps to min_int, on all computers i know, just not in the C standard iirc 
                (yyval.node)->v.expr = (yyvsp[(3) - (4)].node);

                add_to_mem_block(A_CASES, (char *)&((yyval.node)), sizeof((yyval.node)));
            }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 1466 "grammar.y"
    {
#line 1419 "grammar.y.pre"
                if (context & SWITCH_DEFAULT) {
                    yyerror("Duplicate default");
                    (yyval.node) = 0;
                    break;
                }
		(yyval.node) = new_node();
		(yyval.node)->kind = NODE_DEFAULT;
                (yyval.node)->v.expr = 0;
                add_to_mem_block(A_CASES, (char *)&((yyval.node)), sizeof((yyval.node)));
                context |= SWITCH_DEFAULT;
            }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 1483 "grammar.y"
    {
#line 1435 "grammar.y.pre"
                if ((context & SWITCH_STRINGS) && (yyvsp[(1) - (1)].pointer_int))
                    yyerror("Mixed case label list not allowed");

                if ((yyvsp[(1) - (1)].pointer_int))
		  context |= SWITCH_NUMBERS;
		else
		  context |= SWITCH_NOT_EMPTY;

		(yyval.node) = new_node();
		(yyval.node)->kind = NODE_CASE_NUMBER;
                (yyval.node)->r.expr = (parse_node_t *)(yyvsp[(1) - (1)].pointer_int);
            }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 1498 "grammar.y"
    {
#line 1449 "grammar.y.pre"
		int str;
		
		str = store_prog_string((yyvsp[(1) - (1)].string));
                scratch_free((yyvsp[(1) - (1)].string));
                if (context & SWITCH_NUMBERS)
                    yyerror("Mixed case label list not allowed");
                context |= SWITCH_STRINGS;
		(yyval.node) = new_node();
		(yyval.node)->kind = NODE_CASE_STRING;
                (yyval.node)->r.number = str;
            }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 1515 "grammar.y"
    {
#line 1465 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) | (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 1520 "grammar.y"
    {
#line 1469 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) ^ (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 1525 "grammar.y"
    {
#line 1473 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) & (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 1530 "grammar.y"
    {
#line 1477 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) == (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 1535 "grammar.y"
    {
#line 1481 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) != (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 1540 "grammar.y"
    {
#line 1485 "grammar.y.pre"
                switch((yyvsp[(2) - (3)].number)){
                    case F_GE: (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) >= (yyvsp[(3) - (3)].pointer_int); break;
                    case F_LE: (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) <= (yyvsp[(3) - (3)].pointer_int); break;
                    case F_GT: (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) >  (yyvsp[(3) - (3)].pointer_int); break;
                }
            }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 1549 "grammar.y"
    {
#line 1493 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) < (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 1554 "grammar.y"
    {
#line 1497 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) << (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 1559 "grammar.y"
    {
#line 1501 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) >> (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 1564 "grammar.y"
    {
#line 1505 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) + (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 1569 "grammar.y"
    {
#line 1509 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) - (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 1574 "grammar.y"
    {
#line 1513 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) * (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 1579 "grammar.y"
    {
#line 1517 "grammar.y.pre"
                if ((yyvsp[(3) - (3)].pointer_int)) (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) % (yyvsp[(3) - (3)].pointer_int); else yyerror("Modulo by zero");
            }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 1584 "grammar.y"
    {
#line 1521 "grammar.y.pre"
                if ((yyvsp[(3) - (3)].pointer_int)) (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) / (yyvsp[(3) - (3)].pointer_int); else yyerror("Division by zero");
            }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 1589 "grammar.y"
    {
#line 1525 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(2) - (3)].pointer_int);
            }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 1594 "grammar.y"
    {
#line 1529 "grammar.y.pre"
		(yyval.pointer_int) = (yyvsp[(1) - (1)].number);
	    }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 1599 "grammar.y"
    {
#line 1533 "grammar.y.pre"
                (yyval.pointer_int) = -(yyvsp[(2) - (2)].number);
            }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 1604 "grammar.y"
    {
#line 1537 "grammar.y.pre"
                (yyval.pointer_int) = !(yyvsp[(2) - (2)].number);
            }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 1609 "grammar.y"
    {
#line 1541 "grammar.y.pre"
                (yyval.pointer_int) = ~(yyvsp[(2) - (2)].number);
            }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 1617 "grammar.y"
    {
#line 1548 "grammar.y.pre"
		(yyval.node) = (yyvsp[(1) - (1)].node);
	    }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 1622 "grammar.y"
    {
#line 1552 "grammar.y.pre"
		CREATE_TWO_VALUES((yyval.node), (yyvsp[(3) - (3)].node)->type, pop_value((yyvsp[(1) - (3)].node)), (yyvsp[(3) - (3)].node));
	    }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 1634 "grammar.y"
    {
#line 1569 "grammar.y.pre"
		int op;

		if (!(context & ARG_LIST))
		    yyerror("ref illegal outside function argument list");
		else
		    num_refs++;
		
		switch ((yyvsp[(2) - (2)].node)->kind) {
		case NODE_PARAMETER_LVALUE:
		    op = F_LOCAL_LVALUE;
		    break;
		case NODE_TERNARY_OP:
		case NODE_OPCODE_1:
		case NODE_UNARY_OP_1:
		case NODE_BINARY_OP:
		    op = (yyvsp[(2) - (2)].node)->v.number;
		    if (op > F_RINDEX_LVALUE) 
			yyerror("Illegal to make reference to range");
		    break;
		default:
		    op=0; //0 is harmless, i hope
		    yyerror("unknown lvalue kind");
		}
		CREATE_UNARY_OP_1((yyval.node), F_MAKE_REF, TYPE_ANY, (yyvsp[(2) - (2)].node), op);
	    }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 1663 "grammar.y"
    {
#line 1598 "grammar.y.pre"
	        parse_node_t *l = (yyvsp[(1) - (3)].node), *r = (yyvsp[(3) - (3)].node);
		/* set this up here so we can change it below */
		/* assignments are backwards; rhs is evaluated before
		   lhs, so put the RIGHT hand side on the LEFT hand
		   side of the tree node. */
		CREATE_BINARY_OP((yyval.node), (yyvsp[(2) - (3)].number), r->type, r, l);

		if (exact_types && !compatible_types(r->type, l->type) &&
		    !((yyvsp[(2) - (3)].number) == F_ADD_EQ
		      && l->type == TYPE_STRING && 
		      (COMP_TYPE(r->type, TYPE_NUMBER))||r->type == TYPE_OBJECT)) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    p = strput(buf, end, "Bad assignment ");
		    p = get_two_types(p, end, l->type, r->type);
		    p = strput(p, end, ".");
		    yyerror(buf);
		}
		
		if ((yyvsp[(2) - (3)].number) == F_ASSIGN)
		    (yyval.node)->l.expr = do_promotions(r, l->type);
	    }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 1689 "grammar.y"
    {
#line 1623 "grammar.y.pre"
		yyerror("Illegal LHS");
		CREATE_ERROR((yyval.node));
	    }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 1695 "grammar.y"
    {
#line 1628 "grammar.y.pre"
		parse_node_t *p1 = (yyvsp[(3) - (5)].node), *p2 = (yyvsp[(5) - (5)].node);

		if (exact_types && !compatible_types2(p1->type, p2->type)) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Types in ?: do not match ");
		    p = get_two_types(p, end, p1->type, p2->type);
		    p = strput(p, end, ".");
		    yywarn(buf);
		}

		/* optimize if last expression did F_NOT */
		if (IS_NODE((yyvsp[(1) - (5)].node), NODE_UNARY_OP, F_NOT)) {
		    /* !a ? b : c  --> a ? c : b */
		    CREATE_IF((yyval.node), (yyvsp[(1) - (5)].node)->r.expr, p2, p1);
		} else {
		    CREATE_IF((yyval.node), (yyvsp[(1) - (5)].node), p1, p2);
		}
		(yyval.node)->type = ((p1->type == p2->type) ? p1->type : TYPE_ANY);
	    }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 1720 "grammar.y"
    {
#line 1652 "grammar.y.pre"
		CREATE_LAND_LOR((yyval.node), F_LOR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		if (IS_NODE((yyvsp[(1) - (3)].node), NODE_LAND_LOR, F_LOR))
		    (yyvsp[(1) - (3)].node)->kind = NODE_BRANCH_LINK;
	    }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 1727 "grammar.y"
    {
#line 1658 "grammar.y.pre"
		CREATE_LAND_LOR((yyval.node), F_LAND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		if (IS_NODE((yyvsp[(1) - (3)].node), NODE_LAND_LOR, F_LAND))
		    (yyvsp[(1) - (3)].node)->kind = NODE_BRANCH_LINK;
	    }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 1734 "grammar.y"
    {
#line 1664 "grammar.y.pre"
		int t1 = (yyvsp[(1) - (3)].node)->type, t3 = (yyvsp[(3) - (3)].node)->type;
		
		if (is_boolean((yyvsp[(1) - (3)].node)) && is_boolean((yyvsp[(3) - (3)].node)))
		    yywarn("bitwise operation on boolean values.");
		if ((t1 & TYPE_MOD_ARRAY) || (t3 & TYPE_MOD_ARRAY)) {
		    if (t1 != t3) {
			if ((t1 != TYPE_ANY) && (t3 != TYPE_ANY) &&
			    !(t1 & t3 & TYPE_MOD_ARRAY)) {
			    char buf[256];
			    char *end = EndOf(buf);
			    char *p;

			    p = strput(buf, end, "Incompatible types for | ");
			    p = get_two_types(p, end, t1, t3);
			    p = strput(p, end, ".");
			    yyerror(buf);
			}
			t1 = TYPE_ANY | TYPE_MOD_ARRAY;
		    }
		    CREATE_BINARY_OP((yyval.node), F_OR, t1, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		}
		else (yyval.node) = binary_int_op((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), F_OR, "|");		
	    }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 1760 "grammar.y"
    {
#line 1689 "grammar.y.pre"
		(yyval.node) = binary_int_op((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), F_XOR, "^");
	    }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 1765 "grammar.y"
    {
#line 1693 "grammar.y.pre"
		int t1 = (yyvsp[(1) - (3)].node)->type, t3 = (yyvsp[(3) - (3)].node)->type;
		if (is_boolean((yyvsp[(1) - (3)].node)) && is_boolean((yyvsp[(3) - (3)].node)))
		    yywarn("bitwise operation on boolean values.");
		if ((t1 & TYPE_MOD_ARRAY) || (t3 & TYPE_MOD_ARRAY)) {
		    if (t1 != t3) {
			if ((t1 != TYPE_ANY) && (t3 != TYPE_ANY) &&
			    !(t1 & t3 & TYPE_MOD_ARRAY)) {
			    char buf[256];
			    char *end = EndOf(buf);
			    char *p;
			    
			    p = strput(buf, end, "Incompatible types for & ");
			    p = get_two_types(p, end, t1, t3);
			    p = strput(p, end, ".");
			    yyerror(buf);
			}
			t1 = TYPE_ANY | TYPE_MOD_ARRAY;
		    } 
		    CREATE_BINARY_OP((yyval.node), F_AND, t1, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		} else (yyval.node) = binary_int_op((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), F_AND, "&");
	    }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 1789 "grammar.y"
    {
#line 1716 "grammar.y.pre"
		if (exact_types && !compatible_types2((yyvsp[(1) - (3)].node)->type, (yyvsp[(3) - (3)].node)->type)){
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "== always false because of incompatible types ");
		    p = get_two_types(p, end, (yyvsp[(1) - (3)].node)->type, (yyvsp[(3) - (3)].node)->type);
		    p = strput(p, end, ".");
		    yyerror(buf);
		}
		/* x == 0 -> !x */
		if (IS_NODE((yyvsp[(1) - (3)].node), NODE_NUMBER, 0)) {
		    CREATE_UNARY_OP((yyval.node), F_NOT, TYPE_NUMBER, (yyvsp[(3) - (3)].node));
		} else
		if (IS_NODE((yyvsp[(3) - (3)].node), NODE_NUMBER, 0)) {
		    CREATE_UNARY_OP((yyval.node), F_NOT, TYPE_NUMBER, (yyvsp[(1) - (3)].node));
		} else {
		    CREATE_BINARY_OP((yyval.node), F_EQ, TYPE_NUMBER, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		}
	    }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 1812 "grammar.y"
    {
#line 1738 "grammar.y.pre"
		if (exact_types && !compatible_types2((yyvsp[(1) - (3)].node)->type, (yyvsp[(3) - (3)].node)->type)){
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;

		    p = strput(buf, end, "!= always true because of incompatible types ");
		    p = get_two_types(p, end, (yyvsp[(1) - (3)].node)->type, (yyvsp[(3) - (3)].node)->type);
		    p = strput(p, end, ".");
		    yyerror(buf);
		}
                CREATE_BINARY_OP((yyval.node), F_NE, TYPE_NUMBER, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	    }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 1827 "grammar.y"
    {
#line 1752 "grammar.y.pre"
		if (exact_types) {
		    int t1 = (yyvsp[(1) - (3)].node)->type;
		    int t3 = (yyvsp[(3) - (3)].node)->type;

		    if (!COMP_TYPE(t1, TYPE_NUMBER) 
			&& !COMP_TYPE(t1, TYPE_STRING)) {
			char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Bad left argument to '");
			p = strput(p, end, query_instr_name((yyvsp[(2) - (3)].number)));
			p = strput(p, end, "' : \"");
			p = get_type_name(p, end, t1);
			p = strput(p, end, "\"");
			yyerror(buf);
		    } else if (!COMP_TYPE(t3, TYPE_NUMBER) 
			       && !COMP_TYPE(t3, TYPE_STRING)) {
                        char buf[256];
			char *end = EndOf(buf);
			char *p;
			
                        p = strput(buf, end, "Bad right argument to '");
                        p = strput(p, end, query_instr_name((yyvsp[(2) - (3)].number)));
                        p = strput(p, end, "' : \"");
                        p = get_type_name(p, end, t3);
			p = strput(p, end, "\"");
			yyerror(buf);
		    } else if (!compatible_types2(t1,t3)) {
			char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Arguments to ");
			p = strput(p, end, query_instr_name((yyvsp[(2) - (3)].number)));
			p = strput(p, end, " do not have compatible types : ");
			p = get_two_types(p, end, t1, t3);
			yyerror(buf);
		    }
		}
                CREATE_BINARY_OP((yyval.node), (yyvsp[(2) - (3)].number), TYPE_NUMBER, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	    }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 1872 "grammar.y"
    {
#line 1796 "grammar.y.pre"
                if (exact_types) {
                    int t1 = (yyvsp[(1) - (3)].node)->type, t3 = (yyvsp[(3) - (3)].node)->type;

                    if (!COMP_TYPE(t1, TYPE_NUMBER) 
			&& !COMP_TYPE(t1, TYPE_STRING)) {
                        char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Bad left argument to '<' : \"");
                        p = get_type_name(p, end, t1);
			p = strput(p, end, "\"");
                        yyerror(buf);
                    } else if (!COMP_TYPE(t3, TYPE_NUMBER)
			       && !COMP_TYPE(t3, TYPE_STRING)) {
                        char buf[200];
			char *end = EndOf(buf);
			char *p;
			
                        p = strput(buf, end, "Bad right argument to '<' : \"");
                        p = get_type_name(p, end, t3);
                        p = strput(p, end, "\"");
                        yyerror(buf);
                    } else if (!compatible_types2(t1,t3)) {
                        char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Arguments to < do not have compatible types : ");
			p = get_two_types(p, end, t1, t3);
                        yyerror(buf);
                    }
                }
                CREATE_BINARY_OP((yyval.node), F_LT, TYPE_NUMBER, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
            }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 1910 "grammar.y"
    {
#line 1833 "grammar.y.pre"
		(yyval.node) = binary_int_op((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), F_LSH, "<<");
	    }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 1915 "grammar.y"
    {
#line 1837 "grammar.y.pre"
		(yyval.node) = binary_int_op((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), F_RSH, ">>");
	    }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 1920 "grammar.y"
    {
#line 1841 "grammar.y.pre"
		int result_type;

		if (exact_types) {
		    int t1 = (yyvsp[(1) - (3)].node)->type, t3 = (yyvsp[(3) - (3)].node)->type;

		    if (t1 == t3){
#ifdef CAST_CALL_OTHERS
			if (t1 == TYPE_UNKNOWN){
			    yyerror("Bad arguments to '+' (unknown vs unknown)");
			    result_type = TYPE_ANY;
			} else
#endif
			    result_type = t1;
		    }
		    else if (t1 == TYPE_ANY) {
			if (t3 == TYPE_FUNCTION) {
			    yyerror("Bad right argument to '+' (function)");
			    result_type = TYPE_ANY;
			} else result_type = t3;
		    } else if (t3 == TYPE_ANY) {
			if (t1 == TYPE_FUNCTION) {
			    yyerror("Bad left argument to '+' (function)");
			    result_type = TYPE_ANY;
			} else result_type = t1;
		    } else {
			switch(t1) {
			case TYPE_OBJECT:
			  if(t3 == TYPE_STRING){
			    result_type = TYPE_STRING;
			  } else goto add_error;
			  break;
			case TYPE_STRING:
			  {
			    if (t3 == TYPE_REAL || t3 == TYPE_NUMBER || t3 == TYPE_OBJECT){
			      result_type = TYPE_STRING;
			    } else goto add_error;
			    break;
			  }
			case TYPE_NUMBER:
			  {
			    if (t3 == TYPE_REAL || t3 == TYPE_STRING)
			      result_type = t3;
			    else goto add_error;
			    break;
			  }
			case TYPE_REAL:
			  {
			    if (t3 == TYPE_NUMBER) result_type = TYPE_REAL;
			    else if (t3 == TYPE_STRING) result_type = TYPE_STRING;
			    else goto add_error;
			    break;
			  }
			default:
			  {
			    if (t1 & t3 & TYPE_MOD_ARRAY) {
			      result_type = TYPE_ANY|TYPE_MOD_ARRAY;
			      break;
			    }
			  add_error:
			    {
			      char buf[256];
			      char *end = EndOf(buf);
			      char *p;
			      
			      p = strput(buf, end, "Invalid argument types to '+' ");
			      p = get_two_types(p, end, t1, t3);
			      yyerror(buf);
			      result_type = TYPE_ANY;
			    }
			  }
			}
		    }
		} else 
		    result_type = TYPE_ANY;

		/* TODO: perhaps we should do (string)+(number) and
		 * (number)+(string) constant folding as well.
		 *
		 * codefor string x = "foo" + 1;
		 *
		 * 0000: push string 13, number 1
		 * 0004: +
		 * 0005: (void)assign_local LV0
		 */
		switch ((yyvsp[(1) - (3)].node)->kind) {
		case NODE_NUMBER:
		    /* 0 + X */
		    if ((yyvsp[(1) - (3)].node)->v.number == 0 &&
			((yyvsp[(3) - (3)].node)->type == TYPE_NUMBER || (yyvsp[(3) - (3)].node)->type == TYPE_REAL)) {
			(yyval.node) = (yyvsp[(3) - (3)].node);
			break;
		    }
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_NUMBER) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.number += (yyvsp[(3) - (3)].node)->v.number;
			break;
		    }
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_REAL) {
			(yyval.node) = (yyvsp[(3) - (3)].node);
			(yyvsp[(3) - (3)].node)->v.real += (yyvsp[(1) - (3)].node)->v.number;
			break;
		    }
		    /* swapping the nodes may help later constant folding */
		    if ((yyvsp[(3) - (3)].node)->type != TYPE_STRING && (yyvsp[(3) - (3)].node)->type != TYPE_ANY)
			CREATE_BINARY_OP((yyval.node), F_ADD, result_type, (yyvsp[(3) - (3)].node), (yyvsp[(1) - (3)].node));
		    else
			CREATE_BINARY_OP((yyval.node), F_ADD, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    break;
		case NODE_REAL:
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_NUMBER) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.real += (yyvsp[(3) - (3)].node)->v.number;
			break;
		    }
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_REAL) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.real += (yyvsp[(3) - (3)].node)->v.real;
			break;
		    }
		    /* swapping the nodes may help later constant folding */
		    if ((yyvsp[(3) - (3)].node)->type != TYPE_STRING && (yyvsp[(3) - (3)].node)->type != TYPE_ANY)
			CREATE_BINARY_OP((yyval.node), F_ADD, result_type, (yyvsp[(3) - (3)].node), (yyvsp[(1) - (3)].node));
		    else
			CREATE_BINARY_OP((yyval.node), F_ADD, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    break;
		case NODE_STRING:
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_STRING) {
			/* Combine strings */
			long n1, n2;
			const char *s1, *s2;
			char *news;
			int l;

			n1 = (yyvsp[(1) - (3)].node)->v.number;
			n2 = (yyvsp[(3) - (3)].node)->v.number;
			s1 = PROG_STRING(n1);
			s2 = PROG_STRING(n2);
			news = (char *)DXALLOC( (l = strlen(s1))+strlen(s2)+1, TAG_COMPILER, "combine string" );
			strcpy(news, s1);
			strcat(news + l, s2);
			/* free old strings (ordering may help shrink table) */
			if (n1 > n2) {
			    free_prog_string(n1); free_prog_string(n2);
			} else {
			    free_prog_string(n2); free_prog_string(n1);
			}
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyval.node)->v.number = store_prog_string(news);
			FREE(news);
			break;
		    }
		    /* Yes, this can actually happen for absurd code like:
		     * (int)"foo" + 0
		     * for which I guess we ought to generate (int)"foo"
		     * in order to be consistent.  Then shoot the coder.
		     */
		    /* FALLTHROUGH */
		default:
		    /* X + 0 */
		    if (IS_NODE((yyvsp[(3) - (3)].node), NODE_NUMBER, 0) &&
			((yyvsp[(1) - (3)].node)->type == TYPE_NUMBER || (yyvsp[(1) - (3)].node)->type == TYPE_REAL)) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			break;
		    }
		    CREATE_BINARY_OP((yyval.node), F_ADD, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    break;
		}
	    }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 2091 "grammar.y"
    {
#line 2011 "grammar.y.pre"
		int result_type;

		if (exact_types) {
		    int t1 = (yyvsp[(1) - (3)].node)->type, t3 = (yyvsp[(3) - (3)].node)->type;

		    if (t1 == t3){
			switch(t1){
			    case TYPE_ANY:
			    case TYPE_NUMBER:
			    case TYPE_REAL:
			        result_type = t1;
				break;
			    default:
				if (!(t1 & TYPE_MOD_ARRAY)){
				    type_error("Bad argument number 1 to '-'", t1);
				    result_type = TYPE_ANY;
				} else result_type = t1;
			}
		    } else if (t1 == TYPE_ANY){
			switch(t3){
			    case TYPE_REAL:
			    case TYPE_NUMBER:
			        result_type = t3;
				break;
			    default:
				if (!(t3 & TYPE_MOD_ARRAY)){
				    type_error("Bad argument number 2 to '-'", t3);
				    result_type = TYPE_ANY;
				} else result_type = t3;
			}
		    } else if (t3 == TYPE_ANY){
			switch(t1){
			    case TYPE_REAL:
			    case TYPE_NUMBER:
			        result_type = t1;
				break;
			    default:
				if (!(t1 & TYPE_MOD_ARRAY)){
				    type_error("Bad argument number 1 to '-'", t1);
				    result_type = TYPE_ANY;
				} else result_type = t1;
			}
		    } else if ((t1 == TYPE_REAL && t3 == TYPE_NUMBER) ||
			       (t3 == TYPE_REAL && t1 == TYPE_NUMBER)){
			result_type = TYPE_REAL;
		    } else if (t1 & t3 & TYPE_MOD_ARRAY){
			result_type = TYPE_MOD_ARRAY|TYPE_ANY;
		    } else {
			char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Invalid types to '-' ");
			p = get_two_types(p, end, t1, t3);
			yyerror(buf);
			result_type = TYPE_ANY;
		    }
		} else result_type = TYPE_ANY;
		
		switch ((yyvsp[(1) - (3)].node)->kind) {
		case NODE_NUMBER:
		    if ((yyvsp[(1) - (3)].node)->v.number == 0) {
			CREATE_UNARY_OP((yyval.node), F_NEGATE, (yyvsp[(3) - (3)].node)->type, (yyvsp[(3) - (3)].node));
		    } else if ((yyvsp[(3) - (3)].node)->kind == NODE_NUMBER) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.number -= (yyvsp[(3) - (3)].node)->v.number;
		    } else if ((yyvsp[(3) - (3)].node)->kind == NODE_REAL) {
			(yyval.node) = (yyvsp[(3) - (3)].node);
			(yyvsp[(3) - (3)].node)->v.real = (yyvsp[(1) - (3)].node)->v.number - (yyvsp[(3) - (3)].node)->v.real;
		    } else {
			CREATE_BINARY_OP((yyval.node), F_SUBTRACT, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    }
		    break;
		case NODE_REAL:
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_NUMBER) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.real -= (yyvsp[(3) - (3)].node)->v.number;
		    } else if ((yyvsp[(3) - (3)].node)->kind == NODE_REAL) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.real -= (yyvsp[(3) - (3)].node)->v.real;
		    } else {
			CREATE_BINARY_OP((yyval.node), F_SUBTRACT, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    }
		    break;
		default:
		    /* optimize X-0 */
		    if (IS_NODE((yyvsp[(3) - (3)].node), NODE_NUMBER, 0)) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
		    } 
		    CREATE_BINARY_OP((yyval.node), F_SUBTRACT, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		}
	    }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 2186 "grammar.y"
    {
#line 2105 "grammar.y.pre"
		int result_type;

		if (exact_types){
		    int t1 = (yyvsp[(1) - (3)].node)->type, t3 = (yyvsp[(3) - (3)].node)->type;

		    if (t1 == t3){
			switch(t1){
			    case TYPE_MAPPING:
			    case TYPE_ANY:
			    case TYPE_NUMBER:
			    case TYPE_REAL:
			        result_type = t1;
				break;
			default:
				type_error("Bad argument number 1 to '*'", t1);
				result_type = TYPE_ANY;
			}
		    } else if (t1 == TYPE_ANY || t3 == TYPE_ANY){
			int t = (t1 == TYPE_ANY) ? t3 : t1;
			switch(t){
			    case TYPE_NUMBER:
			    case TYPE_REAL:
			    case TYPE_MAPPING:
			        result_type = t;
				break;
			    default:
				type_error((t1 == TYPE_ANY) ?
					   "Bad argument number 2 to '*'" :
					   "Bad argument number 1 to '*'",
					   t);
				result_type = TYPE_ANY;
			}
		    } else if ((t1 == TYPE_NUMBER && t3 == TYPE_REAL) ||
			       (t1 == TYPE_REAL && t3 == TYPE_NUMBER)){
			result_type = TYPE_REAL;
		    } else {
			char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Invalid types to '*' ");
			p = get_two_types(p, end, t1, t3);
			yyerror(buf);
			result_type = TYPE_ANY;
		    }
		} else result_type = TYPE_ANY;

		switch ((yyvsp[(1) - (3)].node)->kind) {
		case NODE_NUMBER:
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_NUMBER) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyval.node)->v.number *= (yyvsp[(3) - (3)].node)->v.number;
			break;
		    }
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_REAL) {
			(yyval.node) = (yyvsp[(3) - (3)].node);
			(yyvsp[(3) - (3)].node)->v.real *= (yyvsp[(1) - (3)].node)->v.number;
			break;
		    }
		    CREATE_BINARY_OP((yyval.node), F_MULTIPLY, result_type, (yyvsp[(3) - (3)].node), (yyvsp[(1) - (3)].node));
		    break;
		case NODE_REAL:
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_NUMBER) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.real *= (yyvsp[(3) - (3)].node)->v.number;
			break;
		    }
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_REAL) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.real *= (yyvsp[(3) - (3)].node)->v.real;
			break;
		    }
		    CREATE_BINARY_OP((yyval.node), F_MULTIPLY, result_type, (yyvsp[(3) - (3)].node), (yyvsp[(1) - (3)].node));
		    break;
		default:
		    CREATE_BINARY_OP((yyval.node), F_MULTIPLY, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		}
	    }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 2267 "grammar.y"
    {
#line 2185 "grammar.y.pre"
		(yyval.node) = binary_int_op((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), F_MOD, "%");
	    }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 2272 "grammar.y"
    {
#line 2189 "grammar.y.pre"
		int result_type;

		if (exact_types){
		    int t1 = (yyvsp[(1) - (3)].node)->type, t3 = (yyvsp[(3) - (3)].node)->type;

		    if (t1 == t3){
			switch(t1){
			    case TYPE_NUMBER:
			    case TYPE_REAL:
			case TYPE_ANY:
			        result_type = t1;
				break;
			    default:
				type_error("Bad argument 1 to '/'", t1);
				result_type = TYPE_ANY;
			}
		    } else if (t1 == TYPE_ANY || t3 == TYPE_ANY){
			int t = (t1 == TYPE_ANY) ? t3 : t1;
			if (t == TYPE_REAL || t == TYPE_NUMBER)
			    result_type = t; 
			else {
			    type_error(t1 == TYPE_ANY ?
				       "Bad argument 2 to '/'" :
				       "Bad argument 1 to '/'", t);
			    result_type = TYPE_ANY;
			}
		    } else if ((t1 == TYPE_NUMBER && t3 == TYPE_REAL) ||
			       (t1 == TYPE_REAL && t3 == TYPE_NUMBER)) {
			result_type = TYPE_REAL;
		    } else {
			char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Invalid types to '/' ");
			p = get_two_types(p, end, t1, t3);
			yyerror(buf);
			result_type = TYPE_ANY;
		    }
		} else result_type = TYPE_ANY;		    

		/* constant expressions */
		switch ((yyvsp[(1) - (3)].node)->kind) {
		case NODE_NUMBER:
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_NUMBER) {
			if ((yyvsp[(3) - (3)].node)->v.number == 0) {
			    yyerror("Divide by zero in constant");
			    (yyval.node) = (yyvsp[(1) - (3)].node);
			    break;
			}
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.number /= (yyvsp[(3) - (3)].node)->v.number;
			break;
		    }
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_REAL) {
			if ((yyvsp[(3) - (3)].node)->v.real == 0.0) {
			    yyerror("Divide by zero in constant");
			    (yyval.node) = (yyvsp[(1) - (3)].node);
			    break;
			}
			(yyval.node) = (yyvsp[(3) - (3)].node);
			(yyvsp[(3) - (3)].node)->v.real = ((yyvsp[(1) - (3)].node)->v.number / (yyvsp[(3) - (3)].node)->v.real);
			break;
		    }
		    CREATE_BINARY_OP((yyval.node), F_DIVIDE, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    break;
		case NODE_REAL:
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_NUMBER) {
			if ((yyvsp[(3) - (3)].node)->v.number == 0) {
			    yyerror("Divide by zero in constant");
			    (yyval.node) = (yyvsp[(1) - (3)].node);
			    break;
			}
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.real /= (yyvsp[(3) - (3)].node)->v.number;
			break;
		    }
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_REAL) {
			if ((yyvsp[(3) - (3)].node)->v.real == 0.0) {
			    yyerror("Divide by zero in constant");
			    (yyval.node) = (yyvsp[(1) - (3)].node);
			    break;
			}
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.real /= (yyvsp[(3) - (3)].node)->v.real;
			break;
		    }
		    CREATE_BINARY_OP((yyval.node), F_DIVIDE, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    break;
		default:
		    CREATE_BINARY_OP((yyval.node), F_DIVIDE, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		}
	    }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 2368 "grammar.y"
    {
#line 2284 "grammar.y.pre"
		(yyval.node) = (yyvsp[(2) - (2)].node);
		(yyval.node)->type = (yyvsp[(1) - (2)].number);

		if (exact_types &&
		    (yyvsp[(2) - (2)].node)->type != (yyvsp[(1) - (2)].number) &&
		    (yyvsp[(2) - (2)].node)->type != TYPE_ANY && 
		    (yyvsp[(2) - (2)].node)->type != TYPE_UNKNOWN &&
		    (yyvsp[(1) - (2)].number) != TYPE_VOID) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Cannot cast ");
		    p = get_type_name(p, end, (yyvsp[(2) - (2)].node)->type);
		    p = strput(p, end, "to ");
		    p = get_type_name(p, end, (yyvsp[(1) - (2)].number));
		    yyerror(buf);
		}
	    }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 2390 "grammar.y"
    {
#line 2305 "grammar.y.pre"
		CREATE_UNARY_OP((yyval.node), F_PRE_INC, 0, (yyvsp[(2) - (2)].node));
                if (exact_types){
                    switch((yyvsp[(2) - (2)].node)->type){
                        case TYPE_NUMBER:
                        case TYPE_ANY:
                        case TYPE_REAL:
                        {
                            (yyval.node)->type = (yyvsp[(2) - (2)].node)->type;
                            break;
                        }

                        default:
                        {
                            (yyval.node)->type = TYPE_ANY;
                            type_error("Bad argument 1 to ++x", (yyvsp[(2) - (2)].node)->type);
                        }
                    }
                } else (yyval.node)->type = TYPE_ANY;
	    }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 2412 "grammar.y"
    {
#line 2326 "grammar.y.pre"
		CREATE_UNARY_OP((yyval.node), F_PRE_DEC, 0, (yyvsp[(2) - (2)].node));
                if (exact_types){
                    switch((yyvsp[(2) - (2)].node)->type){
                        case TYPE_NUMBER:
                        case TYPE_ANY:
                        case TYPE_REAL:
                        {
                            (yyval.node)->type = (yyvsp[(2) - (2)].node)->type;
                            break;
                        }

                        default:
                        {
                            (yyval.node)->type = TYPE_ANY;
                            type_error("Bad argument 1 to --x", (yyvsp[(2) - (2)].node)->type);
                        }
                    }
                } else (yyval.node)->type = TYPE_ANY;

	    }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 2435 "grammar.y"
    {
#line 2348 "grammar.y.pre"
		if ((yyvsp[(2) - (2)].node)->kind == NODE_NUMBER) {
		    (yyval.node) = (yyvsp[(2) - (2)].node);
		    (yyval.node)->v.number = !((yyval.node)->v.number);
		} else {
		    CREATE_UNARY_OP((yyval.node), F_NOT, TYPE_NUMBER, (yyvsp[(2) - (2)].node));
		}
	    }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 2445 "grammar.y"
    {
#line 2357 "grammar.y.pre"
		if (exact_types && !IS_TYPE((yyvsp[(2) - (2)].node)->type, TYPE_NUMBER))
		    type_error("Bad argument to ~", (yyvsp[(2) - (2)].node)->type);
		if ((yyvsp[(2) - (2)].node)->kind == NODE_NUMBER) {
		    (yyval.node) = (yyvsp[(2) - (2)].node);
		    (yyval.node)->v.number = ~(yyval.node)->v.number;
		} else {
		    CREATE_UNARY_OP((yyval.node), F_COMPL, TYPE_NUMBER, (yyvsp[(2) - (2)].node));
		}
	    }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 2457 "grammar.y"
    {
#line 2368 "grammar.y.pre"
		int result_type;
                if (exact_types){
		    int t = (yyvsp[(2) - (2)].node)->type;
		    if (!COMP_TYPE(t, TYPE_NUMBER)){
			type_error("Bad argument to unary '-'", t);
			result_type = TYPE_ANY;
		    } else result_type = t;
		} else result_type = TYPE_ANY;

		switch ((yyvsp[(2) - (2)].node)->kind) {
		case NODE_NUMBER:
		    (yyval.node) = (yyvsp[(2) - (2)].node);
		    (yyval.node)->v.number = -(yyval.node)->v.number;
		    break;
		case NODE_REAL:
		    (yyval.node) = (yyvsp[(2) - (2)].node);
		    (yyval.node)->v.real = -(yyval.node)->v.real;
		    break;
		default:
		    CREATE_UNARY_OP((yyval.node), F_NEGATE, result_type, (yyvsp[(2) - (2)].node));
		}
	    }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 2482 "grammar.y"
    {
#line 2392 "grammar.y.pre"
		CREATE_UNARY_OP((yyval.node), F_POST_INC, 0, (yyvsp[(1) - (2)].node));
		(yyval.node)->v.number = F_POST_INC;
                if (exact_types){
                    switch((yyvsp[(1) - (2)].node)->type){
                        case TYPE_NUMBER:
		    case TYPE_ANY:
                        case TYPE_REAL:
                        {
                            (yyval.node)->type = (yyvsp[(1) - (2)].node)->type;
                            break;
                        }

                        default:
                        {
                            (yyval.node)->type = TYPE_ANY;
                            type_error("Bad argument 1 to x++", (yyvsp[(1) - (2)].node)->type);
                        }
                    }
                } else (yyval.node)->type = TYPE_ANY;
	    }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 2505 "grammar.y"
    {
#line 2414 "grammar.y.pre"
		CREATE_UNARY_OP((yyval.node), F_POST_DEC, 0, (yyvsp[(1) - (2)].node));
                if (exact_types){
                    switch((yyvsp[(1) - (2)].node)->type){
		    case TYPE_NUMBER:
		    case TYPE_ANY:
		    case TYPE_REAL:
		    {
			(yyval.node)->type = (yyvsp[(1) - (2)].node)->type;
			break;
		    }

		    default:
		    {
			(yyval.node)->type = TYPE_ANY;
			type_error("Bad argument 1 to x--", (yyvsp[(1) - (2)].node)->type);
		    }
                    }
                } else (yyval.node)->type = TYPE_ANY;
	    }
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 2536 "grammar.y"
    {
#line 2444 "grammar.y.pre"
		if (exact_types && !IS_TYPE(exact_types, TYPE_VOID))
		    yywarn("Non-void functions must return a value.");
		CREATE_RETURN((yyval.node), 0);
	    }
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 2543 "grammar.y"
    {
#line 2450 "grammar.y.pre"
		if (exact_types && !compatible_types((yyvsp[(2) - (3)].node)->type, exact_types)) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Type of returned value doesn't match function return type ");
		    p = get_two_types(p, end, (yyvsp[(2) - (3)].node)->type, exact_types);
		    yyerror(buf);
		}
		if (IS_NODE((yyvsp[(2) - (3)].node), NODE_NUMBER, 0)) {
		    CREATE_RETURN((yyval.node), 0);
		} else {
		    CREATE_RETURN((yyval.node), (yyvsp[(2) - (3)].node));
		}
	    }
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 2564 "grammar.y"
    {
#line 2470 "grammar.y.pre"
		CREATE_EXPR_LIST((yyval.node), 0);
	    }
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 2569 "grammar.y"
    {
#line 2474 "grammar.y.pre"
		CREATE_EXPR_LIST((yyval.node), (yyvsp[(1) - (1)].node));
	    }
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 2574 "grammar.y"
    {
#line 2478 "grammar.y.pre"
		CREATE_EXPR_LIST((yyval.node), (yyvsp[(1) - (2)].node));
	    }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 2582 "grammar.y"
    {
#line 2485 "grammar.y.pre"
		CREATE_EXPR_NODE((yyval.node), (yyvsp[(1) - (1)].node), 0);
	    }
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 2587 "grammar.y"
    {
#line 2489 "grammar.y.pre"
		CREATE_EXPR_NODE((yyval.node), (yyvsp[(1) - (2)].node), 1);
	    }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 2595 "grammar.y"
    {
#line 2496 "grammar.y.pre"
		(yyvsp[(1) - (1)].node)->kind = 1;

		(yyval.node) = (yyvsp[(1) - (1)].node);
	    }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 2602 "grammar.y"
    {
#line 2502 "grammar.y.pre"
		(yyvsp[(3) - (3)].node)->kind = 0;

		(yyval.node) = (yyvsp[(1) - (3)].node);
		(yyval.node)->kind++;
		(yyval.node)->l.expr->r.expr = (yyvsp[(3) - (3)].node);
		(yyval.node)->l.expr = (yyvsp[(3) - (3)].node);
	    }
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 2615 "grammar.y"
    {
#line 2514 "grammar.y.pre"
		/* this is a dummy node */
		CREATE_EXPR_LIST((yyval.node), 0);
	    }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 2621 "grammar.y"
    {
#line 2519 "grammar.y.pre"
		CREATE_EXPR_LIST((yyval.node), (yyvsp[(1) - (1)].node));
	    }
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 2626 "grammar.y"
    {
#line 2523 "grammar.y.pre"
		CREATE_EXPR_LIST((yyval.node), (yyvsp[(1) - (2)].node));
	    }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 2634 "grammar.y"
    {
#line 2530 "grammar.y.pre"
		(yyval.node) = new_node_no_line();
		(yyval.node)->kind = 2;
		(yyval.node)->v.expr = (yyvsp[(1) - (1)].node);
		(yyval.node)->r.expr = 0;
		(yyval.node)->type = 0;
		/* we keep track of the end of the chain in the left nodes */
		(yyval.node)->l.expr = (yyval.node);
            }
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 2645 "grammar.y"
    {
#line 2540 "grammar.y.pre"
		parse_node_t *expr;

		expr = new_node_no_line();
		expr->kind = 0;
		expr->v.expr = (yyvsp[(3) - (3)].node);
		expr->r.expr = 0;
		expr->type = 0;
		
		(yyvsp[(1) - (3)].node)->l.expr->r.expr = expr;
		(yyvsp[(1) - (3)].node)->l.expr = expr;
		(yyvsp[(1) - (3)].node)->kind += 2;
		(yyval.node) = (yyvsp[(1) - (3)].node);
	    }
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 2664 "grammar.y"
    {
#line 2558 "grammar.y.pre"
		CREATE_TWO_VALUES((yyval.node), 0, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
            }
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 2672 "grammar.y"
    {
#line 2565 "grammar.y.pre"
#define LV_ILLEGAL 1
#define LV_RANGE 2
#define LV_INDEX 4
                /* Restrictive lvalues, but I think they make more sense :) */
                (yyval.node) = (yyvsp[(1) - (1)].node);
		if((yyval.node)->kind == NODE_BINARY_OP && (yyval.node)->v.number == F_TYPE_CHECK) 
		    (yyval.node) = (yyval.node)->l.expr;
                switch((yyval.node)->kind) {
		default:
		    yyerror("Illegal lvalue");
		    break;
		case NODE_PARAMETER:
		    (yyval.node)->kind = NODE_PARAMETER_LVALUE;
		    break;
		case NODE_TERNARY_OP:
		    (yyval.node)->v.number = (yyval.node)->r.expr->v.number;
		case NODE_OPCODE_1:
		case NODE_UNARY_OP_1:
		case NODE_BINARY_OP:
		    if ((yyval.node)->v.number >= F_LOCAL && (yyval.node)->v.number <= F_MEMBER)
			(yyval.node)->v.number++; /* make it an lvalue */
		    else if ((yyval.node)->v.number >= F_INDEX 
			     && (yyval.node)->v.number <= F_RE_RANGE) {
                        parse_node_t *node = (yyval.node);
                        int flag = 0;
                        do {
                            switch(node->kind) {
			    case NODE_PARAMETER:
				node->kind = NODE_PARAMETER_LVALUE;
				flag |= LV_ILLEGAL;
				break;
			    case NODE_TERNARY_OP:
				node->v.number = node->r.expr->v.number;
			    case NODE_OPCODE_1:
			    case NODE_UNARY_OP_1:
			    case NODE_BINARY_OP:
			        if(node->kind == NODE_BINARY_OP && 
				   node->v.number == F_TYPE_CHECK) {
				    node = node->l.expr;
				    continue;
				}

				if (node->v.number >= F_LOCAL 
				    && node->v.number <= F_MEMBER) {
				    node->v.number++;
				    flag |= LV_ILLEGAL;
				    break;
				} else if (node->v.number == F_INDEX ||
					 node->v.number == F_RINDEX) {
				    node->v.number++;
				    flag |= LV_INDEX;
				    break;
				} else if (node->v.number >= F_ADD_EQ
					   && node->v.number <= F_ASSIGN) {
				    if (!(flag & LV_INDEX)) {
					yyerror("Illegal lvalue, a possible lvalue is (x <assign> y)[a]");
				    }
				    if (node->r.expr->kind == NODE_BINARY_OP||
					node->r.expr->kind == NODE_TERNARY_OP){
					if (node->r.expr->v.number >= F_NN_RANGE_LVALUE && node->r.expr->v.number <= F_NR_RANGE_LVALUE)
					    yyerror("Illegal to have (x[a..b] <assign> y) to be the beginning of an lvalue");
				    }
				    flag = LV_ILLEGAL;
				    break;
				} else if (node->v.number >= F_NN_RANGE
					 && node->v.number <= F_RE_RANGE) {
				    if (flag & LV_RANGE) {
					yyerror("Can't do range lvalue of range lvalue.");
					flag |= LV_ILLEGAL;
					break;
				    }
                                    if (flag & LV_INDEX){
					yyerror("Can't do indexed lvalue of range lvalue.");
					flag |= LV_ILLEGAL;
					break;
				    }
				    if (node->v.number == F_NE_RANGE) {
					/* x[foo..] -> x[foo..<1] */
					parse_node_t *rchild = node->r.expr;
					node->kind = NODE_TERNARY_OP;
					CREATE_BINARY_OP(node->r.expr,
							 F_NR_RANGE_LVALUE,
							 0, 0, rchild);
					CREATE_NUMBER(node->r.expr->l.expr, 1);
				    } else if (node->v.number == F_RE_RANGE) {
					/* x[<foo..] -> x[<foo..<1] */
					parse_node_t *rchild = node->r.expr;
					node->kind = NODE_TERNARY_OP;
					CREATE_BINARY_OP(node->r.expr,
							 F_RR_RANGE_LVALUE,
							 0, 0, rchild);
					CREATE_NUMBER(node->r.expr->l.expr, 1);
				    } else
					node->r.expr->v.number++;
				    flag |= LV_RANGE;
				    node = node->r.expr->r.expr;
				    continue;
				}
			    default:
				yyerror("Illegal lvalue");
				flag = LV_ILLEGAL;
				break;
			    }   
                            if ((flag & LV_ILLEGAL) || !(node = node->r.expr)) break;
                        } while (1);
                        break;
		    } else 
			yyerror("Illegal lvalue");
		    break;
                }
            }
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 2789 "grammar.y"
    {
#line 2681 "grammar.y.pre"
		(yyval.number) = ((yyvsp[(2) - (2)].number) << 8) | FP_EFUN;
	    }
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 2799 "grammar.y"
    {
#line 2713 "grammar.y.pre"
              int i;
              if ((i = (yyvsp[(1) - (1)].ihe)->dn.local_num) != -1) {
		  type_of_locals_ptr[i] &= ~LOCAL_MOD_UNUSED;
		  if (type_of_locals_ptr[i] & LOCAL_MOD_REF)
		      CREATE_OPCODE_1((yyval.node), F_REF, type_of_locals_ptr[i] & ~LOCAL_MOD_REF,i & 0xff);
		  else
		      CREATE_OPCODE_1((yyval.node), F_LOCAL, type_of_locals_ptr[i], i & 0xff);
		  if (current_function_context)
		      current_function_context->num_locals++;
              } else
		  if ((i = (yyvsp[(1) - (1)].ihe)->dn.global_num) != -1) {
		      if (current_function_context)
			  current_function_context->bindable = FP_NOT_BINDABLE;
                          CREATE_OPCODE_1((yyval.node), F_GLOBAL,
				      VAR_TEMP(i)->type & ~DECL_MODS, i);
		      if (VAR_TEMP(i)->type & DECL_HIDDEN) {
			  char buf[256];
			  char *end = EndOf(buf);
			  char *p;

			  p = strput(buf, end, "Illegal to use private variable '");
			  p = strput(p, end, (yyvsp[(1) - (1)].ihe)->name);
			  p = strput(p, end, "'");
			  yyerror(buf);
		      }
		  } else {
		      char buf[256];
		      char *end = EndOf(buf);
		      char *p;
		      
		      p = strput(buf, end, "Undefined variable '");
		      p = strput(p, end, (yyvsp[(1) - (1)].ihe)->name);
		      p = strput(p, end, "'");
		      if (current_number_of_locals < CFG_MAX_LOCAL_VARIABLES) {
			  add_local_name((yyvsp[(1) - (1)].ihe)->name, TYPE_ANY);
		      }
		      CREATE_ERROR((yyval.node));
		      yyerror(buf);
		  }
	    }
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 2842 "grammar.y"
    {
#line 2755 "grammar.y.pre"
		char buf[256];
		char *end = EndOf(buf);
		char *p;
		
		p = strput(buf, end, "Undefined variable '");
		p = strput(p, end, (yyvsp[(1) - (1)].string));
		p = strput(p, end, "'");
                if (current_number_of_locals < CFG_MAX_LOCAL_VARIABLES) {
                    add_local_name((yyvsp[(1) - (1)].string), TYPE_ANY);
                }
                CREATE_ERROR((yyval.node));
                yyerror(buf);
                scratch_free((yyvsp[(1) - (1)].string));
            }
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 2859 "grammar.y"
    {
#line 2771 "grammar.y.pre"
		CREATE_PARAMETER((yyval.node), TYPE_ANY, (yyvsp[(1) - (1)].number));
            }
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 2864 "grammar.y"
    {
#line 2775 "grammar.y.pre"
		(yyval.contextp) = current_function_context;
		/* already flagged as an error */
		if (current_function_context)
		    current_function_context = current_function_context->parent;
            }
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 2872 "grammar.y"
    {
#line 2782 "grammar.y.pre"
		parse_node_t *node;

		current_function_context = (yyvsp[(3) - (5)].contextp);

		if (!current_function_context || current_function_context->num_parameters == -2) {
		    /* This was illegal, and error'ed when the '$' token
		     * was returned.
		     */
		    CREATE_ERROR((yyval.node));
		} else {
		    CREATE_OPCODE_1((yyval.node), F_LOCAL, (yyvsp[(4) - (5)].node)->type,
				    current_function_context->values_list->kind++);

		    node = new_node_no_line();
		    node->type = 0;
		    current_function_context->values_list->l.expr->r.expr = node;
		    current_function_context->values_list->l.expr = node;
		    node->r.expr = 0;
		    node->v.expr = (yyvsp[(4) - (5)].node);
		}
	    }
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 2896 "grammar.y"
    {
#line 2805 "grammar.y.pre"
		if ((yyvsp[(1) - (3)].node)->type == TYPE_ANY) {
		    int cmi;
		    unsigned short tp;
		    
		    if ((cmi = lookup_any_class_member((yyvsp[(3) - (3)].string), &tp)) != -1) {
			CREATE_UNARY_OP_1((yyval.node), F_MEMBER, tp, (yyvsp[(1) - (3)].node), 0);
			(yyval.node)->l.number = cmi;
		    } else {
			CREATE_ERROR((yyval.node));
		    }
		} else if (!IS_CLASS((yyvsp[(1) - (3)].node)->type)) {
		    yyerror("Left argument of -> is not a class");
		    CREATE_ERROR((yyval.node));
		} else {
		    CREATE_UNARY_OP_1((yyval.node), F_MEMBER, 0, (yyvsp[(1) - (3)].node), 0);
		    (yyval.node)->l.number = lookup_class_member(CLASS_IDX((yyvsp[(1) - (3)].node)->type),
						       (yyvsp[(3) - (3)].string),
						       &((yyval.node)->type));
		}
		    
		scratch_free((yyvsp[(3) - (3)].string));
            }
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 2921 "grammar.y"
    {
#line 2829 "grammar.y.pre"
                if ((yyvsp[(1) - (6)].node)->type != TYPE_MAPPING && 
		    (yyvsp[(5) - (6)].node)->kind == NODE_NUMBER && (yyvsp[(5) - (6)].node)->v.number < 0)
		    yywarn("A negative constant as the second element of arr[x..y] no longer means indexing from the end.  Use arr[x..<y]");
                (yyval.node) = make_range_node(F_NN_RANGE, (yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node));
            }
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 2929 "grammar.y"
    {
#line 2840 "grammar.y.pre"
                (yyval.node) = make_range_node(F_RN_RANGE, (yyvsp[(1) - (7)].node), (yyvsp[(4) - (7)].node), (yyvsp[(6) - (7)].node));
            }
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 2934 "grammar.y"
    {
#line 2844 "grammar.y.pre"
		if ((yyvsp[(7) - (8)].node)->kind == NODE_NUMBER && (yyvsp[(7) - (8)].node)->v.number <= 1)
		    (yyval.node) = make_range_node(F_RE_RANGE, (yyvsp[(1) - (8)].node), (yyvsp[(4) - (8)].node), 0);
		else
		    (yyval.node) = make_range_node(F_RR_RANGE, (yyvsp[(1) - (8)].node), (yyvsp[(4) - (8)].node), (yyvsp[(7) - (8)].node));
            }
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 2942 "grammar.y"
    {
#line 2851 "grammar.y.pre"
		if ((yyvsp[(6) - (7)].node)->kind == NODE_NUMBER && (yyvsp[(6) - (7)].node)->v.number <= 1)
		    (yyval.node) = make_range_node(F_NE_RANGE, (yyvsp[(1) - (7)].node), (yyvsp[(3) - (7)].node), 0);
		else
		    (yyval.node) = make_range_node(F_NR_RANGE, (yyvsp[(1) - (7)].node), (yyvsp[(3) - (7)].node), (yyvsp[(6) - (7)].node));
            }
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 2950 "grammar.y"
    {
#line 2858 "grammar.y.pre"
                (yyval.node) = make_range_node(F_NE_RANGE, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), 0);
            }
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 2955 "grammar.y"
    {
#line 2862 "grammar.y.pre"
                (yyval.node) = make_range_node(F_RE_RANGE, (yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), 0);
            }
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 2960 "grammar.y"
    {
#line 2866 "grammar.y.pre"
                if (IS_NODE((yyvsp[(1) - (5)].node), NODE_CALL, F_AGGREGATE)
		    && (yyvsp[(4) - (5)].node)->kind == NODE_NUMBER) {
                    int i = (yyvsp[(4) - (5)].node)->v.number;
                    if (i < 1 || i > (yyvsp[(1) - (5)].node)->l.number)
                        yyerror("Illegal index to array constant.");
                    else {
                        parse_node_t *node = (yyvsp[(1) - (5)].node)->r.expr;
                        i = (yyvsp[(1) - (5)].node)->l.number - i;
                        while (i--)
                            node = node->r.expr;
                        (yyval.node) = node->v.expr;
                        break;
                    }
                }
		CREATE_BINARY_OP((yyval.node), F_RINDEX, 0, (yyvsp[(4) - (5)].node), (yyvsp[(1) - (5)].node));
                if (exact_types) {
		    switch((yyvsp[(1) - (5)].node)->type) {
		    case TYPE_MAPPING:
			yyerror("Illegal index for mapping.");
		    case TYPE_ANY:
			(yyval.node)->type = TYPE_ANY;
			break;
		    case TYPE_STRING:
		    case TYPE_BUFFER:
			(yyval.node)->type = TYPE_NUMBER;
			if (!IS_TYPE((yyvsp[(4) - (5)].node)->type,TYPE_NUMBER))
			    type_error("Bad type of index", (yyvsp[(4) - (5)].node)->type);
			break;
			
		    default:
			if ((yyvsp[(1) - (5)].node)->type & TYPE_MOD_ARRAY) {
			    (yyval.node)->type = (yyvsp[(1) - (5)].node)->type & ~TYPE_MOD_ARRAY;
			    if ((yyval.node)->type != TYPE_ANY)
			        (yyval.node) = add_type_check((yyval.node), (yyval.node)->type); 
			    if (!IS_TYPE((yyvsp[(4) - (5)].node)->type,TYPE_NUMBER))
				type_error("Bad type of index", (yyvsp[(4) - (5)].node)->type);
			} else {
			    type_error("Value indexed has a bad type ", (yyvsp[(1) - (5)].node)->type);
			    (yyval.node)->type = TYPE_ANY;
			}
		    }
		} else (yyval.node)->type = TYPE_ANY;
            }
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 3006 "grammar.y"
    {
#line 2911 "grammar.y.pre"
		/* Something stupid like ({ 1, 2, 3 })[1]; we take the
		 * time to optimize this because people who don't understand
		 * the preprocessor often write things like:
		 *
		 * #define MY_ARRAY ({ "foo", "bar", "bazz" })
		 * ...
		 * ... MY_ARRAY[1] ...
		 *
		 * which of course expands to the above.
		 */
                if (IS_NODE((yyvsp[(1) - (4)].node), NODE_CALL, F_AGGREGATE) && (yyvsp[(3) - (4)].node)->kind == NODE_NUMBER) {
                    int i = (yyvsp[(3) - (4)].node)->v.number;
                    if (i < 0 || i >= (yyvsp[(1) - (4)].node)->l.number)
                        yyerror("Illegal index to array constant.");
                    else {
                        parse_node_t *node = (yyvsp[(1) - (4)].node)->r.expr;
                        while (i--)
                            node = node->r.expr;
                        (yyval.node) = node->v.expr;
                        break;
                    }
                }
                if ((yyvsp[(3) - (4)].node)->kind == NODE_NUMBER && (yyvsp[(3) - (4)].node)->v.number < 0)
		    yywarn("A negative constant in arr[x] no longer means indexing from the end.  Use arr[<x]");
                CREATE_BINARY_OP((yyval.node), F_INDEX, 0, (yyvsp[(3) - (4)].node), (yyvsp[(1) - (4)].node));
                if (exact_types) {
		    switch((yyvsp[(1) - (4)].node)->type) {
		    case TYPE_MAPPING:
		    case TYPE_ANY:
			(yyval.node)->type = TYPE_ANY;
			break;
		    case TYPE_STRING:
		    case TYPE_BUFFER:
			(yyval.node)->type = TYPE_NUMBER;
			if (!IS_TYPE((yyvsp[(3) - (4)].node)->type,TYPE_NUMBER))
			    type_error("Bad type of index", (yyvsp[(3) - (4)].node)->type);
			break;
			
		    default:
			if ((yyvsp[(1) - (4)].node)->type & TYPE_MOD_ARRAY) {
			    (yyval.node)->type = (yyvsp[(1) - (4)].node)->type & ~TYPE_MOD_ARRAY;
			    if((yyval.node)->type != TYPE_ANY)
			        (yyval.node) = add_type_check((yyval.node), (yyval.node)->type);
			    if (!IS_TYPE((yyvsp[(3) - (4)].node)->type,TYPE_NUMBER))
				type_error("Bad type of index", (yyvsp[(3) - (4)].node)->type);
			} else {
			    type_error("Value indexed has a bad type ", (yyvsp[(1) - (4)].node)->type);
			    (yyval.node)->type = TYPE_ANY;
			}
                    }
                } else (yyval.node)->type = TYPE_ANY;
            }
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 3062 "grammar.y"
    {
#line 2968 "grammar.y.pre"
		(yyval.node) = (yyvsp[(2) - (3)].node);
	    }
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 3069 "grammar.y"
    {
#line 2976 "grammar.y.pre"
	        if ((yyvsp[(1) - (1)].number) != TYPE_FUNCTION) yyerror("Reserved type name unexpected.");
		(yyval.func_block).num_local = current_number_of_locals;
		(yyval.func_block).max_num_locals = max_num_locals;
		(yyval.func_block).context = context;
		(yyval.func_block).save_current_type = current_type;
		(yyval.func_block).save_exact_types = exact_types;
	        if (type_of_locals_ptr + max_num_locals + CFG_MAX_LOCAL_VARIABLES >= &type_of_locals[type_of_locals_size])
		    reallocate_locals();
		deactivate_current_locals();
		locals_ptr += current_number_of_locals;
		type_of_locals_ptr += max_num_locals;
		max_num_locals = current_number_of_locals = 0;
		push_function_context();
		current_function_context->num_parameters = -1;
		exact_types = TYPE_ANY;
		context = 0;
            }
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 3089 "grammar.y"
    {
#line 2995 "grammar.y.pre"
		if ((yyvsp[(4) - (6)].argument).flags & ARG_IS_VARARGS) {
		    yyerror("Anonymous varargs functions aren't implemented");
		}
		if (!(yyvsp[(6) - (6)].decl).node) {
		    CREATE_RETURN((yyvsp[(6) - (6)].decl).node, 0);
		} else if ((yyvsp[(6) - (6)].decl).node->kind != NODE_RETURN &&
			   ((yyvsp[(6) - (6)].decl).node->kind != NODE_TWO_VALUES || (yyvsp[(6) - (6)].decl).node->r.expr->kind != NODE_RETURN)) {
		    parse_node_t *replacement;
		    CREATE_STATEMENTS(replacement, (yyvsp[(6) - (6)].decl).node, 0);
		    CREATE_RETURN(replacement->r.expr, 0);
		    (yyvsp[(6) - (6)].decl).node = replacement;
		}
		
		(yyval.node) = new_node();
		(yyval.node)->kind = NODE_ANON_FUNC;
		(yyval.node)->type = TYPE_FUNCTION;
		(yyval.node)->l.number = (max_num_locals - (yyvsp[(4) - (6)].argument).num_arg);
		(yyval.node)->r.expr = (yyvsp[(6) - (6)].decl).node;
		(yyval.node)->v.number = (yyvsp[(4) - (6)].argument).num_arg;
		if (current_function_context->bindable)
		    (yyval.node)->v.number |= 0x10000;
		free_all_local_names(1);
		
		current_number_of_locals = (yyvsp[(2) - (6)].func_block).num_local;
		max_num_locals = (yyvsp[(2) - (6)].func_block).max_num_locals;
		context = (yyvsp[(2) - (6)].func_block).context;
		current_type = (yyvsp[(2) - (6)].func_block).save_current_type;
		exact_types = (yyvsp[(2) - (6)].func_block).save_exact_types;
		pop_function_context();
		
		locals_ptr -= current_number_of_locals;
		type_of_locals_ptr -= max_num_locals;
		reactivate_current_locals();
	    }
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 3126 "grammar.y"
    {
#line 3035 "grammar.y.pre"
#ifdef WOMBLES
	        if(*(outp-2) != ':')
		  yyerror("End of functional not found");
#endif
		(yyval.node) = new_node();
		(yyval.node)->kind = NODE_FUNCTION_CONSTRUCTOR;
		(yyval.node)->type = TYPE_FUNCTION;
		(yyval.node)->r.expr = 0;
		switch ((yyvsp[(1) - (3)].number) & 0xff) {
		case FP_L_VAR:
		    yyerror("Illegal to use local variable in a functional.");
		    CREATE_NUMBER((yyval.node)->l.expr, 0);
		    (yyval.node)->l.expr->r.expr = 0;
		    (yyval.node)->l.expr->l.expr = 0;
		    (yyval.node)->v.number = FP_FUNCTIONAL;
		    break;
		case FP_G_VAR:
		    CREATE_OPCODE_1((yyval.node)->l.expr, F_GLOBAL, 0, (yyvsp[(1) - (3)].number) >> 8);
		    (yyval.node)->v.number = FP_FUNCTIONAL | FP_NOT_BINDABLE;
		    if (VAR_TEMP((yyval.node)->l.expr->l.number)->type & DECL_HIDDEN) {
			char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Illegal to use private variable '");
			p = strput(p, end, VAR_TEMP((yyval.node)->l.expr->l.number)->name);
			p = strput(p, end, "'");
			yyerror(buf);
		    }
		    break;
		default:
		    (yyval.node)->v.number = (yyvsp[(1) - (3)].number);
		    break;
		}
	    }
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 3164 "grammar.y"
    {
#line 3072 "grammar.y.pre"
#ifdef WOMBLES
	        if(*(outp-2) != ':')
		  yyerror("End of functional not found");
#endif
		(yyval.node) = new_node();
		(yyval.node)->kind = NODE_FUNCTION_CONSTRUCTOR;
		(yyval.node)->type = TYPE_FUNCTION;
		(yyval.node)->v.number = (yyvsp[(1) - (5)].number);
		(yyval.node)->r.expr = (yyvsp[(3) - (5)].node);
		
		switch ((yyvsp[(1) - (5)].number) & 0xff) {
		case FP_EFUN: {
		    int *argp;
		    int f = (yyvsp[(1) - (5)].number) >>8;
		    int num = (yyvsp[(3) - (5)].node)->kind;
		    int max_arg = predefs[f].max_args;
		    if(f!=-1){
		      if (num > max_arg && max_arg != -1) {
			parse_node_t *pn = (yyvsp[(3) - (5)].node);
			
			while (pn) {
			    if (pn->type & 1) break;
			    pn = pn->r.expr;
			}
			
			if (!pn) {
			    char bff[256];
			    char *end = EndOf(bff);
			    char *p;
			    
			    p = strput(bff, end, "Too many arguments to ");
			    p = strput(p, end, predefs[f].word);
			    yyerror(bff);
			}
		      } else if (max_arg != -1 && exact_types) {
			/*
			 * Now check all types of arguments to efuns.
			 */
			int i, argn, tmp;
			parse_node_t *enode = (yyvsp[(3) - (5)].node);
			argp = &efun_arg_types[predefs[f].arg_index];
			
			for (argn = 0; argn < num; argn++) {
			    if (enode->type & 1) break;
			    
			    tmp = enode->v.expr->type;
			    for (i=0; !compatible_types(tmp, argp[i])
				 && argp[i] != 0; i++)
				;
			    if (argp[i] == 0) {
				char buf[256];
				char *end = EndOf(buf);
				char *p;

				p = strput(buf, end, "Bad argument ");
				p = strput_int(p, end, argn+1);
				p = strput(p, end, " to efun ");
				p = strput(p, end, predefs[f].word);
				p = strput(p, end, "()");
				yyerror(buf);
			    } else {
				/* this little section necessary b/c in the
				   case float | int we dont want to do
				   promoting. */
				if (tmp == TYPE_NUMBER && argp[i] == TYPE_REAL) {
				    for (i++; argp[i] && argp[i] != TYPE_NUMBER; i++)
					;
				    if (!argp[i])
					enode->v.expr = promote_to_float(enode->v.expr);
				}
				if (tmp == TYPE_REAL && argp[i] == TYPE_NUMBER) {
				    for (i++; argp[i] && argp[i] != TYPE_REAL; i++)
					;
				    if (!argp[i])
					enode->v.expr = promote_to_int(enode->v.expr);
				}
			    }
			    while (argp[i] != 0)
				i++;
			    argp += i + 1;
			    enode = enode->r.expr;
			}
		      }
		    }
		    break;
		}
		case FP_L_VAR:
		case FP_G_VAR:
		    yyerror("Can't give parameters to functional.");
		    break;
		}
	    }
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 3259 "grammar.y"
    {
#line 3166 "grammar.y.pre"
#ifdef WOMBLES
	         if(*(outp-2) != ':')
		   yyerror("End of functional not found");
#endif
		 if (current_function_context->num_locals)
		     yyerror("Illegal to use local variable in functional.");
		 if (current_function_context->values_list->r.expr)
		     current_function_context->values_list->r.expr->kind = current_function_context->values_list->kind;
		 
		 (yyval.node) = new_node();
		 (yyval.node)->kind = NODE_FUNCTION_CONSTRUCTOR;
		 (yyval.node)->type = TYPE_FUNCTION;
		 (yyval.node)->l.expr = (yyvsp[(2) - (4)].node);
		 if ((yyvsp[(2) - (4)].node)->kind == NODE_STRING)
		     yywarn("Function pointer returning string constant is NOT a function call");
		 (yyval.node)->r.expr = current_function_context->values_list->r.expr;
		 (yyval.node)->v.number = FP_FUNCTIONAL + current_function_context->bindable
		     + (current_function_context->num_parameters << 8);
		 pop_function_context();
             }
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 3282 "grammar.y"
    {
#line 3188 "grammar.y.pre"
#ifdef WOMBLES
	        if(*(outp-2) != ']')
		  yyerror("End of mapping not found");
#endif
		CREATE_CALL((yyval.node), F_AGGREGATE_ASSOC, TYPE_MAPPING, (yyvsp[(2) - (4)].node));
	    }
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 3291 "grammar.y"
    {
#line 3196 "grammar.y.pre"
#ifdef WOMBLES
	        if(*(outp-2) != '}')
		  yyerror("End of array not found");
#endif  
		CREATE_CALL((yyval.node), F_AGGREGATE, TYPE_ANY | TYPE_MOD_ARRAY, (yyvsp[(2) - (4)].node));
	    }
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 3303 "grammar.y"
    {
#line 3207 "grammar.y.pre"
		(yyval.node) = (yyvsp[(1) - (1)].decl).node;
	    }
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 3308 "grammar.y"
    {
#line 3211 "grammar.y.pre"
		(yyval.node) = insert_pop_value((yyvsp[(2) - (3)].node));
	    }
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 3316 "grammar.y"
    {
#line 3218 "grammar.y.pre"
		(yyval.number) = context;
		context = SPECIAL_CONTEXT;
	    }
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 3322 "grammar.y"
    {
#line 3223 "grammar.y.pre"
		CREATE_CATCH((yyval.node), (yyvsp[(3) - (3)].node));
		context = (yyvsp[(2) - (3)].number);
	    }
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 3331 "grammar.y"
    {
#line 3232 "grammar.y.pre"
		(yyval.node) = new_node_no_line();
		lpc_tree_form((yyvsp[(2) - (2)].decl).node, (yyval.node));
	    }
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 3338 "grammar.y"
    {
#line 3238 "grammar.y.pre"
		(yyval.node) = new_node_no_line();
		lpc_tree_form((yyvsp[(3) - (4)].node), (yyval.node));
	    }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 3347 "grammar.y"
    {
#line 3247 "grammar.y.pre"
		int p = (yyvsp[(6) - (7)].node)->v.number;
		CREATE_LVALUE_EFUN((yyval.node), TYPE_NUMBER, (yyvsp[(6) - (7)].node));
		CREATE_BINARY_OP_1((yyval.node)->l.expr, F_SSCANF, 0, (yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), p);
	    }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 3357 "grammar.y"
    {
#line 3256 "grammar.y.pre"
		int p = (yyvsp[(8) - (9)].node)->v.number;
		CREATE_LVALUE_EFUN((yyval.node), TYPE_NUMBER, (yyvsp[(8) - (9)].node));
		CREATE_TERNARY_OP_1((yyval.node)->l.expr, F_PARSE_COMMAND, 0, 
				    (yyvsp[(3) - (9)].node), (yyvsp[(5) - (9)].node), (yyvsp[(7) - (9)].node), p);
	    }
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 3368 "grammar.y"
    {
#line 3266 "grammar.y.pre"
		(yyval.number) = context;
		context = SPECIAL_CONTEXT;
	    }
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 3374 "grammar.y"
    {
#line 3271 "grammar.y.pre"
		CREATE_TIME_EXPRESSION((yyval.node), (yyvsp[(3) - (3)].node));
		context = (yyvsp[(2) - (3)].number);
	    }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 3383 "grammar.y"
    {
#line 3279 "grammar.y.pre"
	        (yyval.node) = new_node_no_line();
		(yyval.node)->r.expr = 0;
	        (yyval.node)->v.number = 0;
	    }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 3390 "grammar.y"
    {
#line 3285 "grammar.y.pre"
		parse_node_t *insert;
		
		(yyval.node) = (yyvsp[(3) - (3)].node);
		insert = new_node_no_line();
		insert->r.expr = (yyvsp[(3) - (3)].node)->r.expr;
		insert->l.expr = (yyvsp[(2) - (3)].node);
		(yyvsp[(3) - (3)].node)->r.expr = insert;
		(yyval.node)->v.number++;
	    }
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 3405 "grammar.y"
    {
#line 3299 "grammar.y.pre"
		CREATE_STRING((yyval.node), (yyvsp[(1) - (1)].string));
		scratch_free((yyvsp[(1) - (1)].string));
	    }
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 3415 "grammar.y"
    {
#line 3308 "grammar.y.pre"
		(yyval.string) = (yyvsp[(2) - (3)].string);
	    }
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 3420 "grammar.y"
    {
#line 3312 "grammar.y.pre"
		(yyval.string) = scratch_join((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
	    }
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 3429 "grammar.y"
    {
#line 3320 "grammar.y.pre"
		(yyval.string) = scratch_join((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].string));
	    }
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 3436 "grammar.y"
    {
#line 3326 "grammar.y.pre"
	(yyval.node) = new_node();
	(yyval.node)->l.expr = (parse_node_t *)(yyvsp[(1) - (3)].string);
	(yyval.node)->v.expr = (yyvsp[(3) - (3)].node);
	(yyval.node)->r.expr = 0;
    }
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 3447 "grammar.y"
    {
#line 3336 "grammar.y.pre"
	(yyval.node) = 0;
    }
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 3452 "grammar.y"
    {
#line 3340 "grammar.y.pre"
	(yyval.node) = (yyvsp[(3) - (3)].node);
	(yyval.node)->r.expr = (yyvsp[(1) - (3)].node);
    }
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 3462 "grammar.y"
    {
#line 3349 "grammar.y.pre"
		(yyval.number) = context;
		(yyvsp[(2) - (2)].number) = num_refs;
		context |= ARG_LIST; 
	    }
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 3469 "grammar.y"
    {
#line 3355 "grammar.y.pre"
		context = (yyvsp[(3) - (5)].number);
		(yyval.node) = validate_efun_call((yyvsp[(1) - (5)].number),(yyvsp[(4) - (5)].node));
		(yyval.node) = check_refs(num_refs - (yyvsp[(2) - (5)].number), (yyvsp[(4) - (5)].node), (yyval.node));
		num_refs = (yyvsp[(2) - (5)].number);
	    }
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 3477 "grammar.y"
    {
#line 3362 "grammar.y.pre"
		(yyval.number) = context;
		(yyvsp[(2) - (2)].number) = num_refs;
		context |= ARG_LIST;
	    }
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 3484 "grammar.y"
    {
#line 3368 "grammar.y.pre"
		ident_hash_elem_t *ihe;
		int f;

		context = (yyvsp[(3) - (5)].number);
		ihe = lookup_ident("clone_object");

		if ((f = ihe->dn.simul_num) != -1) {
		    (yyval.node) = (yyvsp[(4) - (5)].node);
		    (yyval.node)->kind = NODE_CALL_1;
		    (yyval.node)->v.number = F_SIMUL_EFUN;
		    (yyval.node)->l.number = f;
		    (yyval.node)->type = (SIMUL(f)->type) & ~DECL_MODS;
		} else {
		    (yyval.node) = validate_efun_call(lookup_predef("clone_object"), (yyvsp[(4) - (5)].node));
#ifdef CAST_CALL_OTHERS
		    (yyval.node)->type = TYPE_UNKNOWN;
#else
		    (yyval.node)->type = TYPE_ANY;
#endif		  
		}
		(yyval.node) = check_refs(num_refs - (yyvsp[(2) - (5)].number), (yyvsp[(4) - (5)].node), (yyval.node));
		num_refs = (yyvsp[(2) - (5)].number);
            }
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 3510 "grammar.y"
    {
#line 3393 "grammar.y.pre"
		parse_node_t *node;
		
		if ((yyvsp[(4) - (6)].ihe)->dn.class_num == -1) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Undefined class '");
		    p = strput(p, end, (yyvsp[(4) - (6)].ihe)->name);
		    p = strput(p, end, "'");
		    yyerror(buf);
		    CREATE_ERROR((yyval.node));
		    node = (yyvsp[(5) - (6)].node);
		    while (node) {
			scratch_free((char *)node->l.expr);
			node = node->r.expr;
		    }
		} else {
		    int type = (yyvsp[(4) - (6)].ihe)->dn.class_num | TYPE_MOD_CLASS;
		    
		    if ((node = (yyvsp[(5) - (6)].node))) {
			CREATE_TWO_VALUES((yyval.node), type, 0, 0);
			(yyval.node)->l.expr = reorder_class_values((yyvsp[(4) - (6)].ihe)->dn.class_num,
							node);
			CREATE_OPCODE_1((yyval.node)->r.expr, F_NEW_CLASS,
					type, (yyvsp[(4) - (6)].ihe)->dn.class_num);
			
		    } else {
			CREATE_OPCODE_1((yyval.node), F_NEW_EMPTY_CLASS,
					type, (yyvsp[(4) - (6)].ihe)->dn.class_num);
		    }
		}
            }
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 3546 "grammar.y"
    {
#line 3428 "grammar.y.pre"
		parse_node_t *node;
		char buf[256];
		char *end = EndOf(buf);
		char *p;

		p = strput(buf, end, "Undefined class '");
		p = strput(p, end, (yyvsp[(4) - (6)].string));
		p = strput(p, end, "'");
		yyerror(buf);
		CREATE_ERROR((yyval.node));
		node = (yyvsp[(5) - (6)].node);
		while (node) {
		    scratch_free((char *)node->l.expr);
		    node = node->r.expr;
		}
	    }
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 3565 "grammar.y"
    {
#line 3446 "grammar.y.pre"
		(yyval.number) = context;
		(yyvsp[(2) - (2)].number) = num_refs;
		context |= ARG_LIST;
	    }
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 3572 "grammar.y"
    {
#line 3452 "grammar.y.pre"
		int f;
		
		context = (yyvsp[(3) - (5)].number);
		(yyval.node) = (yyvsp[(4) - (5)].node);
		if ((f = (yyvsp[(1) - (5)].ihe)->dn.function_num) != -1) {
		    if (current_function_context)
			current_function_context->bindable = FP_NOT_BINDABLE;
		    
		    (yyval.node)->kind = NODE_CALL_1;
		    (yyval.node)->v.number = F_CALL_FUNCTION_BY_ADDRESS;
		    (yyval.node)->l.number = f;
		    (yyval.node)->type = validate_function_call(f, (yyvsp[(4) - (5)].node)->r.expr);
		} else if ((f=(yyvsp[(1) - (5)].ihe)->dn.simul_num) != -1) {
		    (yyval.node)->kind = NODE_CALL_1;
		    (yyval.node)->v.number = F_SIMUL_EFUN;
		    (yyval.node)->l.number = f;
		    (yyval.node)->type = (SIMUL(f)->type) & ~DECL_MODS;
		} else if ((f=(yyvsp[(1) - (5)].ihe)->dn.efun_num) != -1) {
		    (yyval.node) = validate_efun_call(f, (yyvsp[(4) - (5)].node));
		} else {
		    /* This here is a really nasty case that only occurs with
		     * exact_types off.  The user has done something gross like:
		     *
		     * func() { int f; f(); } // if f was prototyped we wouldn't
		     * f() { }                // need this case
		     *
		     * Don't complain, just grok it.
		     */
		    
		    if (current_function_context)
			current_function_context->bindable = FP_NOT_BINDABLE;
		    
		    f = define_new_function((yyvsp[(1) - (5)].ihe)->name, 0, 0, 
					    DECL_PUBLIC|FUNC_UNDEFINED, TYPE_ANY);
		    (yyval.node)->kind = NODE_CALL_1;
		    (yyval.node)->v.number = F_CALL_FUNCTION_BY_ADDRESS;
		    (yyval.node)->l.number = f;
		    (yyval.node)->type = TYPE_ANY; /* just a guess */
		    if (exact_types) {
			char buf[256];
			char *end = EndOf(buf);
			char *p;
			const char *n = (yyvsp[(1) - (5)].ihe)->name;
			if (*n == ':') n++;
			/* prevent some errors; by making it look like an
			 * inherited function we prevent redeclaration errors
			 * if it shows up later
			 */
			
			FUNCTION_FLAGS(f) &= ~FUNC_UNDEFINED;
			FUNCTION_FLAGS(f) |= (FUNC_INHERITED | FUNC_VARARGS);
			p = strput(buf, end, "Undefined function ");
			p = strput(p, end, n);
			yyerror(buf);
		    }
		}
		(yyval.node) = check_refs(num_refs - (yyvsp[(2) - (5)].number), (yyvsp[(4) - (5)].node), (yyval.node));
		num_refs = (yyvsp[(2) - (5)].number);
	    }
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 3634 "grammar.y"
    {
#line 3513 "grammar.y.pre"
		(yyval.number) = context;
		(yyvsp[(2) - (2)].number) = num_refs;
		context |= ARG_LIST;
	    }
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 3641 "grammar.y"
    {
#line 3519 "grammar.y.pre"
	      char *name = (yyvsp[(1) - (5)].string);

	      context = (yyvsp[(3) - (5)].number);
	      (yyval.node) = (yyvsp[(4) - (5)].node);
	      
	      if (current_function_context)
		  current_function_context->bindable = FP_NOT_BINDABLE;

	      if (*name == ':') {
		  int f;
		  
		  if ((f = arrange_call_inherited(name + 1, (yyval.node))) != -1)
		      /* Can't do this; f may not be the correct function
			 entry.  It might be overloaded.
			 
		      validate_function_call(f, $$->r.expr)
		      */
		      ;
	      } else {
		  int f;
		  ident_hash_elem_t *ihe;
		  
		  f = (ihe = lookup_ident(name)) ? ihe->dn.function_num : -1;
		  (yyval.node)->kind = NODE_CALL_1;
		  (yyval.node)->v.number = F_CALL_FUNCTION_BY_ADDRESS;
		  if (f!=-1) {
		      /* The only way this can happen is if function_name
		       * below made the function name.  The lexer would
		       * return L_DEFINED_NAME instead.
		       */
		      (yyval.node)->type = validate_function_call(f, (yyvsp[(4) - (5)].node)->r.expr);
		  } else {
		      f = define_new_function(name, 0, 0, 
					      DECL_PUBLIC|FUNC_UNDEFINED, TYPE_ANY);
		  }
		  (yyval.node)->l.number = f;
		  /*
		   * Check if this function has been defined.
		   * But, don't complain yet about functions defined
		   * by inheritance.
		   */
		  if (exact_types && (FUNCTION_FLAGS(f) & FUNC_UNDEFINED)) {
		      char buf[256];
		      char *end = EndOf(buf);
		      char *p;
		      char *n = (yyvsp[(1) - (5)].string);
		      if (*n == ':') n++;
		      /* prevent some errors */
		      FUNCTION_FLAGS(f) &= ~FUNC_UNDEFINED;
		      FUNCTION_FLAGS(f) |= (FUNC_INHERITED | FUNC_VARARGS);
		      p = strput(buf, end, "Undefined function ");
		      p = strput(p, end, n);
		      yyerror(buf);
		  }
		  if (!(FUNCTION_FLAGS(f) & FUNC_UNDEFINED))
		      (yyval.node)->type = FUNCTION_DEF(f)->type;
		  else
		      (yyval.node)->type = TYPE_ANY;  /* Just a guess */
	      }
	      (yyval.node) = check_refs(num_refs - (yyvsp[(2) - (5)].number), (yyvsp[(4) - (5)].node), (yyval.node));
	      num_refs = (yyvsp[(2) - (5)].number);
	      scratch_free(name);
	  }
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 3707 "grammar.y"
    {
#line 3584 "grammar.y.pre"
		(yyval.number) = context;
		(yyvsp[(4) - (4)].number) = num_refs;
		context |= ARG_LIST;
	    }
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 3714 "grammar.y"
    {
#line 3590 "grammar.y.pre"
		ident_hash_elem_t *ihe;
		int f;
		parse_node_t *pn1, *pn2;
		
		(yyvsp[(6) - (7)].node)->v.number += 2;

		pn1 = new_node_no_line();
		pn1->type = 0;
		pn1->v.expr = (yyvsp[(1) - (7)].node);
		pn1->kind = (yyvsp[(6) - (7)].node)->v.number;
		
		pn2 = new_node_no_line();
		pn2->type = 0;
		CREATE_STRING(pn2->v.expr, (yyvsp[(3) - (7)].string));
		scratch_free((yyvsp[(3) - (7)].string));
		
		/* insert the two nodes */
		pn2->r.expr = (yyvsp[(6) - (7)].node)->r.expr;
		pn1->r.expr = pn2;
		(yyvsp[(6) - (7)].node)->r.expr = pn1;
		
		if (!(yyvsp[(6) - (7)].node)->l.expr) (yyvsp[(6) - (7)].node)->l.expr = pn2;
		    
		context = (yyvsp[(5) - (7)].number);
		ihe = lookup_ident("call_other");

		if ((f = ihe->dn.simul_num) != -1) {
		    (yyval.node) = (yyvsp[(6) - (7)].node);
		    (yyval.node)->kind = NODE_CALL_1;
		    (yyval.node)->v.number = F_SIMUL_EFUN;
		    (yyval.node)->l.number = f;
		    (yyval.node)->type = (SIMUL(f)->type) & ~DECL_MODS;
		} else {
		    (yyval.node) = validate_efun_call(arrow_efun, (yyvsp[(6) - (7)].node));
#ifdef CAST_CALL_OTHERS
		    (yyval.node)->type = TYPE_UNKNOWN;
#else
		    (yyval.node)->type = TYPE_ANY;
#endif		  
		}
		(yyval.node) = check_refs(num_refs - (yyvsp[(4) - (7)].number), (yyvsp[(6) - (7)].node), (yyval.node));
		num_refs = (yyvsp[(4) - (7)].number);
	    }
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 3760 "grammar.y"
    {
#line 3635 "grammar.y.pre"
		(yyval.number) = context;
		(yyvsp[(5) - (5)].number) = num_refs;
		context |= ARG_LIST;
	    }
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 3767 "grammar.y"
    {
#line 3641 "grammar.y.pre"
	        parse_node_t *expr;

		context = (yyvsp[(6) - (8)].number);
		(yyval.node) = (yyvsp[(7) - (8)].node);
		(yyval.node)->kind = NODE_EFUN;
		(yyval.node)->l.number = (yyval.node)->v.number + 1;
		(yyval.node)->v.number = predefs[evaluate_efun].token;
#ifdef CAST_CALL_OTHERS
		(yyval.node)->type = TYPE_UNKNOWN;
#else
		(yyval.node)->type = TYPE_ANY;
#endif
		expr = new_node_no_line();
		expr->type = 0;
		expr->v.expr = (yyvsp[(3) - (8)].node);
		expr->r.expr = (yyval.node)->r.expr;
		(yyval.node)->r.expr = expr;
		(yyval.node) = check_refs(num_refs - (yyvsp[(5) - (8)].number), (yyvsp[(7) - (8)].node), (yyval.node));
		num_refs = (yyvsp[(5) - (8)].number);
	    }
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 3791 "grammar.y"
    {
#line 3664 "grammar.y.pre"
	svalue_t *res;
	ident_hash_elem_t *ihe;

	(yyval.number) = (ihe = lookup_ident((yyvsp[(3) - (3)].string))) ? ihe->dn.efun_num : -1;
	if ((yyval.number) == -1) {
	    char buf[256];
	    char *end = EndOf(buf);
	    char *p;
	    
	    p = strput(buf, end, "Unknown efun: ");
	    p = strput(p, end, (yyvsp[(3) - (3)].string));
	    yyerror(buf);
	} else {
	    push_malloced_string(the_file_name(current_file));
	    share_and_push_string((yyvsp[(3) - (3)].string));
	    push_malloced_string(add_slash(main_file_name()));
	    res = safe_apply_master_ob(APPLY_VALID_OVERRIDE, 3);
	    if (!MASTER_APPROVED(res)) {
		yyerror("Invalid simulated efunction override");
		(yyval.number) = -1;
	    }
	}
	scratch_free((yyvsp[(3) - (3)].string));
      }
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 3817 "grammar.y"
    {
#line 3689 "grammar.y.pre"
	svalue_t *res;
	
	push_malloced_string(the_file_name(current_file));
	push_constant_string("new");
	push_malloced_string(add_slash(main_file_name()));
	res = safe_apply_master_ob(APPLY_VALID_OVERRIDE, 3);
	if (!MASTER_APPROVED(res)) {
	    yyerror("Invalid simulated efunction override");
	    (yyval.number) = -1;
	} else (yyval.number) = new_efun;
      }
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 3835 "grammar.y"
    {
#line 3706 "grammar.y.pre"
		int l = strlen((yyvsp[(2) - (2)].string)) + 1;
		char *p;
		/* here we be a bit cute.  we put a : on the front so we
		 * don't have to strchr for it.  Here we do:
		 * "name" -> ":::name"
		 */
		(yyval.string) = scratch_realloc((yyvsp[(2) - (2)].string), l + 3);
		p = (yyval.string) + l;
		while (p--,l--)
		    *(p+3) = *p;
		strncpy((yyval.string), ":::", 3);
	    }
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 3850 "grammar.y"
    {
#line 3720 "grammar.y.pre"
		int z, l = strlen((yyvsp[(3) - (3)].string)) + 1;
		char *p;
		/* <type> and "name" -> ":type::name" */
		z = strlen(compiler_type_names[(yyvsp[(1) - (3)].number)]) + 3; /* length of :type:: */
		(yyval.string) = scratch_realloc((yyvsp[(3) - (3)].string), l + z);
		p = (yyval.string) + l;
		while (p--,l--)
		    *(p+z) = *p;
		(yyval.string)[0] = ':';
		strncpy((yyval.string) + 1, compiler_type_names[(yyvsp[(1) - (3)].number)], z - 3);
		(yyval.string)[z-2] = ':';
		(yyval.string)[z-1] = ':';
	    }
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 3866 "grammar.y"
    {
#line 3735 "grammar.y.pre"
		int l = strlen((yyvsp[(1) - (3)].string));
		/* "ob" and "name" -> ":ob::name" */
		(yyval.string) = scratch_alloc(l + strlen((yyvsp[(3) - (3)].string)) + 4);
		*((yyval.string)) = ':';
		strcpy((yyval.string) + 1, (yyvsp[(1) - (3)].string));
		strcpy((yyval.string) + l + 1, "::");
		strcpy((yyval.string) + l + 3, (yyvsp[(3) - (3)].string));
		scratch_free((yyvsp[(1) - (3)].string));
		scratch_free((yyvsp[(3) - (3)].string));
	    }
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 3882 "grammar.y"
    {
#line 3750 "grammar.y.pre"
		/* x != 0 -> x */
		if (IS_NODE((yyvsp[(3) - (6)].node), NODE_BINARY_OP, F_NE)) {
		    if (IS_NODE((yyvsp[(3) - (6)].node)->r.expr, NODE_NUMBER, 0))
			(yyvsp[(3) - (6)].node) = (yyvsp[(3) - (6)].node)->l.expr;
		    else if (IS_NODE((yyvsp[(3) - (6)].node)->l.expr, NODE_NUMBER, 0))
			     (yyvsp[(3) - (6)].node) = (yyvsp[(3) - (6)].node)->r.expr;
		}

		/* TODO: should optimize if (0), if (1) here.  
		 * Also generalize this.
		 */

		if ((yyvsp[(5) - (6)].node) == 0) {
		    if ((yyvsp[(6) - (6)].node) == 0) {
			/* if (x) ; -> x; */
			(yyval.node) = pop_value((yyvsp[(3) - (6)].node));
			break;
		    } else {
			/* if (x) {} else y; -> if (!x) y; */
			parse_node_t *repl;
			
			CREATE_UNARY_OP(repl, F_NOT, TYPE_NUMBER, (yyvsp[(3) - (6)].node));
			(yyvsp[(3) - (6)].node) = repl;
			(yyvsp[(5) - (6)].node) = (yyvsp[(6) - (6)].node);
			(yyvsp[(6) - (6)].node) = 0;
		    }
		}
		CREATE_IF((yyval.node), (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].node));
	    }
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 3917 "grammar.y"
    {
#line 3784 "grammar.y.pre"
		(yyval.node) = 0;
	    }
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 3922 "grammar.y"
    {
#line 3788 "grammar.y.pre"
		(yyval.node) = (yyvsp[(2) - (2)].node);
            }
    break;



/* Line 1806 of yacc.c  */
#line 6797 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 3927 "grammar.y"



#line 3793 "grammar.y.pre"

