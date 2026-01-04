#include <iostream>

using namespace std;

int sumDigits(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

void solve() {
    int R1;
    cin >> R1;

    bool found = false;

    int start = (R1 - 45 > 0) ? (R1 - 45) : 1;

    for (int y = start; y < R1; y++) {
        if (y + sumDigits(y) == R1) {
            found = true;
            break;
        }
    }

    if (found) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) solve();

    return 0;
}
