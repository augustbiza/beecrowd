#include <stdio.h>

int main(void) {

    float input;
    scanf("%f", &input);
        //converter notas para centavos, pois em C '%' é usado apenas para inteiros
    int total = (int)(input*100 + 0.5); // +0.5 é para arredondar para cima        

    int n100, n50, n20, n10, n5, n2, c100, c50, c25, c10, c5, c1;

    //banknotes
    n100 = total/10000;     //n100 = 57673 / 10000 --> n100 = 5 (notas)
        total %= 10000;     //total = resto de 57673 / 10000 --> total = 7673

    n50 = total/5000;       //n50 = 7673 / 5000 --> n50 = 1(notas)
        total %= 5000;      //total = resto de 7673 / 5000 --> total = 2673
    
    n20 = total/2000;       //n20 = 2673 / 2000 ---> n20 = 1(notas)
        total %= 2000;      //total = resto de 2673 / 2000 --> total = 673
    
    n10 = total/1000;       //n10 = 673 / 1000 --> n10 = 0(notas)
        total %= 1000;      //total = resto de 673 / 1000 --> total = 673

    n5 = total/500;         //n5 = 673 / 500 --> n5 = 1(notas)
        total %= 500;       //total = resto de 673 / 500 --> total = 173

    n2 = total/200;         //n2 = 173 / 200 --> n2 = 0(notas)
        total %= 200;       //total = resto de 173 / 200 --> total = 173

    //cents
    c100 = total/100;       //c100 = 173 / 100 --> c100 = 1(moedas)
        total %= 100;       //total = resto de 173 / 100 --> total = 73

    c50 = total/50;         //c50 = 73 / 50 --> c50 = 1(moedas)
        total %= 50;        //total = resto de 73 / 50 -- > total = 23

    c25 = total/25;         //c25 = 23 / 25 --> c25 = 0(moedas)
        total %= 25;        //total = resto de 23 /25 -- > total = 23

    c10 = total/10;         //c10 = 23 / 10 --> c10 = 2(moedas)
        total %= 10;        //total = resto de 23 /10 -- > total = 3

    c5 = total/5;           //c5 = 3 / 5 --> c5 = 0(moedas)
        total %= 5;         //total = resto de 3 / 5 -- > total = 3

    c1 = total;             //c1 = 3(moedas)

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", c100);
    printf("%d moeda(s) de R$ 0.50\n", c50);
    printf("%d moeda(s) de R$ 0.25\n", c25);
    printf("%d moeda(s) de R$ 0.10\n", c10);
    printf("%d moeda(s) de R$ 0.50\n", c5);
    printf("%d moeda(s) de R$ 0.01\n", c1);

    return 0;
}