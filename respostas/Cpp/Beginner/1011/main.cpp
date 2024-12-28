#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void) {

    double volumeSPhere, radius;
    cin >> radius;

    volumeSPhere = (4.0/3) * 3.14159 * pow(radius, 3);

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << volumeSPhere << endl;

}