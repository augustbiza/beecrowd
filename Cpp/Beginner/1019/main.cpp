#include <iostream>
using namespace std;

int main(void) {

    int seconds, minutes, hours;
    cin >> seconds;                 //seconds = 556

    hours = seconds / 3600;         // hours = (int)556 / 3600 --> hours = 0
        seconds %= 3600;            // seconds = resto de 556/3600 --> seconds = 556
    minutes = seconds / 60;         // minutes = (int)556 / 60 --> minutes = 6
        seconds %= 60;              // seconds = resto de 556 / 60 --> seconds = 16

    cout << hours << ":" << minutes << ":" << seconds << endl;
}