
/*****************************************
**					**
**	 Plot phi E v with time		**
**					**
******************************************/

#include "es.h"

FILE *plot_file;

void phiplots(void)
{
    char cfile[40];
    int i;


    sprintf(cfile,"phiet.data");

    plot_file = fopen(cfile,"w");

    for (i=0; i<=nt; i++)
    {
	fprintf(plot_file, "%d	%f	%f\n", i, phi_mid[i], Ex_mid[i]);
    }

    fclose(plot_file);



    sprintf(cfile,"v.data");

    plot_file = fopen(cfile,"w");

    for (i=0; i<ne; i++)
    {
	fprintf(plot_file, "%f	%f\n", vm[i], vx[i]);
    }

    fclose(plot_file);



    sprintf(cfile,"Energy.data");

    plot_file = fopen(cfile,"w");

    for (i=1; i<=nt; i++)
    {
        fprintf(plot_file, "%d  %f\n", i, TotalEnergy[i]);
    }

    fclose(plot_file);
}
