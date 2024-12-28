#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {

    int distance;
    cin >> distance;

    float fuel;
    cin >> fuel;

    cout << fixed << setprecision(3);
    cout << distance/fuel << " km/l" << endl;

}