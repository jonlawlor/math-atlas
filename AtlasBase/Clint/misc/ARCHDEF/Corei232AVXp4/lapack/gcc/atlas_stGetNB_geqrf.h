#ifndef ATL_stGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,273,335,397,459,521,769,1018,1080,1142,1266,1515,1639,1701,1763,2012,2509,2757,2881,3006,3130,3192,3254,3503,3751,3813,3875,4000
 * N : 25,273,335,397,459,521,769,1018,1080,1142,1266,1515,1639,1701,1763,2012,2509,2757,2881,3006,3130,3192,3254,3503,3751,3813,3875,4000
 * NB : 24,24,24,44,48,48,48,60,68,68,68,80,80,80,112,112,120,120,132,132,132,140,144,144,164,164,204,204
 */
#define ATL_stGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 366) (nb_) = 24; \
   else if ((n_) < 428) (nb_) = 44; \
   else if ((n_) < 893) (nb_) = 48; \
   else if ((n_) < 1049) (nb_) = 60; \
   else if ((n_) < 1390) (nb_) = 68; \
   else if ((n_) < 1732) (nb_) = 80; \
   else if ((n_) < 2260) (nb_) = 112; \
   else if ((n_) < 2819) (nb_) = 120; \
   else if ((n_) < 3161) (nb_) = 132; \
   else if ((n_) < 3223) (nb_) = 140; \
   else if ((n_) < 3627) (nb_) = 144; \
   else if ((n_) < 3844) (nb_) = 164; \
   else (nb_) = 204; \
}


#endif    /* end ifndef ATL_stGetNB_geqrf */
