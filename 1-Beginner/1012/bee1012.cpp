// 1012 - Área
#include <iostream>
#include <iomanip>
#include <cmath>

int main(void) {

    double a, b, c;
    std::cin>>a>>b>>c;

    std::cout<<std::fixed<<std::setprecision(3);

    std::cout<<"TRIANGULO: "<<(a*c)/2<<std::endl;
    std::cout<<"CIRCULO: "<< 3.14159 * pow(c, 2)<<std::endl;
    std::cout<<"TRAPEZIO: "<< (a+b)*c/2<<std::endl;
    std::cout<<"QUADRADO: "<< pow(b, 2)<<std::endl;
    std::cout<<"RETANGULO: "<< a*b<<std::endl;
    
}