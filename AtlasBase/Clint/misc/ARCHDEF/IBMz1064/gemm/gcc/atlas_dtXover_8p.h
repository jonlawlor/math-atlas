/* This file generated by /home0/cborntra/REPOS/ATLAS/build/..//tune/blas/gemm/txover.c
 */
#ifndef ATL_TXOVER_H
   #define ATL_TXOVER_H 1

   #define ATL_PDIM 3
static const int ATL_tmmNN_SQmnk_XO[3] = 
   {163,163,324};
static const int ATL_tmmNT_SQmnk_XO[3] = 
   {162,162,345};
static const int ATL_tmmTN_SQmnk_XO[3] = 
   {162,162,374};
#define ATL_tmmTT_SQmnk_XO ATL_tmmNN_SQmnk_XO
static const int *ATL_tmm_SQmnk_XO[4] =
{ATL_tmmNN_SQmnk_XO, ATL_tmmNT_SQmnk_XO,
 ATL_tmmTN_SQmnk_XO, ATL_tmmTT_SQmnk_XO};
static const int ATL_tmmNN_SmnLk_XO[27] = 
   {7406,0,0,6418,0,0,3400,4982,0,2782,3139,0,1238,1238,0,0,341,4574,170,330,1882,170,320,651,0,80,5896};
static const int ATL_tmmNT_SmnLk_XO[27] = 
   {2975,6978,0,2975,5330,7685,2975,3697,6604,1133,2213,5745,1133,1180,4689,434,941,4207,170,324,2493,170,320,651,0,80,5896};
static const int ATL_tmmTN_SmnLk_XO[27] = 
   {0,0,0,0,0,0,5774,7652,0,2846,2923,0,1691,1853,5039,380,394,5161,171,324,1571,171,325,641,0,80,5892};
#define ATL_tmmTT_SmnLk_XO ATL_tmmNN_SmnLk_XO
static const int *ATL_tmm_SmnLk_XO[4] =
{ATL_tmmNN_SmnLk_XO, ATL_tmmNT_SmnLk_XO,
 ATL_tmmTN_SmnLk_XO, ATL_tmmTT_SmnLk_XO};
static const int ATL_tmmNN_SmkLn_XO[27] = 
   {3299,5835,8219,3299,3641,6962,3299,3299,6829,1181,3893,6141,1181,1207,5723,0,397,2243,171,328,947,171,325,641,80,170,321};
static const int ATL_tmmNT_SmkLn_XO[27] = 
   {5337,7886,0,0,5337,0,5337,7437,0,1595,2054,0,1595,1595,7091,456,537,3011,171,331,640,171,325,641,80,170,321};
#define ATL_tmmTN_SmkLn_XO ATL_tmmNN_SmkLn_XO
#define ATL_tmmTT_SmkLn_XO ATL_tmmNT_SmkLn_XO
static const int *ATL_tmm_SmkLn_XO[4] =
{ATL_tmmNN_SmkLn_XO, ATL_tmmNT_SmkLn_XO,
 ATL_tmmTN_SmkLn_XO, ATL_tmmTT_SmkLn_XO};
static const int ATL_tmmNN_SnkLm_XO[27] = 
   {9413,0,0,9413,0,0,0,9330,0,0,5717,0,0,1300,4578,362,362,2319,170,325,754,170,320,651,80,170,321};
#define ATL_tmmNT_SnkLm_XO ATL_tmmNN_SnkLm_XO
static const int ATL_tmmTN_SnkLm_XO[27] = 
   {8535,0,0,5069,6147,0,5069,6916,0,3634,3868,0,0,1377,3975,0,361,3932,171,328,678,171,325,641,80,170,321};
#define ATL_tmmTT_SnkLm_XO ATL_tmmTN_SnkLm_XO
static const int *ATL_tmm_SnkLm_XO[4] =
{ATL_tmmNN_SnkLm_XO, ATL_tmmNT_SnkLm_XO,
 ATL_tmmTN_SnkLm_XO, ATL_tmmTT_SnkLm_XO};
static const int ATL_tmmNN_SmLnk_XO[27] = 
   {349,463,1023,262,347,944,197,379,683,172,320,649,172,320,649,172,320,649,172,320,649,172,327,646,80,170,322};
static const int ATL_tmmNT_SmLnk_XO[27] = 
   {296,332,1179,261,321,1044,261,320,641,261,331,683,172,328,729,172,320,649,172,328,729,172,327,646,80,170,322};
static const int ATL_tmmTN_SmLnk_XO[27] = 
   {295,328,1030,295,330,938,190,320,649,172,320,649,172,320,649,172,331,683,172,320,649,172,327,646,80,170,322};
static const int ATL_tmmTT_SmLnk_XO[27] = 
   {0,422,833,275,337,1013,198,324,934,198,328,927,190,329,657,181,326,646,181,320,649,172,327,646,80,170,322};
static const int *ATL_tmm_SmLnk_XO[4] =
{ATL_tmmNN_SmLnk_XO, ATL_tmmNT_SmLnk_XO,
 ATL_tmmTN_SmLnk_XO, ATL_tmmTT_SmLnk_XO};
static const int ATL_tmmNN_SnLmk_XO[27] = 
   {317,392,1404,317,330,1059,226,355,980,226,347,922,172,320,649,172,320,649,172,320,649,172,327,646,80,175,461};
static const int ATL_tmmNT_SnLmk_XO[27] = 
   {0,341,1092,341,341,1126,303,330,1041,258,344,911,172,324,660,172,320,649,172,320,649,172,327,646,80,170,322};
static const int ATL_tmmTN_SnLmk_XO[27] = 
   {308,685,3242,308,352,1051,294,327,1029,294,323,922,172,320,649,172,320,649,172,320,649,172,327,646,80,170,322};
static const int ATL_tmmTT_SnLmk_XO[27] = 
   {329,418,1147,329,517,1156,287,323,941,181,321,782,181,320,649,172,320,649,172,320,649,172,327,646,80,170,322};
static const int *ATL_tmm_SnLmk_XO[4] =
{ATL_tmmNN_SnLmk_XO, ATL_tmmNT_SnLmk_XO,
 ATL_tmmTN_SnLmk_XO, ATL_tmmTT_SnLmk_XO};
static const int ATL_tmmNN_SkLmn_XO[27] = 
   {0,236,416,0,236,607,0,236,533,194,194,546,171,182,331,0,161,331,0,161,320,161,161,368,80,161,831};
static const int ATL_tmmNT_SkLmn_XO[27] = 
   {0,272,428,0,272,372,0,272,635,0,206,363,0,170,385,0,170,329,0,170,329,170,170,322,80,170,322};
static const int ATL_tmmTN_SkLmn_XO[27] = 
   {0,257,626,0,257,346,0,257,427,0,201,340,0,170,352,0,170,329,0,170,329,170,170,322,80,162,345};
#define ATL_tmmTT_SkLmn_XO ATL_tmmNN_SkLmn_XO
static const int *ATL_tmm_SkLmn_XO[4] =
{ATL_tmmNN_SkLmn_XO, ATL_tmmNT_SkLmn_XO,
 ATL_tmmTN_SkLmn_XO, ATL_tmmTT_SkLmn_XO};

#endif /* end ifndef ATL_TXOVER_H */
