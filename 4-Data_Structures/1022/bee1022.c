// 1022 - TDA Racional
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {

    int k; scanf("%d", &k); getchar();

    for(; k > 0; k--) {

        char str[50];
        fgets(str, 50, stdin);
    
        str[strcspn(str, "\n")] = '\0';
    
        int n1, d1, n2, d2, n = 1, d = 1;
        char op1, op2, op;
    
        sscanf(str, "%d %c %d %c %d %c %d", &n1, &op1, &d1, &op, &n2, &op2, &d2);
    
        switch(op) {
            case '+':   d = d1*d2;
                        n = (d2*n1)+(d1*n2);
                        break;
    
            case '-':   d = d1*d2;
                        n = (d2*n1)-(d1*n2);
                        break;
    
            case '*':   d = d1*d2;
                        n = n1*n2;
                        break;
    
            case '/':   d = d1*n2;
                        n = n1*d2;
                        break;
        }
    
        printf("%d/%d = ", n, d);
    
        bool negativo = false;
        if(n < 0) {
            negativo = true;
            n *= -1;
        }
    
        int menor = n; if(d < n) menor = d;
    
        for(int i = menor; i > 1; i--) {
            if((n % i == 0) && (d % i == 0)) {
                n /= i;
                d /= i;
            }
        }
    
        if(negativo) n *= -1;
    
        printf("%d/%d\n", n, d);
    }

    return 0;
}