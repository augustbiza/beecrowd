// 1129 - Leitura Ótica
#include <iostream>

int* lerProva(int* prova, int n) {
    for(int i = 0; i < n; i++) scanf("%d", &prova[i]);
    return prova;
}

char corrigir(int* prova, int n) {

    char resp = '*';
    int qt = 0;

    for(int i = 0; i < n; i++) {
        
        if(prova[i] <= 127) {
            qt++;
            if(qt == 1) {
                resp = 'A' + i;
            }
        }
    }

    return (qt == 1) ? resp : '*';
}

int main(void) {

    int n;
    int* prova = (int*)malloc(sizeof(int)*5);
    char resp;

    do{

        std::cin>>n;

        if(n != 0) {

            for(int i = 0; i < n; i++) {

                
                prova = lerProva(prova, 5);
                resp = corrigir(prova, 5);
                
                std::cout<<resp<<std::endl;
            }
        }

    }while(n != 0);
}