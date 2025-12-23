#include <iostream>
#include <limits.h>

using namespace std;

pair<int, int> findMinMaxNumber(int numbers[], int n) {
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (numbers[i] < min) min = numbers[i];
        if (numbers[i] > max) max = numbers[i];
    }

    return make_pair(min, max);
}

int main() {
    int n;
    cin >> n;

    int numbers[n];
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    pair<int, int> minMax = findMinMaxNumber(numbers, n);

    cout << minMax.first << " " << minMax.second << endl;

    return 0;
}
