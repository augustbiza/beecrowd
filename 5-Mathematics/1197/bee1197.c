// 1197 - Volta à Faculdade de Física
#include <stdio.h>

int main(void) {

    int v, t;
    while(scanf("%d%d", &v, &t) != EOF) {

        int s = 2*v*t;
        printf("%d\n", s);
    }
    
    return 0;
}