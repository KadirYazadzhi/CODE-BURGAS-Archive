#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

const int MAX_ID = 100005;
vector<int> adj[MAX_ID];
int memo[MAX_ID];
bool exists[MAX_ID];

int getGenerations(int u) {
    if (memo[u] != 0) return memo[u];

    int maxDepth = 0;
    for (int child : adj[u]) maxDepth = max(maxDepth, getGenerations(child));

    return memo[u] = 1 + maxDepth;
}

void solve() {
    int N;
    cin >> N;

    set<int> allMice;
    for (int i = 0; i < N; i++) {
        int mother, child;
        cin >> mother >> child;

        adj[mother].push_back(child);
        exists[mother] = true;
        exists[child] = true;
        allMice.insert(mother);
        allMice.insert(child);
    }

    int maxLine = 0;
    for (int mouse : allMice) maxLine = max(maxLine, getGenerations(mouse));

    cout << maxLine << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
