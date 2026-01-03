#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int n, m;
char grid[15][15];
bool used[15][15];
vector<string> keywords;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

bool findPath(int r, int c, const string& word, int idx) {
    if (idx == word.length()) return true;

    for (int i = 0; i < 4; i++) {
        int nr = r + dx[i];
        int nc = c + dy[i];

        if (nr >= 0 && nr < n && nc >= 0 && nc < n && !used[nr][nc] && grid[nr][nc] == word[idx]) {
            used[nr][nc] = true;
            if (findPath(nr, nc, word, idx + 1)) return true;
            used[nr][nc] = false;
        }
    }
    return false;
}

bool solve(int wordIdx) {
    if (wordIdx == m) return true;

    string target = keywords[wordIdx];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!used[i][j] && grid[i][j] == target[0]) {
                used[i][j] = true;
                if (findPath(i, j, target, 1)) {
                    if (solve(wordIdx + 1)) return true;
                }
                used[i][j] = false;
            }
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    if (!(cin >> n >> m)) return 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
            used[i][j] = false;
        }
    }

    keywords.resize(m);
    for (int i = 0; i < m; i++) cin >> keywords[i];

    solve(0);

    string remaining = "";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!used[i][j]) remaining += grid[i][j];
        }
    }

    sort(remaining.begin(), remaining.end());
    cout << remaining << endl;

    return 0;
}