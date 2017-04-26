
#include <stdio.h>
#include <string.h>
#define FIL 3
#define COL 10
void main(void)
{
    int i,j,x,lmax=0,imax;
    char mat[FIL][COL],aux[COL];
    for(i=0; i<FIL; i++)
    {
        //pide 5 nombres y luego dice cual es el mas largo
        printf("Ingrese nombre: ");
        gets(mat[i]);
    }
// Ordeno alfabeticamente la matriz
    for(i=0; i<FIL-1; i++)
    {
        for(j=i+1; j<FIL; j++)
        {
            if((strcmp(mat[i],mat[j]))>0)
            {
                strcpy(aux,mat[i]);
                strcpy(mat[i],mat[j]);
                strcpy(mat[j],aux);
            }
        }
    }
// Busqueda del nombre mas largo
    for(i=0; i<FIL; i++)
    {
        x=strlen(mat[i]);
        if(x>lmax)
        {
            lmax=x;
            imax=i;
        }
    }

    printf("El nombre mas largo es %s",mat[imax]);

    //muestra cuanto espacio ocupa en la memoria  (error)
    sizeof(void);
    printf("\n %d", (sizeof(void)));

}


