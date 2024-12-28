#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int code, quant;
    scanf("%d%d", &code, &quant);

    float *price = (float*)malloc(sizeof(int)*5);
    price[0] = 4;
    price[1] = 4.5;
    price[2] = 5;
    price[3] = 2;
    price[4] = 1.5;

    float total = price[code-1] * quant;

    printf("Total: R$ %.2f\n", total);

    return 0;
}