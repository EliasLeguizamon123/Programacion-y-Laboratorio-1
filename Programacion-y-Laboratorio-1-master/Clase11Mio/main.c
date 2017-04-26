#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


#define E 3




int main()
{
    int opcion, i, j;
    char respuesta='s';

    Eproducto producto[E];
    do
    {
    printf("1 - 1. ALTA \n2 - 2. BAJA \n3 - 3. MODIFICACION\n4 - 4. LISTAR\n5 - 5. ORDENAR\n6 - 6. SALIR\n\n\n");
    printf("Opcion a elegir?: ");
    scanf("%d", opcion);
    switch(opcion)
        {
        case 1:
            altaProducto(producto, E);
            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
            break;

        case 5:
            break;

        default:
            printf("OPCION INCORRECTA, Seleccione una de las opciones");
            scanf("%d", opcion);
            break;

        }

        }while(opcion!=6);
    return 0;
}
