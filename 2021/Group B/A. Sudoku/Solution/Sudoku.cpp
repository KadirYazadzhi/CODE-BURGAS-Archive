#include <iostream>
#include <vector>
#include <string>

using namespace std;

int rows[9], cols[9], boxes[9];

int charToBit(char ch) { return 1 << (ch - 'A'); }

void toggle(int r, int c, char ch, bool set) {
    int bit = charToBit(ch);

    if (set) {
        rows[r] |= bit;
        cols[c] |= bit;
        boxes[(r / 3) * 3 + c / 3] |= bit;
    }
    else {
        rows[r] &= ~bit;
        cols[c] &= ~bit;
        boxes[(r / 3) * 3 + c / 3] &= ~bit;
    }
}

bool solve(vector<string>& board) {
    int minOpts = 10;
    int bestR = -1, bestC = -1;

    for (int r = 0; r < 9; r++) {
        for (int c = 0; c < 9; c++) {
            if (board[r][c] == '.') {
                int allowed = ~(rows[r] | cols[c] | boxes[(r / 3) * 3 + c / 3]) & 0x1FF;
                int count = 0;

                for (int i = 0; i < 9; i++) if (allowed & (1 << i)) count++;

                if (count < minOpts) {
                    minOpts = count;
                    bestR = r;
                    bestC = c;
                }
            }
        }
    }

    if (bestR == -1) return true;
    if (minOpts == 0) return false;

    int allowed = ~(rows[bestR] | cols[bestC] | boxes[(bestR / 3) * 3 + bestC / 3]) & 0x1FF;
    for (int i = 0; i < 9; i++) {
        if (allowed & (1 << i)) {
            char ch = 'A' + i;
            board[bestR][bestC] = ch;
            toggle(bestR, bestC, ch, true);

            if (solve(board)) return true;

            toggle(bestR, bestC, ch, false);
            board[bestR][bestC] = '.';
        }
    }

    return false;
}

void solveSudoku() {
    string input;
    cin >> input;

    for (int i = 0; i < 9; i++) rows[i] = cols[i] = boxes[i] = 0;

    vector<string> board(9, string(9, ' '));
    for (int i = 0; i < 81; i++) {
        board[i / 9][i % 9] = input[i];

        if (input[i] != '.') toggle(i / 9, i % 9, input[i], true);
    }

    if (solve(board)) {
        for (int r = 0; r < 9; r++) cout << board[r];

        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) solveSudoku();

    return 0;
}
