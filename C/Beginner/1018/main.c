#include <stdio.h>

int main(void) {

    int cem, cinq, vinte, dez, cinco, dois, um, qt;
    scanf("%d", &qt);   //576
    int aux = qt;

    cem = qt / 100;     //cem = (int)576/100 --> cem = 5
    qt %= 100;          //qt = 76 (resto da divisao 576/100)

    cinq = qt / 50;     //cinq = (int)76/50 --> cinq = 1
    qt %= 50;           //qt = 26

    vinte = qt / 20;    //vinte = 26/20 --> vinte = 1
    qt %= 20;           //qt = 6

    dez = qt / 10;      //dez = 6/10 -> dez = 0
    qt %= 10;           //qt = 6

    cinco = qt / 5;     //cinco = 6/5 --> cinco = 1
    qt %= 5;            //qt = 1

    dois = qt / 2;      //dois = 1/2 --> dois = 0
    qt %= 2;            //qt = 1

    um = qt;            //um = 1
  
    printf("%d\n", aux);
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinq);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);

    return 0;
}