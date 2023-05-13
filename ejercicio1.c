/* Programa: Promedio de tres notas */
#include <stdio.h>
float nota1, nota2, nota3, promedio;

float validacion(float nota){   //función de validación de rango
    while (nota>20 || nota<0)
    {
        printf("El rango de la nota debe estar comprendido entre 0 y 20, ingrese una nota valida \n");
        scanf("%f", &nota);
    }
    return(nota);
}

void main()
{
    printf("Ingrese la primera nota \n");
    scanf("%f", &nota1);
    validacion(nota1);
    printf("Ingrese la segunda nota \n");
    scanf("%f", &nota2);
    validacion(nota2);
    printf("Ingrese la tercera nota \n");
    scanf("%f", &nota3);
    validacion(nota3);
        
    promedio  = (nota1 + nota2 + nota3) / 3;
    printf("El promedio de este estudiante es de %f \n", promedio);
}