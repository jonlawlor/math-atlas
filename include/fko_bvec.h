#ifndef FKO_BVEC_H
#define FKO_BVEC_H

int NewBitVec(int size);
int *ExtendBitVec(int iv, int nwords);
void SetVecAll(int iv, int val);
void SetVecBit(int iv, int ibit, int val);
int BitVecComb(int ivD, int iv1, int iv2, char op);
int BitVecComp(int iv1, int iv2);
int BitVecCopy(int ivD, int ivS);

#endif
