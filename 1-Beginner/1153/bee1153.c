// 1153 - Simple Factorial
#include <stdio.h>
 
int main(void) {
 
    unsigned long long n; scanf("%llu", &n);
    
    for(int i = n-1; i > 1; i--) n *= i;
    
    printf("%llu\n", n);
 
    return 0;
}