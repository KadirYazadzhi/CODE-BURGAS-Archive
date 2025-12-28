#include <iostream>

using namespace std;

int main() {
    long long A, B, C, D, x;

    if (!(cin >> A >> B >> C >> D >> x)) return 0;

    long long numerator = A * x + B;
    long long denominator = C * x + D;

    if (denominator == 0) {
        cout << "ZERO ERROR" << endl;
        return 0;
    }

    if (numerator % denominator != 0) {
        cout << "NAN ERROR" << endl;
        return 0;
    }

    long long V = numerator / denominator;
    cout << V << " km/h" << endl;

    return 0;
}
