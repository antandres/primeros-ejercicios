/* Ejercicio 4: Tiempo transcurrido */
#include <stdio.h>

int horas, minutos, segundos;
void main(){
    printf("Ingrese una hora en formato HH:MM:SS \n");
    scanf("%d:%d:%d", &horas, &minutos, &segundos);
    segundos = segundos + (minutos * 60) + (horas * 3600);
    printf("Desde las 00:00:00, han pasado %d segundos \n", segundos);
}