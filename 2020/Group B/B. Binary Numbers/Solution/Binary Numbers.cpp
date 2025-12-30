#include <iostream>

using namespace std;

int Bits(int n) {
    int count = 0;

    while (n) {
        count += n & 1;
        n >>= 1;
    }

    return count;
}

int Diff(int x, int y) {
    if (x > y) return x - y;
    else if (y > x) return y - x;
    else return 0;
}

int main() {
    int n, m, next, number, diff = 1000;
    cin >> n >> m;

    int bits = Bits(m);

    for (int i = 1; i <= n; i++) {
        cin >> next;

        if (Diff(bits, diff) > Diff(bits, next)) {
            number = i;
            diff = next;
        }
    }

    cout << number << endl;
    return 0;
}
