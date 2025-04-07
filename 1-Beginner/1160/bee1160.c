// 1160 - Crescimento Populacional
#include <stdio.h>
#include <stdbool.h>

int main(void) {

    int n;
    scanf("%d", &n);

    while(n > 0) {

        int pa, pb;
        double ga, gb;
        scanf("%d%d%lf%lf", &pa, &pb, &ga, &gb);
    
        ga /= 100;
        ga += 1;
        gb /= 100;
        gb += 1;
    
        int ano = 0;
        bool maisDeCem = false;
    
        while(pa <= pb && !maisDeCem) {
    
            pa *= ga;
            pb *= gb;
    
            ano++;
    
            if(ano > 100) maisDeCem = true;
        }
    
        if(maisDeCem) printf("Mais de 1 seculo.\n");
        else printf("%d anos.\n", ano);

        n--;
    }

    return 0;
}