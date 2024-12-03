#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(void) {

    cout << fixed << setprecision(2);
    char name[10];
    scanf(" %[^\n]", name);

    double salary, sold;
    cin >> salary >> sold;

    salary += 0.15*sold;
    cout << "TOTAL = R$ " << salary << endl;
}