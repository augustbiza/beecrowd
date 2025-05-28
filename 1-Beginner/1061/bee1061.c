// 1061 - Tempo de um Evento
#include <stdio.h>
#include <string.h>

int main(void) {

    int d1, h1, m1, s1, d2, h2, m2, s2;
    char lixo[5];

    char input[15]; 
    fgets(input, 15, stdin);
    input[strcspn(input, "\n")] = '\0';
    sscanf(input, "%s %d", lixo, &d1);

    fgets(input, 15, stdin);
    input[strcspn(input, "\n")] = '\0';
    sscanf(input, "%d %c %d %c %d", &h1, lixo, &m1, lixo, &s1);

    fgets(input, 15, stdin);
    input[strcspn(input, "\n")] = '\0';
    sscanf(input, "%s %d", lixo, &d2);

    fgets(input, 15, stdin);
    input[strcspn(input, "\n")] = '\0';
    sscanf(input, "%d %c %d %c %d", &h2, lixo, &m2, lixo, &s2);

    int inicioH = h1*3600 + m1*60 + s1;
    int fimH = h2*3600 + m2*60 + s2; 

    int dia, hora, min, seg;

    if(inicioH < fimH) {
        dia = d2 - d1;
        seg = fimH - inicioH;
        hora = seg/3600;   seg -= hora*3600;
        min = seg/60;      seg -= min*60;
    }
    else if(inicioH > fimH) {
        dia = d2 - d1 - 1;
        seg = 86400 - inicioH + fimH;
        hora = seg/3600;   seg -= hora*3600; 
        min = seg/60;      seg -= min*60;
    }
    else {
        dia = d2 - d1;
        hora = 0; min = 0; seg = 0;
    }

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dia, hora, min, seg);

    return 0;
}