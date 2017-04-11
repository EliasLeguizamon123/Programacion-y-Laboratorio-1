#include <stdio.h>
#include <stdlib.h>
#define MAX 3

struct alumno
{
    char nombre[20];
    int nota;
};

void main()
{
    int i, j;
    struct alumno pers[MAX],aux;

    for(i=0; i<MAX; i++)
        {
        printf("ingrese su nombre: ");
        fflush(stdin);
        gets(pers[i].nombre);

        }

    for(i=0; i<MAX-1; i++)
    {
        for(j=i+1; j<MAX; j++)
            if((strcmp(pers[i].nombre,pers[j].nombre))<0)
            {
                aux=pers[i];
                pers[i]=pers[j];
                pers[j]=aux;
            }

        printf("\n%s", pers[i]);


    }
}

