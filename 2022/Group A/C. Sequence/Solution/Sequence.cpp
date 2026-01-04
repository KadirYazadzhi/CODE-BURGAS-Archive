#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> nums(n);
    long long totalXor = 0;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        totalXor ^= nums[i];
    }

    long long rightMostSetBit = totalXor & -totalXor;

    long long x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] & rightMostSetBit) x ^= nums[i];
        else y ^= nums[i];
    }

    if (x > y) swap(x, y);

    cout << x << " " << y << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
