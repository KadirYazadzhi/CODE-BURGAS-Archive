#include <iostream>
#include <vector>

using namespace std;

const int dr[] = {1, 0, -1, 0};
const int dc[] = {0, 1, 0, -1};
const char dirChar[] = {'D', 'R', 'U', 'L'};

void readMatrix(vector<vector<int>>& labyrinth) {
    for (int i = 0; i < labyrinth.size(); i++) {
        for (int j = 0; j < labyrinth[0].size(); j++) {
            cin >> labyrinth[i][j];
        }
    }
}

bool solve(int r, int c, vector<vector<int>>& labyrinth, vector<vector<bool>>& visited, string& path) {
    int n = labyrinth.size();
    int m = labyrinth[0].size();

    if (r == n - 1 && c == m - 1) return true;

    visited[r][c] = true;

    for (int i = 0; i < 4; i++) {
        int nextRow = r + dr[i];
        int nextCol = c + dc[i];

        if (nextRow >= 0 && nextRow < n && nextCol >= 0 && nextCol < m && labyrinth[nextRow][nextCol] == 1 && !visited[nextRow][nextCol]) {
            path += dirChar[i];

            if (solve(nextRow, nextCol, labyrinth, visited, path)) return true;

            path.pop_back();
        }
    }

    return false;
}

string findPath(vector<vector<int>>& labyrinth, vector<vector<bool>>& visited) {
    string path = "";

    if (labyrinth[0][0] == 0) return "NO SOLUTION";

    if (solve(0, 0, labyrinth, visited, path)) return path;
    else return "NO SOLUTION";

}

int main() {
    int n, m;

    cin >> n >> m;

    vector<vector<int>> labyrinth(n, vector<int>(m));
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    readMatrix(labyrinth);
    cout << findPath(labyrinth, visited) << endl;

    return 0;
}
