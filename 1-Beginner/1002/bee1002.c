// 1002 - Área do Círculo
#include <stdio.h>
#include <math.h>

int main(void) {

    float raio, areaCirculo;
    scanf("%f", &raio);

    areaCirculo = 3.14159 * pow(raio, 2);

    printf("A=%.4f\n", areaCirculo);

    return 0;
}