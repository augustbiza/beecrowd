// 1011 - Esfera
#include <iostream>
#include <iomanip>
#include <cmath>

int main(void) {

    double raio, volume;
    std::cin>>raio;

    volume = pow(raio, 3) * 3.14159 * ((double)4/3);

    std::cout<<std::fixed<<std::setprecision(3);

    std::cout<<"VOLUME = "<<volume<<std::endl;
}