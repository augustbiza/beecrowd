#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {

    int code, units;
    float price, total = 0;
    cin >> code >> units >> price;    
    total += price * units; 
    cin >> code >> units >> price;    
    total += price * units;

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total << endl;

}