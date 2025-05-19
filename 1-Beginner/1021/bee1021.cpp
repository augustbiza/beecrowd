// 1021 - Notas e Moedas
// 100 - 50 - 20 - 10 - 5 - 2 - 1
// 1 - 0.5 - 0.25 - 0.10 - 0.05 - 0.01
#include <iostream>

int main(void) {

    double n;   std::cin>>n;
    n *= 100;

    //notas
    std::cout<<"NOTAS:"<<std::endl;

    int notas = (int)n/10000;
    std::cout<<notas<<" nota(s) de R$ 100.00"<<std::endl;
    n -= notas *10000;

    notas = (int)n/5000;
    std::cout<<notas<<" nota(s) de R$ 50.00"<<std::endl;
    n -= notas *5000;

    notas = (int)n/2000;
    std::cout<<notas<<" nota(s) de R$ 20.00"<<std::endl;
    n -= notas *2000;

    notas = (int)n/1000;
    std::cout<<notas<<" nota(s) de R$ 10.00"<<std::endl;
    n -= notas *1000;

    notas = (int)n/500;
    std::cout<<notas<<" nota(s) de R$ 5.00"<<std::endl;
    n -= notas *500;

    notas = (int)n/200;
    std::cout<<notas<<" nota(s) de R$ 2.00"<<std::endl;
    n -= notas *200;

    //moedas
    std::cout<<"MOEDAS:"<<std::endl;

    int moedas = (int)n/100;
    std::cout<<moedas<<" moeda(s) de R$ 1.00"<<std::endl;
    n -= moedas *100;

    moedas = (int)n/50;
    std::cout<<moedas<<" moeda(s) de R$ 0.50"<<std::endl;
    n -= moedas *50;

    moedas = (int)n/25;
    std::cout<<moedas<<" moeda(s) de R$ 0.25"<<std::endl;
    n -= moedas *25;

    moedas = (int)n/10;
    std::cout<<moedas<<" moeda(s) de R$ 0.10"<<std::endl;
    n -= moedas *10;

    moedas = (int)n/5;
    std::cout<<moedas<<" moeda(s) de R$ 0.05"<<std::endl;
    n -= moedas *5;

    moedas = (int)n;
    std::cout<<moedas<<" moeda(s) de R$ 0.01"<<std::endl;
    
}