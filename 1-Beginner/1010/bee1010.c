// 1010 - Cálculo Simples
#include <stdio.h>

int main(void) {

    int codigo, qt;
    double valorUni, total = 0;

    for(int i = 0; i < 2; i++) {
        scanf("%d%d%lf", &codigo, &qt, &valorUni);

        total += qt*valorUni;
    }

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}