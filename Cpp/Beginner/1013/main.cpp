#include <iostream>
using namespace std;

int main(void) {

    int a, b, c, greatest;
    cin >> a >> b >> c;

    greatest = a;
        if(b > a && b > c) greatest = b;
        else if(c > a && c > b)greatest = c;

    cout << greatest << " eh o maior" << endl;
}