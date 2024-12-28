#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void) {

    double a, b, c, area;
    cin >> a >> b >> c;

    cout << fixed << setprecision(3);

    area = a * c / 2;
    cout << "TRIANGULO: " << area << endl;
    area = 3.14159 * pow(c, 2);
    cout << "CIRCULO: " << area << endl;
    area = (a + b) * c / 2;
    cout << "TRAPEZIO: " << area << endl;
    area = pow(b, 2);
    cout << "QUADRADO: " << area << endl;
    area = a * b;
    cout << "RETANGULO: " << area << endl;
}