// 1091 - Divisão da Nlogônia
#include <stdio.h>

int main(void) {

    int n;
    
    do{

        scanf("%d", &n);

        if(n != 0) {

            int pX, pY;
            scanf("%d%d", &pX, &pY);

            for(int i = 0; i < n; i++) {

                int rX, rY;
                scanf("%d%d", &rX, &rY);
    
                if(rX == pX || rY == pY) printf("divisa\n");
                else if(rX > pX) {
                    if(rY > pY) printf("NE\n");
                    else printf("SE\n");
                } else {
                    if(rY > pY) printf("NO\n");
                    else printf("SO\n");
                }
            }
        }

    }while(n != 0);

    return 0;
}