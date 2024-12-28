#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void) {

    cout << fixed << setprecision(4);
    
    double radius;
    cin >> radius;

    cout << "A=" << 3.14159 * pow(radius, 2) << endl;
}