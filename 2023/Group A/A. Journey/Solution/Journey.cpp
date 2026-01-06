#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

const long long INF = 1e18;

void solve() {
    int vCount, S, T;
    cin >> vCount >> S >> T;

    vector<vector<pair<int, int>>> adj(vCount);
    int u, v, w;

    while (cin >> u >> v >> w) {
        if (u < vCount && v < vCount) {
            adj[u].push_back(make_pair(v, w));
        }
    }

    vector<long long> dist(vCount, INF);
    dist[S] = 0;

    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    pq.push(make_pair(0, S));

    while (!pq.empty()) {
        long long d = pq.top().first;
        int curr = pq.top().second;
        pq.pop();

        if (d > dist[curr]) continue;

        if (curr == T) break;

        for (auto& edge : adj[curr]) {
            int nextNode = edge.first;
            int weight = edge.second;

            if (dist[curr] + weight < dist[nextNode]) {
                dist[nextNode] = dist[curr] + weight;
                pq.push(make_pair(dist[nextNode], nextNode));
            }
        }
    }

    if (dist[T] == INF) return;

    cout << dist[T] << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
