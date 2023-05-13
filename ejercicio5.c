/*Ejercicio 5: Intercambio de variables */
#include <stdio.h>
int v1, v2;

void main(){
    printf("Escriba un valor para v1 \n");
    scanf("%d", &v1);
    printf("Escriba un valor para v2 \n");
    scanf("%d", &v2);
    v1 = v1 + v2;
    v2 = v1 - v2;
    v1 = v1 - v2;
    printf("El valor de v1 ahora es %d y el de v2 ahora es %d \n", v1, v2);
}