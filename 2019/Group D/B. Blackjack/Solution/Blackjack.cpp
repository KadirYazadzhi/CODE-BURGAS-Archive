#include <iostream>
#include <vector>

using namespace std;

int blackjack(int arr[], int n, int m) {
    int max = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[j] + arr[i] + arr[k] < m && arr[j] + arr[i] + arr[k] > max) max = arr[j] + arr[i] + arr[k];
            }
        }
    }

    return max;
}

int main() {
    int n, m;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> m;

    cout << blackjack(arr, n, m) << endl;
    return 0;
}
