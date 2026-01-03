#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    if (N == 0) {
        cout << 0 << endl;
        return 0;
    }

    int maxStreak = 1;
    int currentStreak = 1;
    int previousNumber, currentNumber;

    cin >> previousNumber;

    for (int i = 1; i < N; i++) {
        cin >> currentNumber;

        if (currentNumber == previousNumber) currentStreak++;
        else {
            if (currentStreak > maxStreak) maxStreak = currentStreak;
            currentStreak = 1;
        }

        previousNumber = currentNumber;
    }

    if (currentStreak > maxStreak) maxStreak = currentStreak;

    cout << maxStreak << endl;

    return 0;
}
