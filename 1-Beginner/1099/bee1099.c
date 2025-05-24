// 1099 - Soma de Ímpares Consecutivos II
#include <stdio.h>

int main(void) {

    int n; scanf("%d", &n);
    for(; n > 0; n--) {

        int x, y; scanf("%d%d", &x, &y);
        int min = x, max = y; 
            if(x > y) {
                min = y; max = x;
            }
            min++;
        
        int sum = 0;
       
        for(; min < max; min++) if(min % 2 != 0) sum += min;

        printf("%d\n", sum);
    }

    return 0;
}