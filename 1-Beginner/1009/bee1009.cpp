// 1009 - Salário com Bônus
#include <iostream>
#include <iomanip>
#include <string>

int main(void) {

    std::string nome;
    std::getline(std::cin, nome);

    double salario, vendas;
    std::cin>>salario>>vendas;

    std::cout<<std::fixed<<std::setprecision(2);

    std::cout<<"TOTAL = R$ "<< salario + vendas*0.15<<std::endl;
}