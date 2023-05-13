/* Ejercicio 6: Conversor de dólares a euros */
#include <stdio.h>

const int conversion = 166386; //La tasa del problema fue tomada como un caso aislado
int dolares;
float euros;

void main(){
    printf("Indique una cantidad de dolares \n");
    scanf("%d", &dolares);
    euros = dolares / conversion;
    printf("Su equivalente en euros es de %f \n", euros);
}