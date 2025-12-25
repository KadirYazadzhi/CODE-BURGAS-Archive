#include <iostream>
#include <limits.h>

using namespace std;

int charToNum(char c) {
    return c - '0';
}

void solve() {
    string num;
    cin >> num;

    int minSum = INT_MAX, maxSum = INT_MIN;
    for (int i = 0; i < num.length() - 1; i++) {
        if (charToNum(num[i]) + charToNum(num[i + 1]) > maxSum) maxSum = charToNum(num[i]) + charToNum(num[i + 1]);
        if (charToNum(num[i]) + charToNum(num[i + 1]) < minSum) minSum = charToNum(num[i]) + charToNum(num[i + 1]);
    }

    cout << minSum << ' ' << maxSum << endl;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        solve();
    }

    return 0;
}
