// 1110 - Jogando Cartas Fora
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct carta {
    int num;
    struct carta* ant;
    struct carta* prox;
} Carta;

typedef struct {
    Carta* topo;
    Carta* fim;
} Baralho;

void construirBaralho(Baralho* baralho, int x) {

    Carta* aux = (Carta*)malloc(sizeof(Carta));
    aux->num = x;
    aux->ant = NULL;
    aux->prox = NULL;

    if(baralho->topo == NULL) {
        baralho->topo = aux;
        baralho->fim = aux;
    }
    else {
        baralho->fim->prox = aux;
        aux->ant = baralho->fim;
        baralho->fim = aux;
    }
}

int removerCarta(Baralho* baralho) {

    if(baralho->topo == NULL) {
        printf("Baralho Vazio!\n");
        return -1;
    }

    Carta* aux = baralho->topo;

    int removido = aux->num;
    baralho->topo = baralho->topo->prox;

    if(baralho->topo == NULL) {
        baralho->fim = NULL;
    }
    else {
        baralho->topo->ant = NULL;
    }

    free(aux);
    return removido;
}

void inserirCarta(Baralho* baralho) {

    Carta* aux = baralho->topo;

    baralho->topo = baralho->topo->prox;
    baralho->topo->ant = NULL;

    aux->ant = baralho->fim;
    aux->prox = NULL;

    baralho->fim->prox = aux;
    baralho->fim = aux;

    free(aux);
}

void mostrarBaralho(Baralho *baralho) {
    Carta *aux = baralho->topo;
    while(aux != NULL) {
        printf("%d ", aux->num);
        aux = aux->prox;
    }
    printf("\n");
}


int main(void) {

    while(scanf("%d", &n) && n != 0) {

        Baralho baralho;
            baralho->topo = NULL;
            baralho->fim = NULL;

        for (int i = 0; i < n; i++) {
            construirBaralho(&baralho, i + 1); // cartas de 1 até n
        }
            

        int descartadas[n-1];
        int tam = 0;

        while(baralho->topo->prox != NULL) {
            descartadas[tam++] = removerCarta(&baralho);
            inserirCarta(&baralho);
        }

        printf("Discarded cards: ");
        for(int i = 0; i < tam-1; i++) {
            printf("%d, ", descartadas[i]);
        }
        printf("&d\n", descartadas[tam-1]);

        printf("Remaining card: %d\n", baralho.topo->num);
    }

    return 0;
}