#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int l, n;
    cin >> l >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; i++) cin >> numbers[i];

    vector<int> visibleNumbers;
    int currentMax = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (numbers[i] > currentMax) {
            currentMax = numbers[i];

            if (i + l < n) {
                bool canHide = true;

                for (int j = i + 1; j <= i + l; j++) {
                    if (numbers[j] + 1 > numbers[i]) {
                        canHide = false;
                        break;
                    }
                }

                if (canHide) visibleNumbers.push_back(i + 1);
            }
        }
    }

    if (visibleNumbers.empty()) cout << "NO" << endl;
    else for (int num : visibleNumbers) cout << num << endl;

    return 0;
}
