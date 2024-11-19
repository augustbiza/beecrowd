#include <stdio.h>

int main(void) {

    //12km/L

    int hours, speed, distance;
    scanf("%d%d", &hours, &speed);

    distance = hours * speed;

    float liters = (float)distance/12;
    printf("%.3f\n", liters);
    return 0;
}