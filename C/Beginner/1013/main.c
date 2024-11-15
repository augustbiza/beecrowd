#include <stdio.h>
 
int main() {
 
    int a, b, c;
    int maior;
    scanf("%d%d%d", &a, &b, &c);
    
    if(b > a && b > c) maior = b;
    else if(c > a && c > b) maior = c;
    else maior = a;

    printf("%d eh o maior\n", maior);
 
    return 0;
}