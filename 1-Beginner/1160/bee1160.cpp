// 1160 - Crescimento Populacional
#include <iostream>

int main(void) {

    int n;
    std::cin>>n;

    while(n > 0) {

        int pa, pb;
        double ga, gb;
        std::cin>>pa>>pb>>ga>>gb;
    
        ga /= 100;
        ga += 1;
        gb /= 100;
        gb += 1;
    
        int ano = 0;
        bool maisDeCem = false;
    
        while(pa <= pb && !maisDeCem) {
    
            pa *= ga;
            pb *= gb;
    
            ano++;
    
            if(ano > 100) maisDeCem = true;
        }
    
        if(maisDeCem) std::cout<<"Mais de 1 seculo."<<std::endl;
        else std::cout<<ano<<" anos."<<std::endl;

        n--;
    }

    return 0;
}