#include <iostream>

using namespace std;

long long Sum(long long num) {
    if (num < 10) return num;
    else return num % 10 + Sum(num / 10);
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        long long r1, r2;
        cin >> r1 >> r2;

        while (r1 != r2) {
            if (r1 < r2) r1 += Sum(r1);
            else r2 += Sum(r2);
        }

        cout << r2 << endl;
    }

    return 0;
}
