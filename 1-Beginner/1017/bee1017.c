// 1017 - Gasto de Combustível
#include <stdio.h>

int main(void) {

    //12km/L
    int horas, vel;
    scanf("%d%d", &horas, &vel);

    int distancia = vel*horas;

    double litros = (double)distancia/12;

    printf("%.3f\n", litros);

    return 0;
}