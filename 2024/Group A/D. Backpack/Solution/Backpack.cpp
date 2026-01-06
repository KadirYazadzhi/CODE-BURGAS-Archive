#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int W, N;
    cin >> W >> N;

    vector<long long> dp(W + 1, 0);

    for (int i = 0; i < N; ++i) {
        int weight;
        long long value;
        cin >> weight >> value;

        for (int j = W; j >= weight; --j) {
            dp[j] = max(dp[j], dp[j - weight] + value);
        }
    }

    cout << dp[W] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}