#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


void altaProducto(Eproducto producto[], int tam)
{
    int i;
    int flagEncontro=0;

    for(i=0; i<tam; i++)
    {
        if(producto[i].estado==0)
        {
            printf("Ingrese el codigo del producto: \n");
            gets(producto[i].codigo);

            printf("\nIngrese la descripcion del producto: \n");
            fflush(stdin);
            gets(producto[i].descripcion);

            printf("\nIngrese el precio del producto: \n");
            scanf("%f", producto[i].precio);

            printf("\nIngrese la cantidad de productos que desea ingresar");
            scanf("%d", producto[i].cantidad);

            producto[i].estado= 1;
            flagEncontro=1;

        }
        else
        {
            printf("Espacio en memoria lleno");
            break;

        }

    }

}

