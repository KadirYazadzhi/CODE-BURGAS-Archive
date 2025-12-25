#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, p;
        cin >> n >> p;

        int socks = n + ((n - 1) / (p - 1));
        cout << socks << endl;
    }

    return 0;
}
