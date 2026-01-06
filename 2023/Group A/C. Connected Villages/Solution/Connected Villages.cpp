#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge {
    int u, v, w;
};

bool compareEgdes(const Edge &a, const Edge &b) {
    return a.w < b.w;
}

struct DSU {
    vector<int> parent;

    DSU(int n) {
        parent.resize(n + 1);
        for (int i = 1; i <= n; i++) parent[i] = i;
    }

    int find(int i) {
        if (parent[i] == i) return i;
        return parent[i] = find(parent[i]);
    }

    bool unite(int i, int j) {
        int rootI = find(i);
        int rootJ = find(j);

        if (rootI != rootJ) {
            parent[rootI] = rootJ;
            return true;
        }

        return false;
    }
};

void solve() {
    int n, e;
    cin >> n >> e;

    vector<Edge> edges(e);
    for (int i = 0; i < e; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }

    stable_sort(edges.begin(), edges.end(), compareEgdes);

    DSU dsu(n);
    vector<pair<int, int>> mstEdges;

    for (int i = 0; i < e; i++) {
        if (dsu.unite(edges[i].u, edges[i].v)) {
            mstEdges.push_back(make_pair(edges[i].u, edges[i].v));
        }

        if (mstEdges.size() == n - 1) break;
    }

    for (const auto& edge : mstEdges) {
        cout << edge.first << " " << edge.second << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
