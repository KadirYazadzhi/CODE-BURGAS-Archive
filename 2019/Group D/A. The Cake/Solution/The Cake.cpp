#include <iostream>

using namespace std;

void solve() {
    int P;
    double N, M, A, B;

    cin >> N >> M >> P;

    double sizes[P][2];
    for (int j = 0; j < P; j++) cin >> sizes[j][0] >> sizes[j][1];

    cin >> A >> B;
    double area = 0;

    for (int j = 0; j < P; j++) area += sizes[j][0] * sizes[j][1];

    if (N * M - area - A * B > 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    int BR;
    cin >> BR;

    for (int i = 0; i < BR; i++) solve();

    return 0;
}
