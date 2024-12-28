#include <stdio.h>
 
int main() {
 
    int number, hourTotal;
    double hourCost, salary;
    
    scanf("%d%d%lf", &number, &hourTotal, &hourCost);
    
    salary = hourTotal * hourCost;
    
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", number, salary);
 
    return 0;
}