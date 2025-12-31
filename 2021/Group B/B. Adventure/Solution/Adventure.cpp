#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

const int INF = 1e9;

struct Edge {
    int to, cost;
};

struct CityPath {
    int dist;
    vector<int> path;
};

CityPath getCityPath(int n, const vector<vector<int>>& adj) {
    if (n == 0) return {0, {}};
    if (n == 1) return {0, {1}};

    vector<int> dist(n + 1, -1);
    vector<int> parent(n + 1, 0);
    queue<int> q;

    q.push(1);
    dist[1] = 0;

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        for (int u : adj[v]) {
            if (dist[u] == -1) {
                dist[u] = dist[v] + 1;
                parent[u] = v;
                q.push(u);
            }
        }
    }

    vector<int> path;
    for (int v = n; v != 0; v = parent[v]) path.push_back(v);
    reverse(path.begin(), path.end());

    return {dist[n], path};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int M, K;
    cin >> M >> K;

    vector<vector<Edge>> train_adj(M + 1);
    for (int i = 0; i < K; i++) {
        int u, v, t;
        cin >> u >> v >> t;

        train_adj[u].push_back({v, t});
    }

    vector<CityPath> city_data(M + 1);
    for (int i = 1; i <= M; i++) {
        int ni, ki;
        cin >> ni >> ki;

        vector<vector<int>> adj(ni + 1);
        for (int j = 0; j < ki; j++) {
            int u, v;
            cin >> u >> v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        city_data[i] = getCityPath(ni, adj);
    }

    priority_queue<pair<pair<int, int>, int>, vector<pair<pair<int, int>, int>>, greater<pair<pair<int, int>, int>>> pq;
    vector<int> min_cost(M + 1, INF);
    vector<int> min_walk(M + 1, INF);
    vector<int> parent_city(M + 1, 0);

    min_cost[1] = 0;
    min_walk[1] = city_data[1].dist;
    pq.push({{0, min_walk[1]}, 1});

    while (!pq.empty()) {
        int cur_c = pq.top().first.first;
        int cur_w = pq.top().first.second;
        int u = pq.top().second;

        pq.pop();

        if (cur_c > min_cost[u] || (cur_c == min_cost[u] && cur_w > min_walk[u])) continue;

        for (auto& edge : train_adj[u]) {
            int v = edge.to;
            int next_c = cur_c + edge.cost;
            int next_w = cur_w + city_data[v].dist;

            if (next_c < min_cost[v] || (next_c == min_cost[v] && next_w < min_walk[v])) {
                min_cost[v] = next_c;
                min_walk[v] = next_w;
                parent_city[v] = u;
                pq.push({{next_c, next_w}, v});
            }
        }
    }

    cout << min_cost[M] << endl;
    vector<int> route;

    for (int v = M; v != 0; v = parent_city[v]) route.push_back(v);
    reverse(route.begin(), route.end());

    for (int i = 0; i < route.size(); i++) cout << route[i] << (i == route.size() - 1 ? "" : " ");
    cout << endl;

    for (int c : route) {
        for (int i = 0; i < city_data[c].path.size(); i++) {
            cout << city_data[c].path[i] << (i == city_data[c].path.size() - 1 ? "" : " ");
        }

        cout << endl;
    }

    return 0;
}
