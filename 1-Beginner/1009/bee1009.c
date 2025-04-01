// 1009 - Salário com Bônus
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char* nome = malloc(sizeof(char)*15);
    fgets(nome, 15, stdin);

    double salario, vendas;
    scanf("%lf%lf", &salario, &vendas);

    printf("TOTAL = R$ %.2f\n", salario + vendas*0.15);

    free(nome);

    return 0;
}