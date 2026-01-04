#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <queue>

using namespace std;

const int INF = 1e9;

int djikstra(int start, int end, int n, const vector<vector<pair<int, int>>> &adj) {
    if (start == end) return 0;

    vector<int> dist(n + 1, INF);
    dist[start] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (d > dist[u]) continue;
        if (u == end) return dist[u];

        for (auto& edge : adj[u]) {
            int v = edge.first;
            int w = edge.second;

            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    return -1;
}

void solve() {
    int n;
    cin >> n;

    map<string, int> cityMap;
    vector<vector<pair<int, int>>> adj(n + 1);

    for (int i = 1; i <= n; i++) {
        string cityName;
        cin >> cityName;
        cityMap[cityName] = i;

        int p;
        cin >> p;
        for (int j = 0; j < p; j++) {
            int neighbour, cost;
            cin >> neighbour >> cost;
            adj[i].push_back({neighbour, cost});
        }
    }

    int r;
    cin >> r;
    while (r--) {
        string startCity, endCity;
        cin >> startCity >> endCity;

        cout << djikstra(cityMap[startCity], cityMap[endCity], n, adj) << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s;
    cin >> s;
    while (s--) solve();

    return 0;
}
