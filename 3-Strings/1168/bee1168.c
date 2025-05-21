// 1168 - LED
#include <stdio.h>
#include <string.h>

int qtLeds(char painel) {

    int qt = 0;

        switch(painel) {
            case '0': qt = 6; break;
            case '1': qt = 2; break;
            case '2': qt = 5; break;
            case '3': qt = 5; break;
            case '4': qt = 4; break;
            case '5': qt = 5; break;
            case '6': qt = 6; break;
            case '7': qt = 3; break;
            case '8': qt = 7; break;
            case '9': qt = 6; break;
        }

        return qt;
}

int main(void) {

    int n;
    scanf("%d", &n);

    for(; n > 0; n--) {

        char painel[100];
        scanf("%s", painel);

        int leds = 0;

        for(int i = 0; i < strlen(painel); i++) {

            leds += qtLeds(painel[i]);
        }

        printf("%d leds\n", leds);
    }

    return 0;
}