#include <stdio.h>

int main(void) {

    int distance;
    double fuel;
    scanf("%d%lf", &distance, &fuel);

    printf("%.3lf km/l\n", (double)distance/fuel);

    return 0;
}