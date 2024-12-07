#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {

    int hours, speed;
    cin >> hours >> speed;

    float liters = (float)(hours * speed) / 12;

    cout << fixed <<setprecision(3);
    cout << liters << endl;
}