#include <iostream>

using namespace std;

void solve() {
    int  P, Q, R, S;

    cin >> P >> Q >> R >> S;

    int total = P * 1 + Q * 2 + R * 3 + S * 4;

    if (total % 2 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) solve();

    return 0;
}
