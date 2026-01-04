#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const long long INF = 1e15;
int N;

struct Matrix {
    vector<vector<long long>> mat;

    Matrix() {
        mat.resize(N + 1, vector<long long>(N + 1, INF));
    }

    static Matrix identity() {
        Matrix res;

        for (int i = 1; i <= N; i++) res.mat[i][i] = 0;

        return res;
    }
};

Matrix multiply(const Matrix &a, const Matrix &b) {
    Matrix c;

    for (int i = 1; i <= N; i++) {
        for (int k = 1; k <= N; k++) {
            if (a.mat[i][k] == INF) continue;

            for (int j = 1; j <= N; j++) {
                if (b.mat[k][j] == INF) continue;

                c.mat[i][j] = min(c.mat[i][j], a.mat[i][k] + b.mat[k][j]);
            }
        }
    }

    return c;
}

Matrix power(Matrix a, long long k) {
    Matrix res = Matrix::identity();

    while (k > 0) {
        if (k & 1) res = multiply(res, a);

        a = multiply(a, a);
        k >>= 1;
    }

    return res;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long M;
    cin >> N >> M;

    Matrix adj;

    for (int i = 1; i <= N; i++) adj.mat[i][i] = 0;

    for (long long i = 0; i < M; i++) {
        int u, v;
        long long t;

        cin >> u >> v >> t;

        if (u <= N && v <= N) {
            adj.mat[u][v] = min(adj.mat[u][v], t);
        }
    }

    long long K;
    int Q;
    cin >> K >> Q;

    Matrix result = power(adj, K);

    while (Q--) {
        int start, end;
        cin >> start >> end;

        long long ans = result.mat[start][end];

        if (ans >= INF) cout << "-1" << "\n";
        else cout << ans << "\n";
    }

    return 0;
}
