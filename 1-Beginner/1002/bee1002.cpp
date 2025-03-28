// 1002 - Área do Círculo
#include <iostream>
#include <cmath>
#include <iomanip>

int main(void) {

    std::cout<<std::fixed<<std::setprecision(4);

    double raio, areaCirculo;
    std::cin>>raio;

    areaCirculo = 3.14159 * pow(raio, 2);

    
    std::cout<<"A="<<areaCirculo<<std::endl;
}