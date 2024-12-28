#include <iostream>
using namespace std;

int main(void) {

    int input, total, hundred, fifty, twenty, ten, five, two, one;
    cin >> input;
    total = input;

    hundred = total / 100;
        total %= 100;
    fifty = total / 50;
        total %= 50;
    twenty = total / 20;
        total %= 20;
    ten = total / 10;
        total %= 10;
    five = total / 5;
        total %= 5;
    two = total / 2;
        total %= 2;
    one = total;

    cout << input << endl;
    cout << hundred << " nota(s) de R$ 100,00" << endl;
    cout << fifty << " nota(s) de R$ 50,00" << endl;
    cout << twenty << " nota(s) de R$ 20,00" << endl;
    cout << ten << " nota(s) de R$ 10,00" << endl;
    cout << five << " nota(s) de R$ 5,00" << endl;
    cout << two << " nota(s) de R$ 2,00" << endl;
    cout << one << " nota(s) de R$ 1,00" << endl;

}