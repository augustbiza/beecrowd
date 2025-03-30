// 1006 - Média 2
#include <iostream>
#include <iomanip>

int main(void) {

    double a, b, c, media;

    std::cin>>a>>b>>c;

    media = ((a*2)+(b*3)+(c*5))/10;

    std::cout<<std::fixed<<std::setprecision(1);

    std::cout<<"MEDIA = "<<media<<std::endl;
}