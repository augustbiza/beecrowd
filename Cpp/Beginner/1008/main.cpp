#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {

    int code, workedHours;
    cin >> code >> workedHours;

    float salary, moneyHour;
    cin >> moneyHour;

    salary = workedHours * moneyHour;

    cout << fixed << setprecision(2);

    cout << "NUMBER = " << code << endl;
    cout << "SALARY = U$ " << salary << endl;

}
