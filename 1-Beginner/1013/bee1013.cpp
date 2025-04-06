// 1013 - O Maior
#include <iostream>
#include <cmath>

int main(void) {

    int a, b, c, maior;
    std::cin>>a>>b>>c;

    maior = (a+b + abs(a-b))/2;
    maior = (maior+c + abs(maior-c))/2;

    std::cout<<maior<<" eh o maior"<<std::endl;
}