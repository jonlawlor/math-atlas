#ifndef ATL_ztGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='LOWER'
 * M : 25,50,75,100,125,150,175,200,250,300,350,400,450,500,600,700,800,900,1000,1200,1400,1600,1800,2000,2400,2800,3200,3600,4000
 * N : 25,50,75,100,125,150,175,200,250,300,350,400,450,500,600,700,800,900,1000,1200,1400,1600,1800,2000,2400,2800,3200,3600,4000
 * NB : 1,8,20,12,24,20,20,24,24,12,20,24,20,24,24,24,24,24,24,24,24,24,24,24,48,48,48,48,48
 */
#define ATL_ztGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 37) (nb_) = 1; \
   else if ((n_) < 62) (nb_) = 8; \
   else if ((n_) < 87) (nb_) = 20; \
   else if ((n_) < 112) (nb_) = 12; \
   else if ((n_) < 137) (nb_) = 24; \
   else if ((n_) < 187) (nb_) = 20; \
   else if ((n_) < 275) (nb_) = 24; \
   else if ((n_) < 325) (nb_) = 12; \
   else if ((n_) < 375) (nb_) = 20; \
   else if ((n_) < 425) (nb_) = 24; \
   else if ((n_) < 475) (nb_) = 20; \
   else if ((n_) < 2200) (nb_) = 24; \
   else (nb_) = 48; \
}


#endif    /* end ifndef ATL_ztGetNB_geqrf */
