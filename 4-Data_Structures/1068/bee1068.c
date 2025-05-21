// 1068 - Balanço Parênteses I
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool parenteses(char* str, int n) {

    int paren = 0;

    for(int i = 0; i < n-1 && paren != -1; i++) {
        if(str[i] == '(') paren++;
        else if(str[i] == ')') paren--;
    }

    return (paren != 0) ? false : true;
}

int main(void) {

    char input[1000];

    while(fgets(input, 1000, stdin) != NULL) {
        int n = strlen(input);

        if(parenteses(input, n)) printf("correct\n");
        else printf("incorrect\n");
    }

    return 0;
}