// 1005 - Média 1
#include <iostream>
#include <iomanip>

int main(void) {

    double a, b, media;

    std::cin>>a>>b;

    media = ((a*3.5) + (b*7.5))/11;

    std::cout<<std::fixed<<std::setprecision(5);
    std::cout<<"MEDIA = "<<media<<std::endl;
}