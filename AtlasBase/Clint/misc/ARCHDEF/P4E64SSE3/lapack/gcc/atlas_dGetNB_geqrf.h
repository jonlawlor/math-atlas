#ifndef ATL_dGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='LOWER'
 * M : 25,50,75,100,125,150,175,200,250,300,350,400,450,500,600,700,800,900,1000,1200,1400,1600,1800,2000
 * N : 25,50,75,100,125,150,175,200,250,300,350,400,450,500,600,700,800,900,1000,1200,1400,1600,1800,2000
 * NB : 1,18,12,12,12,12,12,12,12,12,18,36,36,36,36,36,36,36,36,60,48,48,60,66
 */
#define ATL_dGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 37) (nb_) = 1; \
   else if ((n_) < 62) (nb_) = 18; \
   else if ((n_) < 325) (nb_) = 12; \
   else if ((n_) < 375) (nb_) = 18; \
   else if ((n_) < 1100) (nb_) = 36; \
   else if ((n_) < 1300) (nb_) = 60; \
   else if ((n_) < 1700) (nb_) = 48; \
   else if ((n_) < 1900) (nb_) = 60; \
   else (nb_) = 66; \
}


#endif    /* end ifndef ATL_dGetNB_geqrf */