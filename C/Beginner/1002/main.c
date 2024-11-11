#include <stdio.h>
#include <math.h>

int main(void) {

    double r, areaCircle;
    scanf("%lf", &r);

    areaCircle = 3.14159 * pow(r,2);

    printf("A=%.4lf\n", areaCircle);

    return 0;
}

/*

INSTRUÇÕES PARA COMPILE AND RUN DA BIBLIOTECA <math.h>

compile: gcc main.c -o exec -lm
run: ./exec

*/