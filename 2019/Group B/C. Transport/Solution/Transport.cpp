#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

const double INF = 1e18;

void readPositions(vector<vector<double>>& positions, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> positions[i][j];

            if (positions[i][j] == -1) positions[i][j] = INF;
            if (i == j) positions[i][j] = 0;
        }
    }
}

int main() {
    int n, startPoint, endPoint;
    double price;
    cin >> n;

    vector<vector<double>> positions(n, vector<double>(n));
    readPositions(positions, n);

    cin >> startPoint >> endPoint >> price;

    startPoint--;
    endPoint--;

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (positions[i][k] != INF && positions[k][j] != INF) {
                    if (positions[i][j] > positions[i][k] + positions[k][j]) positions[i][j] = positions[i][k] + positions[k][j];
                }
            }
        }
    }

    double minDistance = positions[startPoint][endPoint];

    if (minDistance == INF) return -1;
    else cout << fixed << setprecision(2) << minDistance * price << endl;

    return 0;
}
