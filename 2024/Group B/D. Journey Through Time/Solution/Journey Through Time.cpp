#include <iostream>
#include <vector>

using namespace std;

bool visited[1001];
vector<int> adj[1001];
vector<int> path;
int N, M;

bool dfs(int current, int target) {
    visited[current] = true;
    path.push_back(current);

    if (current == target) return true;

    for (int next : adj[current]) {
        if (visited[next]) continue;

        if (dfs(next, target)) return true;
    }

    path.pop_back();
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if (dfs(1, N)) {
        cout << "TIME TRAVEL!" << endl;

        for (int i = 0; i < path.size(); ++i)
            cout << path[i] << (i == path.size() - 1 ? "" : " ");
        cout << endl;
    }
    else cout << "TIME TRAVEL NOT POSSIBLE!" << endl;

    return 0;
}
