// 1010 - Cálculo Simples
#include <iostream>
#include <iomanip>

int main(void) {

    int codigo, qt;
    double valorUni, total = 0;

    for(int i = 0; i < 2; i++) {
        std::cin>>codigo>>qt>>valorUni;

        total += qt*valorUni;
    }

    std::cout<<std::fixed<<std::setprecision(2);

    std::cout<<"VALOR A PAGAR: R$ "<<total<<std::endl;
}