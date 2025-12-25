#include <iostream>

using namespace std;

void solve() {
    int a, y;
    cin >> a >> y;

    int j = 1;
    for (int i = a + 1; i <= a + y; i++) {
        if (i % j == 0) cout << i << " ";

        j++;
    }
}

int main() {
    solve();

    return 0;
}
