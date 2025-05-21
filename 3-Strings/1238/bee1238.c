// 1238 - Combinador
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* combinador(char* a, int tamA, char* b, int tamB) {

    char* res = (char*)malloc(sizeof(char)*(tamA+tamB+1));
    int p = 0, pA = 0, pB = 0;

    while(pA < tamA || pB < tamB) {

        if(pA < tamA) res[p++] = a[pA++];
        if(pB < tamB) res[p++] = b[pB++];
    }
    res[p] = '\0';

    return res;
}

int main(void) {

    int n; scanf("%d", &n);
    getchar();

    for(; n > 0; n--) {

        char input[1000];
        fgets(input, 1000, stdin);

        char a[1000], b[1000];
        sscanf(input, "%s %s", a, b);

        int tamA = strlen(a), tamB = strlen(b);

        char* res = combinador(a, tamA, b, tamB);

        printf("%s\n", res);
    }

    return 0;
}