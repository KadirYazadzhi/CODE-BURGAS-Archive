#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int charToVal(char c) {
    if (c >= '0' && c <= '9') return c - '0';

    return c - 'A' + 10;
}

long long toDecimal(string s, int base) {
    long long result = 0;
    long long power = 1;

    for (int i = s.length() - 1; i >= 0; i--) {
        result += (long long)charToVal(s[i]) * power;

        if (i > 0) power *= base;
    }

    return result;
}

void solve() {
    string equation;
    cin >> equation;

    string xStr, yStr, zStr;
    size_t plusPos = equation.find('+');
    size_t equalPos = equation.find('=');

    xStr = equation.substr(0, plusPos);
    yStr = equation.substr(plusPos + 1, equalPos - plusPos - 1);
    zStr = equation.substr(equalPos + 1);

    int maxDigit = 0;
    for (char c : xStr) maxDigit = max(maxDigit, charToVal(c));
    for (char c : yStr) maxDigit = max(maxDigit, charToVal(c));
    for (char c : zStr) maxDigit = max(maxDigit, charToVal(c));

    int startM = max(2, maxDigit + 1);

    for (int m = startM; m <= 36; m++) {
        long long x = toDecimal(xStr, m);
        long long y = toDecimal(yStr, m);
        long long z = toDecimal(zStr, m);

        if (x + y == z) {
            cout << m << endl;
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n--) solve();

    return 0;
}