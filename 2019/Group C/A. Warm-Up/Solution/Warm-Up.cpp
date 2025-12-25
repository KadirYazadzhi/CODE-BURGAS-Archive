#include <iostream>

using namespace std;

int solve(int arr[], int n) {
    int max = 1, len = 1;

    for (int i = 0; i < n; i++) {
        if (arr[i] < arr[i + 1]) {
            len++;
        }
        else {
            if (max < len) max = len;
            len = 1;
        }
    }

    return max;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << solve(arr, n) << endl;

    return 0;
}
