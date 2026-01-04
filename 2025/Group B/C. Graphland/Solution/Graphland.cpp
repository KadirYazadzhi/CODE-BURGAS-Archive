#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

const long long INF = numeric_limits<long long>::max();

struct Edge {
    int to;
    int weight;
};

struct Node {
    int id;
    long long dist;

    bool operator>(const Node& rhs) const {
        return dist > rhs.dist;
    }
};

void solve() {
    int N, M;
    cin >> N >> M;

    vector<vector<Edge>> adj(N + 1);
    for (int i = 0; i < M; i++) {
        int u, v, w;
        cin >> u >> v >> w;

        adj[u].push_back({v, w});
    }

    int startNode, endNode;
    cin >> startNode >> endNode;

    vector<long long> dist(N + 1, INF);
    dist[startNode] = 0;

    priority_queue<Node, vector<Node>, greater<Node>> pq;
    pq.push({startNode, 0});

    while (!pq.empty()) {
        Node current = pq.top();
        pq.pop();

        int u = current.id;
        long long d = current.dist;

        if (d > dist[u]) continue;
        if (u == endNode) break;

        for (const auto& edge : adj[u]) {
            if (dist[u] + edge.weight < dist[edge.to]) {
                dist[edge.to] = dist[u] + edge.weight;
                pq.push({edge.to, dist[edge.to]});
            }
        }
    }

    if (dist[endNode] == INF) cout << "NO SOLUTION" << endl;
    else cout << dist[endNode] << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
