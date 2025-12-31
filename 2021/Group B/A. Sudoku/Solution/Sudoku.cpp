#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isValid(vector<string>& board, int row, int col, char c) {
    for (int i = 0; i < 9; i++) {
        if (board[row][i] == c) return false;
        if (board[i][col] == c) return false;
        if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c) return false;
    }

    return true;
}

bool solve(vector<string>& board) {
    for (int r = 0; r < 9; r++) {
        for (int c = 0; c < 9; c++) {
            if (board[r][c] != '.') continue;

            for (char ch = 'A'; ch <= 'I'; ch++) {
                if (isValid(board, r, c, ch)) {
                    board[r][c] = ch;

                    if (solve(board)) return true;

                    board[r][c] = '.';
                }
            }

            return false;
        }
    }

    return true;
}

void solveSudoku() {
    string input;
    cin >> input;

    vector<string> board(9, string(9, ' '));
    for (int i = 0; i < 81; i++) board[i / 9][i % 9] = input[i];

    if (solve(board)) {
        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                cout << board[r][c];
            }
        }

        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) solveSudoku();

    return 0;
}
