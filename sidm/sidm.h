#ifdef DM_SIDM_AREPO

extern int Ndm_active;

extern struct SIDM_temp_particle_data{
    int ngbcount;
    MyIDType SItarget;
    double SIprob;
    double R;
    MyIDType ngblist_sum[100];
    double ngbprob[100];
    double ngbr[100];

}
*SIDMtempInfo;

void sidm_start(void);
void sidm_end(void);
#endif

#ifdef NSI
typedef struct {
  char *col1, *col2, *col3, *col4, *col5;   //r, t, t+dt
} mydata_t;
#endif
