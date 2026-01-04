#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct State {
    long long mat = -2e18;
    int len = 0;
    int leveled = 0;
    int prevState = -1;
};

void solve() {
    long long D;
    cin >> D;

    vector<int> A;
    int val;
    while (cin >> val) A.push_back(val);

    int N = A.size();
    if (N == 0) return;

    vector<long long> v(N);
    for (int i = 0; i < N; i++) v[i] = (long long)A[i] + D;

    vector<vector<State>> dp(N, vector<State>(3));

    for (int i = 0; i < N; i++) {
        if (i == 0) {
            if (v[i] >= 0) dp[i][0] = {v[i], 1, 1, -1};
            dp[i][1] = {0, 1, 0, -1};
        }

        if (i > 0) {
            if (dp[i - 1][0].mat >= 0 && dp[i - 1][0].mat + v[i] >= 0) {
                long long m = dp[i - 1][0].mat + v[i];
                int l = dp[i - 1][0].len + 1;
                int lev = dp[i - 1][0].leveled + 1;

                if (m > dp[i][0].mat || (m == dp[i][0].mat && l > dp[i][0].len) || (m == dp[i][0].mat && l == dp[i][0].len && lev > dp[i][0].leveled)) {
                    dp[i][0] = {m, l, lev, 0};
                }
            }

            for (int s : {0, 1}) {
                if (dp[i - 1][s].mat >= 0) {
                    long long m = dp[i - 1][s].mat;
                    int l = dp[i - 1][s].len + 1;
                    int lev = dp[i - 1][s].leveled;

                    if (m > dp[i][1].mat || (m == dp[i][1].mat && l > dp[i][1].len) || (m == dp[i][1].mat && l == dp[i][1].len && lev > dp[i][1].leveled)) {
                        dp[i][1] = {m, l, lev, s};
                    }
                }
            }

            for (int s : {1, 2}) {
                if (dp[i - 1][s].mat >= 0 && dp[i - 1][s].mat + v[i] >= 0) {
                    long long m = dp[i - 1][s].mat + v[i];
                    int l = dp[i - 1][s].len + 1;
                    int lev = dp[i - 1][s].leveled + 1;

                    if (m > dp[i][2].mat || (m == dp[i][2].mat && l > dp[i][2].len) || (m == dp[i][2].mat && l == dp[i][2].len && lev > dp[i][2].leveled)) {
                        dp[i][2] = {m, l, lev, s};
                    }
                }
            }
        }
    }

    long long bestM = -1;
    int bestL = -1, bestLev = -1, endI = -1, endS = -1;

    for (int i = 0; i < N; i++) {
        for (int s : {0, 2}) {
            if (dp[i][s].mat > bestM || (dp[i][s].mat == bestM && dp[i][s].len > bestL) || (dp[i][s].mat == bestM && dp[i][s].len == bestL && dp[i][s].leveled > bestLev)) {
                bestM = dp[i][s].mat;
                bestL = dp[i][s].len;
                bestLev = dp[i][s].leveled;
                endI = i;
                endS = s;
            }
        }
    }

    if (bestM < 0) {
        cout << "NO RESOURCES" << "\n";
        return;
    }

    vector<pair<int, int>> path;
    int currI = endI;
    int currS = endS;

    while (currI >= 0 && currS != -1) {
        path.push_back(make_pair(currI, currS));
        currS = dp[currI][currS].prevState;
        currI--;
    }

    reverse(path.begin(), path.end());

    for (int i = 0; i < (int)path.size();) {
        if (path[i].second == 1) {
            int count = 0;

            while (i < (int)path.size() && path[i].second == 1) {
                count++;
                i++;
            }

            cout << "MOVE " << count * 100 << "\n";
        }
        else {
            int idx = path[i].first;

            if (v[idx] >= 0) cout << "DIG " << v[idx] << "\n";
            else cout << "BUILD " << -v[idx] << "\n";

            i++;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}