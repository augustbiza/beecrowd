#include <stdio.h>
 
int main() {
 
    int days, months, years;
    scanf("%d", &days);
    
    years = days/365;       //a cada 365 dias da 1 ano
    days %= 365;
    
    months = days/30;       //a cada 30 dias da 1 mes
    days %= 30;
    
    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);
 
    return 0;
}