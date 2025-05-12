// 1091 - Divisão da Nlogônia
#include <iostream>

int main(void) {

    int n;
    
    do{

        std::cin>>n;

        if(n != 0) {

            int pX, pY;
            std::cin>>pX>>pY;

            for(int i = 0; i < n; i++) {

                int rX, rY;
                std::cin>>rX>>rY;
    
                if(rX == pX || rY == pY) std::cout<<"divisa"<<std::endl;
                else if(rX > pX) {
                    if(rY > pY) std::cout<<"NE"<<std::endl;
                    else std::cout<<"SE"<<std::endl;
                } else {
                    if(rY > pY) std::cout<<"NO"<<std::endl;
                    else std::cout<<"SO"<<std::endl;
                }
            }
        }

    }while(n != 0);
}