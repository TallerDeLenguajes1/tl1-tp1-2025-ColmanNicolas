#include <stdio.h>

int main() {
   // printf("hola mundo\n");

    long double meganumero = 76348956523;
    long double *puntero = &meganumero;

    printf("contenido variable: %.2Lf \n", meganumero);
    printf("direccion de memoria almacenada por el puntero: %p\n", (void*)puntero);
    printf("direccion de memoria de la variable: %p \n", (void*)&meganumero);
    printf("direccion de memoria del puntero: %p \n", (void*)&puntero);
    printf("tamaño de la variable: %zu \n", sizeof(meganumero));

    return 0;
}