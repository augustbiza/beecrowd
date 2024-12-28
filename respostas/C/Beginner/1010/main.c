#include <stdio.h>
 
int main() {
 
    double price, priceFinal = 0;
    int number, units, i = 0;
    
    while(i < 2) {
        
        scanf("%d%d%lf", &number, &units, &price);
        price *= units;
        
        priceFinal += price;
        
        i++;
    }
    
    printf("VALOR A PAGAR: R$ %.2lf\n", priceFinal);
 
    return 0;
}