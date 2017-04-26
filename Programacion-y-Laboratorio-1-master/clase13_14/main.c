#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int codigo;
    char nombre[51];
    char apellido[51];
}EAutor;

int main()
{
    int i;
    EAutor autores[]={{1,"Ernesto", "Sabato"}, {2,"Isabel", "Allende"}, {3,"Eduardo", "Galeano"}, {4,"Miguel", "De Cervantes"} };

    printf("\nCodigo\tNombre\tApellido");
    for(i=0; i<4; i++){
        printf("\n%d\t%s\t%s", autores[i].codigo, autores[i].nombre, autores[i].apellido);
    }

    return 0;
}
