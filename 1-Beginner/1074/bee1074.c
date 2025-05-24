// 1074 - Par ou Ímpar
#include <stdio.h>

int main(void) {
    
    int n; scanf("%d", &n);
    for(; n > 0; n--) {
        int x; scanf("%d", &x);
        
        if(x > 0) {
                if(x % 2 == 0) printf("EVEN POSITIVE\n");
                else printf("ODD POSITIVE\n");
            }
            else if(x< 0) {
                if(x % 2 == 0) printf("EVEN NEGATIVE\n");
                else printf("ODD NEGATIVE\n");
            }
            else printf("NULL\n");
    }
    
    return 0;
}