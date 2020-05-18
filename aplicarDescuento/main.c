#include <stdio.h>
#include <stdlib.h>

float aplicarDescuento(float precioProducto);


int main()
{
    float precio=100;

    precio=aplicarDescuento(precio);

    printf("El precio con descuento es: $%.2f\n",precio);


    return 0;
}

float aplicarDescuento(float precioProducto)
{
    float retorno;
    retorno =precioProducto-(precioProducto*0.05);
    return retorno;
}
