#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, n, sum = 0;
        cin >> x >> n;

        vector<int> megabytesPerMonth = vector<int>(n);

        for (int i = 0; i < n; i++) cin >> megabytesPerMonth[i];

        for (int i = 0; i < n; i++) sum += x + - megabytesPerMonth[i];
        sum += x;

        cout << sum << endl;
    }
    return 0;
}
