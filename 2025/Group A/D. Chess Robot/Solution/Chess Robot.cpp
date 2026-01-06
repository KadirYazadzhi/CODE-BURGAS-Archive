#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct Node {
    int x, y, dist;
};

bool isValid(int x, int y) {
    return (x >= 1 && x <= 8 && y >= 1 && y <= 8);
}

int solveBFS(int targetX, int targetY) {
    int startX = 1, startY = 1;

    if (startX == targetX && startY == targetY) return 0;

    bool visited[9][9] = {false};

    int dx[] = {1, 1, -1, -1, 2, 2, -2, -2};
    int dy[] = {2, -2, 2, -2, 1, -1, 1, -1};

    queue<Node> q;
    q.push({startX, startY, 0});
    visited[startX][startY] = true;

    while (!q.empty()) {
        Node curr = q.front();
        q.pop();

        for (int i = 0; i < 8; i++) {
            int nextX = curr.x + dx[i];
            int nextY = curr.y + dy[i];

            if (isValid(nextX, nextY) && !visited[nextX][nextY]) {
                if (nextX == targetX && nextY == targetY) {
                    return curr.dist + 1;
                }

                visited[nextX][nextY] = true;
                q.push({nextX, nextY, curr.dist + 1});
            }
        }
    }

    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cin >> x >> y;
    cout << solveBFS(x, y) << endl;

    return 0;
}
