#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int code, quant;
    scanf("%d%d", &code, &quant);

    float total;

    switch(code){
        case 1: total = quant * 4; break;
        case 2: total = quant * 4.5; break;
        case 3: total = quant * 5; break;
        case 4: total = quant * 2; break;
        case 5: total = quant * 1.5;
    }

    printf("Total: R$ %.2f\n", total);

    return 0;
}