// 2729 - Shopping List
#include <stdio.h>
#include <string.h>

int main(void) {

    int n; scanf("%d", &n);

    for(; n > 0; n--) {

        char input[1000]; fgets(input, 1000, stdin);
        input[strcspn(input, "\n")] = '\0';
        
        char* lista[20];
    }
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LINHA 1000
#define MAX_PALAVRAS 100
#define MAX_TAMANHO_PALAVRA 100

int main() {
    char linha[MAX_LINHA];
    char *palavras[MAX_PALAVRAS]; // vetor de ponteiros para palavras
    int total = 0;

    printf("Digite uma linha com palavras separadas por espaço:\n");
    fgets(linha, sizeof(linha), stdin);

    // Remove o '\n' final, se existir
    linha[strcspn(linha, "\n")] = 0;

    // Quebra a linha em palavras
    char *token = strtok(linha, " ");
    while (token != NULL && total < MAX_PALAVRAS) {
        // Aloca espaço para a palavra e copia
        palavras[total] = malloc(strlen(token) + 1);
        if (palavras[total] == NULL) {
            fprintf(stderr, "Erro de alocação\n");
            return 1;
        }
        strcpy(palavras[total], token);
        total++;

        token = strtok(NULL, " ");
    }

    // Exibe as palavras
    printf("\nPalavras separadas:\n");
    for (int i = 0; i < total; i++) {
        printf("%s\n", palavras[i]);
    }

    // Libera memória alocada
    for (int i = 0; i < total; i++) {
        free(palavras[i]);
    }

    return 0;
}

*/