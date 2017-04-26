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

    for(i=0; i<MAX; i++)                 //se piden los datos necesarios
    {
        printf("ingrese su nombre: ");
        fflush(stdin);
        gets(pers[i].nombre);

        printf("Ingrese su nota: ");
        scanf("%d", &pers[i].nota);

    }

    for(i=0; i<MAX-1; i++)                  //se ordenan de la A a la Z los "nombres"
    {
        for(j=i+1; j<MAX; j++)
            if((strcmp(pers[i].nombre,pers[j].nombre))>0)
            {
                aux=pers[i];
                pers[i]=pers[j];
                pers[j]=aux;
            }


    }
     for(i=0; i<MAX; i++)                              //se imprimen los nombres y sus notas respectivas
        {
            printf("\n%s \t%d", pers[i].nombre, pers[i].nota);
        }
}

