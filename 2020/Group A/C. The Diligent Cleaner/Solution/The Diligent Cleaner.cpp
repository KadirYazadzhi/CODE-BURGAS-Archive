#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int N;
    cin >> N;

    const int MAX_HOURS = 20;

    vector<int> dp(MAX_HOURS + 1, 0);

    for (int i = 0; i < N; i++) {
        int h, m;
        cin >> h >> m;

        if (h > MAX_HOURS) continue;

        for (int j = MAX_HOURS; j >= h; j--) {
            if (dp[j - h] + m > dp[j]) {
                dp[j] = dp[j - h] + m;
            }
        }
    }

    cout << dp[MAX_HOURS] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
