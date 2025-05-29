// 1176 - Fibonacci Array
#include <stdio.h>

int main(void) {

    unsigned long long n1 = 0, n2 = 1, n3;
    unsigned long long fibonacci[61];
    fibonacci[0] = n1; fibonacci[1] = n2;
    for(int i = 2; i < 61; i++) {

        n3 = n1+n2;
        fibonacci[i] = n3;
        
        n1 = n2; n2 = n3;
    }
    
    int casos; scanf("%d", &casos);
    for(int i = 0; i < casos; i++) {

        int p; scanf("%d", &p);

        printf("Fib(%d) = %llu\n", p, fibonacci[p]);
    }

    return 0;
}