// 1005 - Média 1
#include <stdio.h>

int main(void) {

    float a, b, media;
    scanf("%f%f", &a, &b);

    media = ((a*3.5) + (b*7.5))/11;

    printf("MEDIA = %.5f\n", media);

    return 0;
}