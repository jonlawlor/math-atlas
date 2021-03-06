#ifndef OPTSIMD_H
#define OPTSIMD_H

/*
 * this is for different Simd vectorization methods
 */
#define VECT_NCONTRL 0x1      /* simple loop with no control flow */
#define VECT_SV 0x2           /* speculative vectorization */
#define VECT_SHADOW_VRC 0x4   /* speculative vectorization */
#define VECT_INTRINSIC  0x8   /* user defined intrinsic vectorization*/

#if 0
   #define VECT_VRC 0x4       /* vector redundant computation */
   #define VECT_VEM 0x8       /* Vectorization after replacing with Max var */
#endif

int Type2Vlen(int type);
BLIST *AddLoopDupBlks(LOOPQ *lp, BBLOCK *up, BBLOCK *down);
void UnalignLoopSpecialization(LOOPQ *lp);
short FindReadUseType(INSTQ *ip, short var, INT_BVI blkvec);
void UpdateVecLoop(LOOPQ *lp);
int IsSpeculationNeeded();
int IsSIMDalignLoopPeelable(LOOPQ *lp);
int SpeculativeVectorAnalysis();
int SpecSIMDLoop(int SB_UR);
int RcVectorAnalysis();
int RcVectorization();
void FindPaths(BBLOCK *head, BLIST *loopblocks, LOOPQ *lp, BLIST *blkstack);
void KillPathTable();
int PathVectorizable(int pnum);
int FindNumPaths(LOOPQ *lp);
#endif
