#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, x, y;
        cin >> n;
        cin >> x >> y;

        pair<int, int> bestResult = {0, 0};
        for (int i = x; i <= y; i++) {
            int a = i % n;
            if (a >= bestResult.first) {
                bestResult.first = a;
                bestResult.second = i;
            }
        }

        cout << bestResult.second << endl;
    }

    return 0;
}
