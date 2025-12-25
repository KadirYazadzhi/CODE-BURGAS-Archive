#include <iostream>

using namespace std;

const int N = 100;

void readMatrix(int matrix[N][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }
}

void solve(int n) {
    int br = 0;

    int matrix[N][3], out[N];
    readMatrix(matrix, n);

    for (int i = 0; i < n; i++) out[i] = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] > 0) {
                br++;
                out[matrix[i][j] - 1]++;
            }
        }
    }

    cout << (br * 3);

    for (int i = 0; i < n; i++) if (out[i] < 2) cout << " " << i + 1;
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    solve(n);

    return 0;
}
