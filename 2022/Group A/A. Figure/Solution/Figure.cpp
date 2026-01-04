#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

const int INF = 1e9;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<string> grid(N);
    for (int i = 0; i < N; i++) cin >> grid[i];

    vector<vector<int>> f(N, vector<int>(M, INF));
    for (int r = 0; r < N; r++) {
        for (int c = 0; c < M; c++) {
            if (grid[r][c] == '#') f[r][c] = 0;
        }
    }

    for (int r = 0; r < N; r++) {
        for (int c = 0; c < M; c++) {
            if (r > 0) f[r][c] = min(f[r][c], f[r - 1][c] + 1);
            if (c > 0) f[r][c] = min(f[r][c], f[r][c - 1] + 1);
        }
    }

    for (int r = N - 1; r >= 0; r--) {
        for (int c = M - 1; c >= 0; c--) {
            if (r < N - 1) f[r][c] = min(f[r][c], f[r + 1][c] + 1);
            if (c < M - 1) f[r][c] = min(f[r][c], f[r][c + 1] + 1);
        }
    }

    vector<vector<int>> d1(N + 2, vector<int>(M + 2, 0));
    vector<vector<int>> d2(N + 2, vector<int>(M + 2, 0));

    for (int r = 1; r <= N; r++) {
        for (int c = 1; c <= M; c++) {
            int isSharp = (grid[r - 1][c - 1] == '#');

            d1[r][c] = isSharp + d1[r - 1][c + 1];
            d2[r][c] = isSharp + d2[r - 1][c - 1];
        }
    }

    auto getSumD1 = [&](int r1, int c1, int r2, int c2) {
        if (r1 > r2) {
            swap(r1, r2);
            swap(c1, c2);
        }

        return d1[r2][c2] - d1[r1 - 1][c1 + 1];
    };

    auto getSumD2 = [&](int r1, int c1, int r2, int c2) {
        if (r1 > r2) {
            swap(r1, r2);
            swap(c1, c2);
        }

        return d2[r2][c2] - d2[r1 - 1][c1 - 1];
    };

    long long count = 0;
    for (int r = 1; r <= N; r++) {
        for (int c = 1; c <= M; c++) {
            int k = f[r - 1][c - 1];

            if (k > 0) {
                int topR = r - k, topC = c;
                int botR = r + k, botC = c;
                int leftR = r, leftC = c - k;
                int rightR = r, rightC = c + k;

                if (topR >= 1 && botR <= N && leftC >= 1 && rightC <= M) {
                    if (getSumD2(topR, topC, rightR, rightC) == k + 1 &&
                        getSumD1(rightR, rightC, botR, botC) == k + 1 &&
                        getSumD2(leftR, leftC, botR, botC) == k + 1 &&
                        getSumD1(topR, topC, leftR, leftC) == k + 1) {
                        count++;
                    }
                }
            }
        }
    }

    cout << count << "\n";

    return 0;
}
