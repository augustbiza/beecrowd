// 1021 - Notas e Moedas
// 100 - 50 - 20 - 10 - 5 - 2 - 1
// 1 - 0.5 - 0.25 - 0.10 - 0.05 - 0.01
#include <stdio.h>

int main(void) {

    double n;   scanf("%lf", &n);
    n *= 100;

    //notas
    printf("NOTAS:\n");

    int notas = (int)n/10000;
    printf("%d nota(s) de R$ 100.00\n", notas);
    n -= notas *10000;

    notas = (int)n/5000;
    printf("%d nota(s) de R$ 50.00\n", notas);
    n -= notas *5000;

    notas = (int)n/2000;
    printf("%d nota(s) de R$ 20.00\n", notas);
    n -= notas *2000;

    notas = (int)n/1000;
    printf("%d nota(s) de R$ 10.00\n", notas);
    n -= notas *1000;

    notas = (int)n/500;
    printf("%d nota(s) de R$ 5.00\n", notas);
    n -= notas *500;

    notas = (int)n/200;
    printf("%d nota(s) de R$ 2.00\n", notas);
    n -= notas *200;

    //moedas
    printf("MOEDAS:\n");

    int moedas = (int)n/100;
    printf("%d moeda(s) de R$ 1.00\n", moedas);
    n -= moedas *100;

    moedas = (int)n/50;
    printf("%d moeda(s) de R$ 0.50\n", moedas);
    n -= moedas *50;

    moedas = (int)n/25;
    printf("%d moeda(s) de R$ 0.25\n", moedas);
    n -= moedas *25;

    moedas = (int)n/10;
    printf("%d moeda(s) de R$ 0.10\n", moedas);
    n -= moedas *10;

    moedas = (int)n/5;
    printf("%d moeda(s) de R$ 0.05\n", moedas);
    n -= moedas *5;

    moedas = (int)n;
    printf("%d moeda(s) de R$ 0.01\n", moedas);

    return 0;
}