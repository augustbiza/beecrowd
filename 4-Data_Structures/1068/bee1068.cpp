// 1068 - Balanço Parênteses I
#include <iostream>
#include <string>

bool parenteses(const std::string& str) {
    
    int paren = 0;

    for(int i = 0; i < str.size() && paren != -1; i++) {
        if(str[i] == '(') paren++;
        else if(str[i] == ')') paren--;
    }

    return (paren != 0) ? false : true;
}

int main(void) {

    std::string input;

    while(std::getline(std::cin, input)) {

        if(parenteses(input)) std::cout<<"correct"<<std::endl;
        else std::cout<<"incorrect"<<std::endl;
    }
}