/* Ejercicio 2: Calculadora del volumen de un cubo */
#include <stdio.h>
float arista, volumen;
void main()
{
    printf("Indique la medida de la arista de un cubo \n");
    scanf("%f", &arista);
    volumen = (arista * arista * arista);
    printf("El volumen del cubo es igual a %f \n", volumen);
}