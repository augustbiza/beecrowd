// 1011 - Esfera
#include <stdio.h>
#include <math.h>

int main(void) {

    double raio, volume;
    scanf("%lf", &raio);

    volume = pow(raio, 3) * 3.14159 * ((double)4/3);

    printf("VOLUME = %.3f\n", volume);

    return 0;
}