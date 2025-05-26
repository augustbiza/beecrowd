// 1047 - Tempo de Jogo com Minutos
#include <stdio.h>

int main(void) {

    int input[4];
    for(int i = 0; i < 4; i++) scanf("%d", &input[i]);

    int minIn = input[0] * 60 + input[1], minFim = input[2] * 60 + input[3];
    int h = 0, m = 0;

    if(minFim > minIn) {
        h = (minFim - minIn)/60;
        m = (minFim - minIn) - 60*h;
    }
    else if(minFim < minIn) {
        h = (1440 - minIn + minFim)/60;
        m = (1440 - minIn + minFim) - 60*h;
    }
    else {
        h = 24; m = 0;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);

    return 0;
}