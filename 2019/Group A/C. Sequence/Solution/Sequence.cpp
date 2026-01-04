#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Element {
    int value;
    int index;
};

bool compareByValue(const Element& a, const Element& b) {
    return a.value < b.value;
}

bool compareByIndex(const Element& a, const Element& b) {
    return a.index < b.index;
}

void solve() {
    int N, M;
    cin >> N >> M;

    vector<Element> seq(N);
    for (int i = 0; i < N; i++) {
        cin >> seq[i].value;
        seq[i].index = i;
    }

    sort(seq.begin(), seq.end(), compareByValue);

    vector<Element> result;
    for (int i = 0; i < M; i++) result.push_back(seq[i]);

    sort(result.begin(), result.end(), compareByIndex);

    for (int i = 0; i < M; i++)
        cout << result[i].value << " ";
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
