// 1017 - Gasto de Combustível
#include <iostream>
#include <iomanip>

int main(void) {

    //12km/L
    int horas, vel;
    std::cin>>horas>>vel;

    int distancia = horas*vel;

    double litros = (double)distancia/12;

    std::cout<<std::fixed<<std::setprecision(3);
    std::cout<<litros<<std::endl;
}