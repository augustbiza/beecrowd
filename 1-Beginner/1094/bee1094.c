// 1094 - Experiências
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    
    int cobaias = 0, coelhos = 0, ratos = 0, sapos = 0;
    char input[10];
    int qt; char animal;
    
    int n; scanf("%d", &n); getchar();
    for(; n > 0; n--) {

        fgets(input, 10, stdin); input[strcspn(input, "\n")] = '\0';

        sscanf(input, "%d %c", &qt, &animal);
        animal = toupper(animal);

        cobaias += qt;
        if(animal == 'C') coelhos += qt;
        else if(animal == 'R') ratos += qt;
        else if(animal == 'S') sapos += qt;
        else qt += 0;
    }

    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", cobaias, coelhos, ratos, sapos);
    printf("Percentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n", ((double)coelhos/cobaias)*100, ((double)ratos/cobaias)*100, ((double)sapos/cobaias)*100);

    return 0;
}