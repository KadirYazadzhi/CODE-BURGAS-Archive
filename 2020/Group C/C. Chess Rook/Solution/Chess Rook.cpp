#include <iostream>

using namespace std;

int convertCharToDigit(char ch) {
    return ch - '0';
}

int main() {
    string position;
    cin >> position;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string turn;
        cin >> turn;

        switch (turn[0]) {
            case 'U': {
                position[1] += convertCharToDigit(turn[1]);
                if (position[1] > '8') position[1] = '8';
                break;
            }
            case 'D': {
                position[1] -= convertCharToDigit(turn[1]);
                if (position[1] < '1') position[1] = '1';
                break;
            }
            case 'R': {
                position[0] += convertCharToDigit(turn[1]);
                if (position[0] > 'h') position[0] = 'h';
                break;
            }
            case 'L': {
                position[0] -= convertCharToDigit(turn[1]);
                if (position[0] < 'a') position[0] = 'a';
                break;
            }
        }
    }

    cout << position << endl;

    return 0;
}
