#include <iostream>

using namespace std;

int main() {
    int testMonth, day, month, grade;

    cin >> day >> month;
    cin >> testMonth >> grade;

    if (testMonth == month && grade < 6) grade++;

    cout << grade << endl;

    return 0;
}
