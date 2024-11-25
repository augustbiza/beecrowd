#include <stdio.h>
#include <math.h>

int main(void) {

    float a, b, c, r1, r2, discriminant;
    scanf("%f%f%f", &a,&b, &c);

    discriminant = sqrt(pow(b,2) - 4*a*c);

    if(a != 0 && discriminant >= 0) {       //a = 0 -> não tem expoente 2 || não existe raiz quadrada real de numero negativo

        r1 = (-b + discriminant) / (2*a);
        r2 = (-b - discriminant) / (2*a);

        printf("R1 = %.5f\nR2 = %.5f\n", r1, r2);
    }
    else printf("Impossivel calcular\n");

    return 0;
}

//  [-b +- sqrt(b^2 - 4ac)] / 2a
