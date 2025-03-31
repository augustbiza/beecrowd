// 1008 - Salário
#include <stdio.h>

int main(void) {

    int num, qtHoras;
    double valorHora;

    scanf("%d %d %lf", &num, &qtHoras, &valorHora);

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", num, qtHoras*valorHora);

    return 0;
}