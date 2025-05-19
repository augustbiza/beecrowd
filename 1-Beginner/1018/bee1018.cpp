// 1018 - Cédulas
// 100 - 50 - 20 - 10 - 5 - 2 - 1
#include <iostream>

int main(void) {

    int n; std::cin>>n;

    std::cout<<n<<std::endl;

    int notas = n/100;
    std::cout<<notas<<" nota(s) de R$ 100,00"<<std::endl;  n -= notas*100;

    notas = n/50;
    std::cout<<notas<<" nota(s) de R$ 50,00"<<std::endl;  n -= notas*50;

    notas = n/20;
    std::cout<<notas<<" nota(s) de R$ 20,00"<<std::endl;  n -= notas*20;

    notas = n/10;
    std::cout<<notas<<" nota(s) de R$ 10,00"<<std::endl;  n -= notas*10;

    notas = n/5;
    std::cout<<notas<<" nota(s) de R$ 5,00"<<std::endl;  n -= notas*5;

    notas = n/2;
    std::cout<<notas<<" nota(s) de R$ 2,00"<<std::endl;  n -= notas*2;

    notas = n;
    std::cout<<notas<<" nota(s) de R$ 1,00"<<std::endl;
}