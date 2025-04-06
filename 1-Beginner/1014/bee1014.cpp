// 1014 - Consumo
#include <iostream>
#include <iomanip>

int main(void) {

    int distancia;
    double combustivel;
    std::cin>>distancia>>combustivel;

    std::cout<<std::fixed<<std::setprecision(3);
    std::cout<<distancia/combustivel<<" km/l"<<std::endl;

}