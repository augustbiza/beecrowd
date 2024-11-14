#include <stdio.h>
#include <math.h>
 
int main() {
 
    double radius, volume;
    scanf("%lf", &radius);
    
    volume = (4/3.0) * 3.14159 * pow(radius, 3);
    printf("VOLUME = %.3lf\n", volume);
 
    return 0;
}