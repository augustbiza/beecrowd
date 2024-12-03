#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(void) {

    cout << fixed << setprecision(2);

    string name;
    getline(cin, name);

    double salary, sold;
    cin >> salary >> sold;

    salary += 0.15*sold;

    cout << name << endl;
    cout << "TOTAL = R$ " << salary << endl;
}