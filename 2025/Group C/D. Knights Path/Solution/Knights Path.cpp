#include <iostream>
#include <vector>

using namespace std;

int dx[] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

bool solve(int x, int y, int moveCount, int n, vector<vector<int>>& board) {
    if (moveCount == n * n) return true;

    for (int i = 0; i < 8; i++) {
        int nextX = x + dx[i];
        int nextY = y + dy[i];

        if (nextX >= 0 && nextX < n && nextY >= 0 && nextY < n && board[nextX][nextY] == 0) {
            board[nextX][nextY] = moveCount + 1;

            if (solve(nextX, nextY, moveCount + 1, n, board)) return true;

            board[nextX][nextY] = 0;
        }
    }

    return false;
}

void findKnightPath(int x, int y, int n) {
    vector<vector<int>> board(n, vector<int>(n, 0));
    board[x][y] = 1;

    if (solve(x, y, 1, n, board)) {
        for (int move = 1; move <= n * n; move++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) if (board[i][j] == move) cout << i << " " << j << endl;
            }
        }
    }
    else cout << "NO SOLUTION" << endl;
}

int main() {
    int n, x, y;
    cin >> n;

    cin >> x >> y;

    findKnightPath(x, y, n);

    return 0;
}
