// 1018 - Cédulas
// 100 - 50 - 20 - 10 - 5 - 2 - 1
#include <stdio.h>

int main(void) {

    int n; scanf("%d", &n);
    
    printf("%d\n", n);
    
    int notas = n/100;
    printf("%d nota(s) de R$ 100,00\n", notas); n -= notas*100;

    notas = n/50;
    printf("%d nota(s) de R$ 50,00\n", notas); n -= notas*50;

    notas = n/20;
    printf("%d nota(s) de R$ 20,00\n", notas); n -= notas*20;

    notas = n/10;
    printf("%d nota(s) de R$ 10,00\n", notas); n -= notas*10;

    notas = n/5;
    printf("%d nota(s) de R$ 5,00\n", notas); n -= notas*5;

    notas = n/2;
    printf("%d nota(s) de R$ 2,00\n", notas); n -= notas*2;

    notas = n;
    printf("%d nota(s) de R$ 1,00\n", notas);

    return 0;
}