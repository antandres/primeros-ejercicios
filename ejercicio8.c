/* Ejercicio 8: El mayor número de los tres */
#include <stdio.h>
int num1, num2, num3, mayor;

void main(){
    printf("Ingrese tres numeros, separados por una coma cada uno \n");
    scanf("%d,%d,%d", &num1, &num2, &num3);
    mayor = num1;
    if(mayor<num2){
        mayor = num2;
    }
    if(mayor<num3){
        mayor = num3;
    }
    printf("El mayor es %d \n", mayor);
}