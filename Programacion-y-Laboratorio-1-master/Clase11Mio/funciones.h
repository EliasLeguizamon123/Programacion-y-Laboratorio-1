#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct
{
    int codigo;
    char descripcion[51];
    float precio;
    int cantidad;
    int estado; //puede ser 0 (Inactivo) o 1 (Activo)

} Eproducto;

void altaProducto(Eproducto nombreProducto[], int);
void bajaProducto(Eproducto nombreProducto[], int);
void modificarProducto(Eproducto nombteProducto[], int);
void init(Eproducto nombreProducto[], int);

#endif // FUNCIONES_H_INCLUDED
