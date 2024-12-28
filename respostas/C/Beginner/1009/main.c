#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    char *name = (char*) malloc(sizeof(char) * 15);
    scanf(" %[^\n]", name);
    
    double fixedSalary, sales, salary;
    scanf("%lf%lf", &fixedSalary, &sales);
    
    salary = fixedSalary + sales*0.15;
    printf("TOTAL = R$ %.2f\n", salary);
 
    return 0;
}