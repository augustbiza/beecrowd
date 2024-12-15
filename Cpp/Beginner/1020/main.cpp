#include <iostream>
using namespace std;

int main(void) {

    int days, months, years;
    cin >> days;

    years = days / 365;
    days %= 365;

    months = days / 30;
    days %= 30;

    cout << years << " ano(s)" << endl;
    cout << months << " mes(es)" << endl;
    cout << days << " dia(s)" << endl;

}