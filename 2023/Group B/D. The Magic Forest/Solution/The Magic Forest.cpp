#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>

using namespace std;

void findSecretPath() {
    int N;
    cin >> N;

    map<int, vector<int>> adj;
    vector<pair<int, int>> edges;

    for (int i = 0; i < N; ++i) {
        int u, v;
        cin >> u >> v;

        edges.push_back({u, v});
    }

    int startNode, endNode;
    cin >> startNode >> endNode;

    for (auto& edge : edges) {
        if ((edge.first == startNode && edge.second == endNode) ||
            (edge.first == endNode && edge.second == startNode)) {
            continue;
        }
        adj[edge.first].push_back(edge.second);
        adj[edge.second].push_back(edge.first);
    }

    queue<int> q;
    map<int, int> parent;
    map<int, bool> visited;

    q.push(startNode);
    visited[startNode] = true;
    parent[startNode] = -1;

    bool found = false;
    while (!q.empty()) {
        int current = q.front();
        q.pop();

        if (current == endNode) {
            found = true;
            break;
        }

        sort(adj[current].begin(), adj[current].end());

        for (int neighbor : adj[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                parent[neighbor] = current;
                q.push(neighbor);
            }
        }
    }

    if (found) {
        vector<int> path;
        for (int v = endNode; v != -1; v = parent[v]) path.push_back(v);

        reverse(path.begin(), path.end());

        for (int i = 0; i < path.size(); ++i) cout << path[i] << (i == path.size() - 1 ? "" : " ");
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    findSecretPath();
    return 0;
}