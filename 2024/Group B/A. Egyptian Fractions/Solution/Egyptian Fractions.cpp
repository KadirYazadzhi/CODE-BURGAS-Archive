#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void printEgyptian(long long nr, long long dr) {
    if (dr == 0 || nr == 0) return;
    if (dr % nr == 0) {
        cout << "1/" << dr / nr;
        return;
    }
    if (nr > dr) {
        cout << nr / dr << " + ";
        printEgyptian(nr % dr, dr);
        return;
    }

    long long x = dr / nr + 1;
    cout << "1/" << x << " ";

    printEgyptian(nr * x - dr, dr * x);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long nr, dr;
    cin >> nr >> dr;
    printEgyptian(nr, dr);
    cout << endl;

    return 0;
}
