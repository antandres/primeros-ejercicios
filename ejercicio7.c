/* Ejercicio 7: Comprobador de números pares e impares */
#include <stdio.h>
int num;

void main(){
    printf("Ingrese un numero cualquiera \n");
    scanf("%d", &num);
    if (num%2 == 0)
    {
        printf("El numero es par \n");
    }
    else
    {
        printf("El numero es impar \n");
    }
}