// 1151 - Fibonacci Fácil
#include <stdio.h>

int main(void) {

    int n1 = 0, n2 = 1, n3;
    printf("%d %d ", n1, n2);

    int qt; scanf("%d", &qt);
    for(; qt > 3; qt--) {

        n3 = n1+n2;
        printf("%d ", n3);

        n1 = n2; n2 = n3;
    }
    n3 = n1+n2; printf("%d\n", n3);

    return 0;
}