#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void markHearth(int startR, int startC, int R, int C, vector<vector<int>> &grid, vector<vector<bool>> &visited) {
    queue<pair<int, int>> q;
    q.push(make_pair(startR, startC));
    visited[startR][startC] = true;

    while (!q.empty()) {
        pair<int, int> curr = q.front();
        q.pop();

        for (int i = 0; i < 8; i++) {
            int nr = curr.first + dr[i];
            int nc = curr.second + dc[i];

            if (nr >= 0 && nr < R && nc >= 0 && nc < C && grid[nr][nc] == 1 && !visited[nr][nc]) {
                visited[nr][nc] = true;
                q.push(make_pair(nr, nc));
            }

        }
    }
}

void solve() {
    int R, C;
    cin >> R >> C;

    vector<vector<int>> grid(R, vector<int>(C));
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> grid[i][j];
        }
    }

    vector<vector<bool>> visited(R, vector<bool>(C, false));
    vector<pair<int, int>> results;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (grid[i][j] == 1 && !visited[i][j]) {
                results.push_back(make_pair(i, j));
                markHearth(i, j, R, C, grid, visited);
            }
        }
    }

    for (const auto& pos : results) cout << pos.first << " " << pos.second << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}
