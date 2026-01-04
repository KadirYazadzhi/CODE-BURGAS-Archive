#include <iostream>
#include <vector>

using namespace std;

class FenwickTree {
private:
    int n;
    vector<long long> tree;

public:
    FenwickTree(int n) : n(n), tree(n + 1, 0) {}

    void add(int index, int value) {
        for (; index <= n; index += index & -index) {
            tree[index] += value;
        }
    }

    long long query(int index) {
        long long result = 0;

        for (; index > 0; index -= index & -index) {
            result += tree[index];
        }

        return result;
    }

    long long queryRange(int l, int r) {
        if (l > r) return 0;
        return query(r) - query(l - 1);
    }
};


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    FenwickTree bit(n);

    char type;
    while (q--) {
        cin >> type;

        if (type == 'A') {
            int p, v;
            cin >> p >> v;

            bit.add(p, v);
        }
        else if (type == 'B') {
            int l, r;
            cin >> l >> r;
            cout << bit.queryRange(l, r) << "\n";
        }
    }

    return 0;
}
