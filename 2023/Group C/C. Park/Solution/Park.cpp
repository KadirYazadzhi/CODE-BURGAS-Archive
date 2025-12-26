#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void ReadMatrix(vector<vector<int>>& matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
}

int CalculateMaxArea(const vector<vector<int>>& matrix, int n) {
    int maxs = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 1) continue;

            int current_width = n;
            for (int k = i; k < n; k++) {
                if (matrix[k][j] == 1) break;

                int l = j;
                while (l < current_width && matrix[k][l] == 0) l++;

                current_width = l;
                int area = (k - i + 1) * (current_width - j);
                maxs = max(maxs, area);
            }
        }
    }
    return maxs;
}

int main() {
    int n;
    if (!(cin >> n) || n <= 0) return 0;

    vector<vector<int>> matrix(n, vector<int>(n));
    ReadMatrix(matrix, n);

    cout << CalculateMaxArea(matrix, n) << endl;

    return 0;
}