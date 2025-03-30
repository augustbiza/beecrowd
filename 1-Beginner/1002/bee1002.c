// 1002 - Área do Círculo
#include <stdio.h>
#include <math.h>

int main(void) {

    double raio, areaCirculo;
    scanf("%lf", &raio);

    areaCirculo = 3.14159 * pow(raio, 2);

    printf("A=%.4lf\n", areaCirculo);

    return 0;
}