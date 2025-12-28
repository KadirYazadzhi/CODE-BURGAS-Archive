#include <iostream>
#include <vector>

using namespace std;

void readMatrix(vector<vector<int>>& matrix) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            cin >> matrix[i][j];
        }
    }
}

bool checkMagicSquare(vector<int>& numbers) {
    if (numbers.empty()) return false;

    for (int i = 0; i < numbers.size() - 1; i++) {
        if (numbers[i] != numbers[i + 1]) return false;
    }

    return true;
}

bool magicSquare(vector<vector<int>>& matrix, vector<int>& numbers) {
    for (int i = 0; i < matrix.size(); i++) {
        int rowSum = 0;
        int colSum = 0;

        for (int j = 0; j < matrix[0].size(); j++) {
            rowSum += matrix[i][j];
            colSum += matrix[j][i];
        }

        numbers.push_back(rowSum);
        numbers.push_back(colSum);
    }

    int firstDiagonal = 0;
    for (int i = 0; i < matrix.size(); i++) firstDiagonal += matrix[i][i];
    numbers.push_back(firstDiagonal);

    int secondDiagonal = 0;
    for (int i = 0; i < matrix.size(); i++) secondDiagonal += matrix[i][matrix.size() - i - 1];
    numbers.push_back(secondDiagonal);

    return checkMagicSquare(numbers);
}

int main() {
    int n;
    cin >> n;

    vector<int> numbers;
    vector<vector<int>> matrix(n, vector<int>(n));
    readMatrix(matrix);

    if (magicSquare(matrix, numbers)) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
