#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

const double INF = numeric_limits<double>::max();

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<vector<pair<int, double>>> adj(n + 1);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            double dist;
            cin >> dist;
            if (dist > 0) {
                adj[i].push_back({j, dist});
            }
        }
    }

    int start, end;
    cin >> start >> end;

    double price_per_km;
    cin >> price_per_km;

    if (start == end) {
        cout << 0 << endl;
        return 0;
    }

    vector<double> min_dist(n + 1, INF);
    priority_queue<pair<double, int>, vector<pair<double, int>>, greater<pair<double, int>>> pq;

    min_dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        double d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (d > min_dist[u]) continue;

        for (auto& edge : adj[u]) {
            int v = edge.first;
            double weight = edge.second;

            if (min_dist[u] + weight < min_dist[v]) {
                min_dist[v] = min_dist[u] + weight;
                pq.push({min_dist[v], v});
            }
        }
    }

    if (min_dist[end] == INF) {
        cout << 0 << endl;
    } else {
        cout << min_dist[end] * price_per_km << endl;
    }

    return 0;
}