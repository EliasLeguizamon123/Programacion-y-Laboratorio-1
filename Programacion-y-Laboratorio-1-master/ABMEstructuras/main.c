#include <stdio.h>
#include <stdlib.h>
#define E 3
typedef struct
{
    int legajos, estado;
    char nombres[20];
    float sueldos;
}Eempleados;
void cargarEmpleado(Eempleados empleado[], int tam);
void eliminarEmpleado(Eempleados empleado[], int tam);
void modificarEmpleado(Eempleados empleado, int tam);
void ordenarEmpleado(Eempleados empleado[], int tam);
void inicia(Eempleados empleado[], int tam)

int main()
{
    /*legajo nombre sueldo estado*/

    system("CLS");
    int i, j;
    int opcion;
    char seguir ='s', respuesta;

    Eempleados empleado[E];

    inicia(empleado, E);

    do
    {
        printf("1.Alta\n2.Baja\n3.Modificacion\n4.ordenar\n5. mostrar\n6.salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            cargarEmpleado();
            break;
        case 2:
            eliminarEmpleado(empleado, E);
            break;
        case 3:

            modificarEmpleado(empleado, E);
            break;
        case 4:
            ordenarDatos(empleado, E);
            break;

        case 5:
            printf("Legajo\tnombre\tsueldo\n");
            for(i=0; i<E; i++)
            {
                if(empleado[i].estado!=0)
                    printf("%d\t%s\t%.2f\n", empleado[i].legajos,empleado[i].nombres,empleado[i].sueldos);
            }
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
        if(empleado[i].estado==0)
        {
            printf("Ingrese legajo: ");
            scanf("%d", &empleado[i].legajos);
            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(empleado[i].nombres);
            printf("Ingrese sueldo: ");
            scanf("%f", &empleado[i].sueldos);

            empleado[i].estado = 1;
            flagEncontro = 1;

            break;
        }
    }
    if(!flagEncontro)
    {
        printf("No hay espacio suficiente!!!");
    }
}
void eliminarEmpleado(Eempleados empleado, int tam)
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
                printf("%d\t%s\t%.2f\n", empleado[i].legajos, empleado[i].nombres, empleado[i].sueldos);

                printf("Esta seguro de eliminar el dato s/n: ");
                respuesta = getche();
                if(respuesta=='s')
                {
                    empleado[i].estado = 0;
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

void modificarEmpleado(Eempleados empleado, int tam)
{
    system("CLS");
    int flagEncontro=0, i, auxInt;
    float auxFloat;
    char respuesta;
    printf("Ingrese legajo: ");
    scanf("%d", &auxInt);
    for(i=0; i<tam; i++)
    {
        if(empleado[i].estado==1)
        {
            if(auxInt == empleado[i].legajos)
            {
                printf("%d\t%s\t%.2f\n", empleado[i].legajos, empleado[i].nombres, empleado[i].sueldos);
                printf("Ingrese sueldo a modificar");
                scanf("%f", &auxFloat);
                printf("Esta seguro de realizar la modificacion s/n: ");
                respuesta = getche();
                if(respuesta=='s')
                {
                    empleado[i].sueldos = auxFloat;
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
void ordenarEmpleado(Eempleados empleado[], int tam)
{
    int i, j;
    Eempleado empleadoAux;
    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(empleado[i].nombres, empleado[j].nombres)>0)
            {
                empleadoAux=empleado[i];
                empleado[i] = empleado[j];
                empleado[j] = empleadoAux;

            }
            else
            {
                if(strcmp(empleado[i].nombres, empleado[j].nombres)==0)
                {
                    if(empleado[i].legajos>empleado[j].legajos)
                    {
                        empleadoAux=empleado[i];
                        empleado[i] = empleado[j];
                        empleado[j] = empleadoAux;
                    }
                }
            }
        }
    }


}
void inicia(Eempleados empleado[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        empleado[i].estado=0;
    }


}
