// 1008 - Salário
#include <iostream>
#include <iomanip>

int main(void) {

    int num, qtHoras;
    double valorHora;

    std::cin>>num>>qtHoras>>valorHora;

    std::cout<<std::fixed<<std::setprecision(2);

    std::cout<<"NUMBER = "<<num<<std::endl<<"SALARY = U$ "<<qtHoras*valorHora<<std::endl;

}