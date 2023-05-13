/* Ejercicio 3: Con estos euros, ¿Cuánto café y azúcar compro? */
#include <stdio.h>
float presupuesto, presup_azucar, presup_cafe, resto;
int cafe, azucar;

void main(){
    printf("Ingrese una cantidad de euros \n");
    scanf("%f", &presupuesto);
    presup_azucar = presupuesto / 2;
    presup_cafe = presupuesto / 3;
    resto = presupuesto - (presup_azucar + presup_cafe);
    cafe = presup_cafe / (3 * 1.06);
    azucar = presup_azucar / (0.72 * 1.06);
    printf("Te quedan %f euros, y pudiste comprar %d kg de cafe y %d kg de azucar \n", resto, cafe, azucar);
}

