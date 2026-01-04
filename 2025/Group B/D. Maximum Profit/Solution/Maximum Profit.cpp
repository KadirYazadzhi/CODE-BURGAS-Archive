#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

struct Task {
    int deadline;
    int profit;
};

bool compareTasks(const Task& a, const Task& b) {
    return a.deadline < b.deadline;
}

void solve() {
    int N;
    cin >> N;

    vector<Task> tasks(N);
    for (int i = 0; i < N; i++) {
        cin >> tasks[i].deadline >> tasks[i].profit;
    }

    sort(tasks.begin(), tasks.end(), compareTasks);

    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < N; i++) {
        pq.push(tasks[i].profit);

        if (pq.size() > (size_t)tasks[i].deadline) pq.pop();
    }

    long long maxProfit = 0;
    while (!pq.empty()) {
        maxProfit += pq.top();
        pq.pop();
    }

    cout << maxProfit << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
