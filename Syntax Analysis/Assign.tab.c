/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "Assign.y"
 

   /* Definition section */
  #include<stdio.h> 
   #include<stdlib.h> 

extern FILE *fp;

#line 80 "Assign.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
    NUMBER = 258,                  /* NUMBER  */
    Identifier = 259,              /* Identifier  */
    type = 260,                    /* type  */
    LE = 261,                      /* LE  */
    GE = 262,                      /* GE  */
    NE = 263,                      /* NE  */
    EQ = 264,                      /* EQ  */
    GT = 265,                      /* GT  */
    LT = 266,                      /* LT  */
    While = 267,                   /* While  */
    Public = 268,                  /* Public  */
    Static = 269,                  /* Static  */
    Protected = 270,               /* Protected  */
    If = 271,                      /* If  */
    Break = 272,                   /* Break  */
    Return = 273,                  /* Return  */
    Else = 274,                    /* Else  */
    Elseif = 275,                  /* Elseif  */
    For = 276,                     /* For  */
    Singlecmnt = 277,              /* Singlecmnt  */
    Multicmnt = 278,               /* Multicmnt  */
    Print = 279,                   /* Print  */
    Do = 280,                      /* Do  */
    Switch = 281,                  /* Switch  */
    stringconst = 282,             /* stringconst  */
    Case = 283,                    /* Case  */
    Default = 284                  /* Default  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUMBER = 3,                     /* NUMBER  */
  YYSYMBOL_Identifier = 4,                 /* Identifier  */
  YYSYMBOL_type = 5,                       /* type  */
  YYSYMBOL_LE = 6,                         /* LE  */
  YYSYMBOL_GE = 7,                         /* GE  */
  YYSYMBOL_NE = 8,                         /* NE  */
  YYSYMBOL_EQ = 9,                         /* EQ  */
  YYSYMBOL_GT = 10,                        /* GT  */
  YYSYMBOL_LT = 11,                        /* LT  */
  YYSYMBOL_While = 12,                     /* While  */
  YYSYMBOL_Public = 13,                    /* Public  */
  YYSYMBOL_Static = 14,                    /* Static  */
  YYSYMBOL_Protected = 15,                 /* Protected  */
  YYSYMBOL_If = 16,                        /* If  */
  YYSYMBOL_Break = 17,                     /* Break  */
  YYSYMBOL_Return = 18,                    /* Return  */
  YYSYMBOL_Else = 19,                      /* Else  */
  YYSYMBOL_Elseif = 20,                    /* Elseif  */
  YYSYMBOL_For = 21,                       /* For  */
  YYSYMBOL_Singlecmnt = 22,                /* Singlecmnt  */
  YYSYMBOL_Multicmnt = 23,                 /* Multicmnt  */
  YYSYMBOL_Print = 24,                     /* Print  */
  YYSYMBOL_Do = 25,                        /* Do  */
  YYSYMBOL_Switch = 26,                    /* Switch  */
  YYSYMBOL_stringconst = 27,               /* stringconst  */
  YYSYMBOL_Case = 28,                      /* Case  */
  YYSYMBOL_Default = 29,                   /* Default  */
  YYSYMBOL_30_ = 30,                       /* '*'  */
  YYSYMBOL_31_ = 31,                       /* '/'  */
  YYSYMBOL_32_ = 32,                       /* '%'  */
  YYSYMBOL_33_ = 33,                       /* '+'  */
  YYSYMBOL_34_ = 34,                       /* '-'  */
  YYSYMBOL_35_ = 35,                       /* '('  */
  YYSYMBOL_36_ = 36,                       /* ')'  */
  YYSYMBOL_37_ = 37,                       /* '{'  */
  YYSYMBOL_38_ = 38,                       /* '}'  */
  YYSYMBOL_39_ = 39,                       /* ','  */
  YYSYMBOL_40_ = 40,                       /* '='  */
  YYSYMBOL_41_ = 41,                       /* '\''  */
  YYSYMBOL_42_ = 42,                       /* ';'  */
  YYSYMBOL_43_ = 43,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_start = 45,                     /* start  */
  YYSYMBOL_declaration = 46,               /* declaration  */
  YYSYMBOL_function = 47,                  /* function  */
  YYSYMBOL_Argument = 48,                  /* Argument  */
  YYSYMBOL_Arg = 49,                       /* Arg  */
  YYSYMBOL_Assignment = 50,                /* Assignment  */
  YYSYMBOL_functioncall = 51,              /* functioncall  */
  YYSYMBOL_Argfunccalls = 52,              /* Argfunccalls  */
  YYSYMBOL_Argcal = 53,                    /* Argcal  */
  YYSYMBOL_switchstmt = 54,                /* switchstmt  */
  YYSYMBOL_defaultcase = 55,               /* defaultcase  */
  YYSYMBOL_cases = 56,                     /* cases  */
  YYSYMBOL_Whilestmt = 57,                 /* Whilestmt  */
  YYSYMBOL_forstmt = 58,                   /* forstmt  */
  YYSYMBOL_dowhilestm = 59,                /* dowhilestm  */
  YYSYMBOL_ifstmt = 60,                    /* ifstmt  */
  YYSYMBOL_Elseifstmt = 61,                /* Elseifstmt  */
  YYSYMBOL_Elseifstatement = 62,           /* Elseifstatement  */
  YYSYMBOL_elsestmt = 63,                  /* elsestmt  */
  YYSYMBOL_statements = 64,                /* statements  */
  YYSYMBOL_statement = 65,                 /* statement  */
  YYSYMBOL_printfunc = 66,                 /* printfunc  */
  YYSYMBOL_Expr = 67                       /* Expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  71
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   590

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  236

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   284


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    32,     2,    41,
      35,    36,    30,    33,    39,    34,     2,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    43,    42,
       2,    40,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,    38,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    49,    49,    50,    51,    52,    53,    56,    57,    62,
      63,    65,    66,    67,    70,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     103,   105,   106,   111,   112,   113,   114,   119,   120,   123,
     127,   128,   133,   136,   138,   142,   144,   147,   148,   151,
     152,   156,   157,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     182,   182,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUMBER", "Identifier",
  "type", "LE", "GE", "NE", "EQ", "GT", "LT", "While", "Public", "Static",
  "Protected", "If", "Break", "Return", "Else", "Elseif", "For",
  "Singlecmnt", "Multicmnt", "Print", "Do", "Switch", "stringconst",
  "Case", "Default", "'*'", "'/'", "'%'", "'+'", "'-'", "'('", "')'",
  "'{'", "'}'", "','", "'='", "'\\''", "';'", "':'", "$accept", "start",
  "declaration", "function", "Argument", "Arg", "Assignment",
  "functioncall", "Argfunccalls", "Argcal", "switchstmt", "defaultcase",
  "cases", "Whilestmt", "forstmt", "dowhilestm", "ifstmt", "Elseifstmt",
  "Elseifstatement", "elsestmt", "statements", "statement", "printfunc",
  "Expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-45)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-39)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     252,    -7,   521,    57,    -6,    -3,    -5,     5,    48,    14,
     -45,   -45,    20,    -9,    21,   -45,     9,   318,   318,   318,
     226,    22,   -45,   123,   -45,   -45,   -45,   -45,   -45,   -10,
     -45,   -45,   -45,   278,   -45,   318,   318,   318,   318,   318,
     318,   318,   303,   323,     4,   318,   338,   544,    70,   -45,
     343,    60,   343,   -45,   104,    47,   358,   343,   -45,   -45,
     399,   343,    39,   278,    72,   -45,   -45,   318,    52,    55,
      58,   -45,   -45,   -45,   -45,   -45,    68,    73,    -4,   363,
      22,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,     9,   -45,   -45,   -45,   -45,    71,    83,   -45,   -45,
     -45,   106,   338,    69,   442,   120,   449,   -45,    -7,    47,
     343,   579,    52,   456,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   -45,   405,   -14,    87,    93,    94,
     -45,   -45,   -45,   278,   343,   102,    96,   169,    99,     4,
     138,    61,   -45,   170,   210,   338,   107,   112,   111,   116,
     -45,   539,   539,   539,   539,   539,   539,    62,    62,   579,
     579,   343,   113,   149,   142,   119,   -45,   125,   487,   278,
     343,   -45,   -45,   -45,   124,   106,   -45,   -45,   278,   106,
     278,   -45,   412,   -45,   130,   132,   143,   -45,   139,   141,
     494,   278,   -45,   144,    67,   146,   343,   135,   343,   154,
     -24,   278,   -45,   148,   150,   -45,   153,   -45,   501,   -45,
     532,   152,   163,   -45,   179,   181,   278,   -45,   278,   183,
     182,   278,   278,   -45,   -45,   187,   190,   278,   -45,   143,
     -45,   -45,   -45,   194,   -45,   -45
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      62,    27,    29,     0,     0,     0,     0,     0,     0,     0,
      77,    78,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     6,     3,    79,    70,    69,    63,    68,    72,    64,
      67,    66,     4,    62,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    46,     0,     0,    29,     0,     8,
       0,     0,     0,    73,    27,    29,     0,     0,    74,    89,
       0,     0,     0,    62,     0,    19,    26,     0,     0,     0,
       0,     1,     5,     2,     7,    65,     0,     0,    56,     0,
       0,    61,    30,    33,    24,    25,    21,    31,    32,    35,
      22,    36,    23,    44,    43,    45,     0,    42,    20,    15,
      38,    13,     0,     0,     0,     0,     0,    75,    19,    26,
       0,    94,    89,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,     0,     0,     0,     0,
      16,    17,    34,    62,     0,     0,     0,    29,     0,    46,
       0,     0,    12,    37,    39,     0,     0,     0,     0,    89,
      88,    82,    83,    84,    85,    86,    87,    92,    93,    90,
      91,     0,     0,     0,     0,     0,    18,     0,     0,    62,
       0,    40,    41,    14,     0,     0,    37,    39,    62,    13,
      62,    16,     0,    80,     0,     0,     0,    59,     0,     0,
       0,    62,    11,     0,     0,     0,     0,     0,     0,     0,
       0,    62,    60,     0,     0,    52,     0,    55,     0,    81,
       0,     0,     0,    47,     0,     0,    62,     9,    62,     0,
       0,    62,    62,    48,    58,     0,     0,    62,    54,    51,
      49,    57,    10,     0,    50,    53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -45,   -45,     1,   166,    54,    59,     0,   -44,    97,   -45,
     -45,   -45,     6,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -29,   -45,   -45,    -2
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    20,    80,    22,   141,   142,    59,    24,    96,    97,
      25,   214,   200,    26,    27,    28,    29,    30,    78,    31,
      32,    33,    34,   113
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,    21,   100,    49,    81,   212,    60,    93,    94,    76,
      77,    51,    65,    66,   213,   135,   136,    68,    69,    70,
      74,    72,   162,    35,    36,   163,    37,    38,    63,    50,
      52,    95,    39,    23,   127,    82,    83,    84,    85,    86,
      87,    88,    90,    92,    67,    98,    99,    53,   104,    61,
     106,    54,    55,    48,   111,    62,    64,   112,   144,   125,
       1,    47,    48,    23,    75,   105,   126,   129,   114,   115,
     116,   117,   118,   119,   103,    15,   128,    40,    41,    49,
      42,    43,    56,    57,    15,    18,    45,    46,   130,    19,
      58,    16,    17,   131,    18,   122,   123,   174,    19,   132,
     175,   177,   143,   206,   167,   133,   175,   138,   134,   145,
     149,   140,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   139,    -7,   147,   164,    -7,    -7,    -7,   165,
     166,   170,   168,    23,    35,    36,    -7,    37,    38,   169,
     189,   171,   173,    39,   178,   176,   107,   179,   180,   193,
      -7,   195,   181,   184,   185,   183,   186,    -7,    -7,   182,
      -7,   191,   204,   187,    -7,    -7,   197,   198,   190,    23,
     -15,   199,   215,   -15,   -15,   -15,   201,   209,    23,   202,
      23,   211,   205,   -15,   207,   216,    73,   225,   217,   226,
     218,    23,   229,   230,   208,   221,   210,   -15,   233,    40,
      41,    23,    42,    43,   -15,   -15,   222,   -15,    45,   102,
     -38,   -15,   -15,   -38,   -38,   -38,    23,   223,    23,   224,
     227,    23,    23,   -38,   228,   231,    71,    23,   232,     1,
      55,     3,   235,   194,   192,   234,   172,   -38,     0,     5,
       0,     0,     0,     0,   -38,   -38,     0,   -38,     0,     0,
       0,   -38,   -38,    15,     0,     1,     2,     3,     0,     0,
      16,    17,     0,    18,     4,     5,     0,    19,     6,     7,
       8,     0,     0,     9,    10,    11,    12,    13,    14,    15,
       0,     1,     2,    79,     0,     0,    16,    17,     0,    18,
       4,     0,     0,    19,     6,     7,     8,     0,     0,     9,
      10,    11,    12,    13,    14,    15,     1,    55,    48,     0,
       0,     0,    16,    17,     0,    18,     0,     0,     0,    19,
       0,     1,    55,    48,     0,     0,     1,    55,    48,     0,
      15,     0,     0,     0,     0,     0,    89,    16,    17,     0,
      18,     1,     2,    48,    19,    15,     1,    55,    48,     0,
      15,     0,    16,    17,     0,    18,     0,    91,    17,    19,
      18,   108,   109,    48,    19,    15,     1,   137,    48,     0,
      15,     0,    16,    17,     0,    18,     0,    56,    57,    19,
      18,     0,     0,     0,    19,    15,     0,     0,     0,     0,
      15,     0,    56,   110,     0,    18,     0,    16,    17,    19,
      18,     0,     0,     0,    19,   114,   115,   116,   117,   118,
     119,   114,   115,   116,   117,   118,   119,     0,   114,   115,
     116,   117,   118,   119,     0,     0,     0,     0,     0,   120,
     121,     0,   122,   123,     0,   120,   121,     0,   122,   123,
       0,   124,   120,   121,     0,   122,   123,   161,   114,   115,
     116,   117,   118,   119,   196,   114,   115,   116,   117,   118,
     119,     0,   114,   115,   116,   117,   118,   119,     0,     0,
       0,     0,   120,   121,     0,   122,   123,     0,   146,   120,
     121,     0,   122,   123,     0,   148,   120,   121,     0,   122,
     123,     0,   150,   114,   115,   116,   117,   118,   119,     0,
     114,   115,   116,   117,   118,   119,     0,   114,   115,   116,
     117,   118,   119,     0,     0,     0,     0,   120,   121,     0,
     122,   123,     0,   188,   120,   121,     0,   122,   123,     0,
     203,   120,   121,     0,   122,   123,     0,   219,   114,   115,
     116,   117,   118,   119,     0,   114,   115,   116,   117,   118,
     119,    40,    41,     0,    42,    43,    44,     0,     0,     0,
      45,    46,   120,   121,     0,   122,   123,     0,   220,   120,
     121,     0,   122,   123,    40,    41,     0,    42,    43,   101,
       0,     0,     0,    45,   102,   114,   115,   116,   117,   118,
     119
};

static const yytype_int16 yycheck[] =
{
       0,     0,    46,     3,    33,    29,     8,     3,     4,    19,
      20,    14,     3,     4,    38,    19,    20,    17,    18,    19,
      20,    20,    36,    30,    31,    39,    33,    34,    37,    35,
      35,    27,    39,    33,    63,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    35,    45,    46,    42,    50,    35,
      52,     3,     4,     5,    56,    35,    35,    57,   102,    61,
       3,     4,     5,    63,    42,     5,    27,    67,     6,     7,
       8,     9,    10,    11,     4,    27,     4,    30,    31,    79,
      33,    34,    34,    35,    27,    37,    39,    40,    36,    41,
      42,    34,    35,    38,    37,    33,    34,    36,    41,    41,
      39,   145,   102,    36,   133,    37,    39,    36,    35,    40,
     110,     5,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,    39,     0,     4,    38,     3,     4,     5,    36,
      36,    35,   134,   133,    30,    31,    13,    33,    34,    37,
     169,    42,     4,    39,    37,   145,    42,    35,    37,   178,
      27,   180,    36,     4,    12,    42,    37,    34,    35,   161,
      37,    37,   191,    38,    41,    42,    36,    35,   170,   169,
       0,    28,   201,     3,     4,     5,    37,    42,   178,    38,
     180,    27,    38,    13,    38,    37,    20,   216,    38,   218,
      37,   191,   221,   222,   196,    43,   198,    27,   227,    30,
      31,   201,    33,    34,    34,    35,    43,    37,    39,    40,
       0,    41,    42,     3,     4,     5,   216,    38,   218,    38,
      37,   221,   222,    13,    42,    38,     0,   227,    38,     3,
       4,     5,    38,   179,   175,   229,   139,    27,    -1,    13,
      -1,    -1,    -1,    -1,    34,    35,    -1,    37,    -1,    -1,
      -1,    41,    42,    27,    -1,     3,     4,     5,    -1,    -1,
      34,    35,    -1,    37,    12,    13,    -1,    41,    16,    17,
      18,    -1,    -1,    21,    22,    23,    24,    25,    26,    27,
      -1,     3,     4,     5,    -1,    -1,    34,    35,    -1,    37,
      12,    -1,    -1,    41,    16,    17,    18,    -1,    -1,    21,
      22,    23,    24,    25,    26,    27,     3,     4,     5,    -1,
      -1,    -1,    34,    35,    -1,    37,    -1,    -1,    -1,    41,
      -1,     3,     4,     5,    -1,    -1,     3,     4,     5,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,
      37,     3,     4,     5,    41,    27,     3,     4,     5,    -1,
      27,    -1,    34,    35,    -1,    37,    -1,    34,    35,    41,
      37,     3,     4,     5,    41,    27,     3,     4,     5,    -1,
      27,    -1,    34,    35,    -1,    37,    -1,    34,    35,    41,
      37,    -1,    -1,    -1,    41,    27,    -1,    -1,    -1,    -1,
      27,    -1,    34,    35,    -1,    37,    -1,    34,    35,    41,
      37,    -1,    -1,    -1,    41,     6,     7,     8,     9,    10,
      11,     6,     7,     8,     9,    10,    11,    -1,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    33,    34,    -1,    30,    31,    -1,    33,    34,
      -1,    42,    30,    31,    -1,    33,    34,    42,     6,     7,
       8,     9,    10,    11,    42,     6,     7,     8,     9,    10,
      11,    -1,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    30,    31,    -1,    33,    34,    -1,    36,    30,
      31,    -1,    33,    34,    -1,    36,    30,    31,    -1,    33,
      34,    -1,    36,     6,     7,     8,     9,    10,    11,    -1,
       6,     7,     8,     9,    10,    11,    -1,     6,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    30,    31,    -1,
      33,    34,    -1,    36,    30,    31,    -1,    33,    34,    -1,
      36,    30,    31,    -1,    33,    34,    -1,    36,     6,     7,
       8,     9,    10,    11,    -1,     6,     7,     8,     9,    10,
      11,    30,    31,    -1,    33,    34,    35,    -1,    -1,    -1,
      39,    40,    30,    31,    -1,    33,    34,    -1,    36,    30,
      31,    -1,    33,    34,    30,    31,    -1,    33,    34,    35,
      -1,    -1,    -1,    39,    40,     6,     7,     8,     9,    10,
      11
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,    12,    13,    16,    17,    18,    21,
      22,    23,    24,    25,    26,    27,    34,    35,    37,    41,
      45,    46,    47,    50,    51,    54,    57,    58,    59,    60,
      61,    63,    64,    65,    66,    30,    31,    33,    34,    39,
      30,    31,    33,    34,    35,    39,    40,     4,     5,    50,
      35,    14,    35,    42,     3,     4,    34,    35,    42,    50,
      67,    35,    35,    37,    35,     3,     4,    35,    50,    50,
      50,     0,    46,    47,    50,    42,    19,    20,    62,     5,
      46,    64,    50,    50,    50,    50,    50,    50,    50,    33,
      50,    34,    50,     3,     4,    27,    52,    53,    50,    50,
      51,    35,    40,     4,    67,     5,    67,    42,     3,     4,
      35,    67,    50,    67,     6,     7,     8,     9,    10,    11,
      30,    31,    33,    34,    42,    67,    27,    64,     4,    50,
      36,    38,    41,    37,    35,    19,    20,     4,    36,    39,
       5,    48,    49,    50,    51,    40,    36,     4,    36,    50,
      36,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    42,    36,    39,    38,    36,    36,    64,    67,    37,
      35,    42,    52,     4,    36,    39,    50,    51,    37,    35,
      37,    36,    67,    42,     4,    12,    37,    38,    36,    64,
      67,    37,    49,    64,    48,    64,    42,    36,    35,    28,
      56,    37,    38,    36,    64,    38,    36,    38,    67,    42,
      67,    27,    29,    38,    55,    64,    37,    38,    37,    36,
      36,    43,    43,    38,    38,    64,    64,    37,    42,    64,
      64,    38,    38,    64,    56,    38
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    45,    45,    45,    45,    46,    46,    47,
      47,    48,    48,    48,    49,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      51,    52,    52,    53,    53,    53,    53,    54,    54,    55,
      56,    56,    57,    58,    59,    60,    61,    62,    62,    63,
      63,    64,    64,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      66,    66,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     1,     2,     1,     1,     2,     8,
      10,     3,     1,     0,     2,     3,     3,     3,     4,     2,
       3,     3,     3,     3,     3,     3,     2,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     4,     3,     4,
       5,     3,     1,     1,     1,     1,     0,     7,     8,     3,
       5,     4,     7,    11,     9,     7,     2,     8,     7,     5,
       6,     2,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     3,     3,     1,     1,     1,
       5,     7,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     3,     3,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 1411 "Assign.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 199 "Assign.y"
 
  
#include"lex.yy.c"
#include<ctype.h>
int count=0;

int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");

   if(!yyparse())
        printf("\nFile Parsed Successfully .\n");
    else
        printf("\n Code invalid \n");

    fclose(yyin);
    return 0;
}

yyerror(char *s) {	
    printf("There is an error in the line no-%d. : The following  %s occured due to wrong code near \" %s \".\n ", l, s, yytext );
}
