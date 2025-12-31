#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int INF = 1e9;

int countFactors(int n, int factor) {
    if (n == 0) return 1;

    int count = 0;
    while (n > 0 && n % factor == 0) {
        count++;
        n /= factor;
    }

    return count;
}

int solve() {
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    bool hasZero = false;
    int zeroRow = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];

            if (matrix[i][j] == 0) {
                hasZero = true;
                zeroRow = i;
            }
        }
    }

    auto getMinZeros = [&](int factor) {
        vector<vector<int>> dp(n, vector<int>(n, INF));

        if (matrix[0][0] == 0) dp[0][0] = 1;
        else dp[0][0] = countFactors(matrix[0][0], factor);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 && j == 0) continue;

                int currentFactors = (matrix[i][j] == 0) ? 1 : countFactors(matrix[i][j], factor);

                int fromTop = (i > 0) ? dp[i - 1][j] : INF;
                int fromLeft = (j > 0) ? dp[i][j - 1] : INF;

                dp[i][j] = min(fromTop, fromLeft) + currentFactors;
            }
        }

        return dp[n - 1][n - 1];
    };

    int min2 = getMinZeros(2);
    int min5 = getMinZeros(5);

    int result = min(min2, min5);

    if (hasZero) result = min(result, 1);

    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << solve() << endl;
    
    return 0;
}
