#include <stdio.h>
#include <stdlib.h>
#define E 3
struct Eempleados
{
    int legajos, estado;
    char nombres[20];
    float sueldos;
};
void cargarEmpleado(Eempleados[E], int);
void eliminarEmpleado(Eempleados[E], int);
void modificarEmpleado(Eempleados[E], int);
void mostrarDatos(Eempleados[E], int);

int main()
{
    /*legajo nombre sueldo estado*/

    system("CLS");
    int i, j;
    int auxInt, flagEncontro=0;
    char auxString[20];
    float auxFloat;
    int opcion;
    char seguir ='s', respuesta;
    struct Eempleados empleado[E];

    do
    {
        printf("1.Alta\n2.Baja\n3.Modificacion\n4.ordenar\n5. mostrar\n6.salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            cargarEmpleado(legajos, nombres, sueldos, estado, E);
            break;
        case 2:
            eliminarEmpleado(legajos, nombres, sueldos, estado, E);
            break;
        case 3:

            modificarEmpleado(legajos, nombres, sueldos, estado, E);
            break;
        case 4:
            ordenarDatos(legajos, nombres, sueldos, estado, E);
            break;

        case 5:
            mostrarDatos(legajos, nombres, sueldos, estado, E);
            break;
        case 6:
            seguir='n';
            break;
        }
    }
    while(seguir=='s');

    return 0;
}

void cargarEmpleado(Eempleados[E], int tam)
{
    system("CLS");
    int flagEncontro = 0, i;
    for(i=0; i<tam; i++)
    {
        if(estados[i]==0)
        {Eempleados
            printf("Ingrese legajo: ");
            scanf("%d", &Eempleados[i].legajos);
            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(Eempleados[i].nombres);
            printf("Ingrese sueldo: ");
            scanf("%f", &Eempleados[i].sueldos);

            estados[i] = 1;
            flagEncontro = 1;

            break;
        }
    }
    if(!flagEncontro)
    {
        printf("No hay espacio suficiente!!!");
    }
}

void eliminarEmpleado(int legajos[], char nombres[][20], float sueldos[], int estados[], int tam)
{
    system("CLS");
    int flagEncontro=0, i;
    int auxInt;
    char respuesta;
    printf("Ingrese legajo: ");
    scanf("%d", &auxInt);
    for(i=0; i<tam; i++)
    {
        if(estados[i]==1)
        {
            if(auxInt == legajos[i])
            {
                printf("%d\t%s\t%.2f\n", legajos[i],nombres[i],sueldos[i]);

                printf("Esta seguro de eliminar el dato s/n: ");
                respuesta = getche();
                if(respuesta=='s')
                {
                    estados[i] = 0;
                }
                else
                {
                    printf("Accion cancelada por el usuario!!!");
                }

                flagEncontro=1;
                break;

            }

        }
    }
    if(flagEncontro==0)
    {
        printf("Dato inexistente");
    }
}

void modificarEmpleado(int legajos[], char nombres[][20], float sueldos[], int estados[], int tam)
{
    system("CLS");
    int flagEncontro=0, i, auxInt;
    float auxFloat;
    char respuesta;
    printf("Ingrese legajo: ");
    scanf("%d", &auxInt);
    for(i=0; i<tam; i++)
    {
        if(estados[i]==1)
        {
            if(auxInt == legajos[i])
            {
                printf("%d\t%s\t%.2f\n", legajos[i],nombres[i],sueldos[i]);
                printf("Ingrese sueldo a modificar");
                scanf("%f", &auxFloat);
                printf("Esta seguro de realizar la modificacion s/n: ");
                respuesta = getche();
                if(respuesta=='s')
                {
                    sueldos[i] = auxFloat;
                }
                else
                {
                    printf("Accion cancelada por el usuario!!!");
                }

                flagEncontro=1;
                break;

            }

        }
    }
    if(flagEncontro==0)
    {
        printf("Dato inexistente");
    }
}
void mostrarDatos(int legajos[], char nombres[][20], float sueldos[], int estados[], int tam)
{
    int i;
    printf("\n\nLegajo\tnombre\tsueldo\n");
            for(i=0; i<tam; i++)
            {
                if(estados[i]!=0)
                    printf("%d\t%s\t%.2f\n", legajos[i],nombres[i],sueldos[i]);
            }

}
