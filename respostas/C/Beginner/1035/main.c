#include <stdio.h>

int main(void) {

    int a, b, c ,d;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if((a % 2 == 0) && (c > 0 && d > 0) && (c + d > a +b) && (b > c && d > a)) printf("Valores aceitos\n");
    else printf("Valores nao aceitos\n");

    return 0;
}