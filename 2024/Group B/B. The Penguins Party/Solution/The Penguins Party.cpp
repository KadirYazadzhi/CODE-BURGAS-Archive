#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long findMaxFish() {
    int n;
    cin >> n;

    if (n == 0) return 0;

    long long prev1 = 0;
    long long prev2 = 0;

    for (int i = 0; i < n; i++) {
        long long currentFish;
        cin >> currentFish;

        long long currentMax = max(prev1, currentFish + prev2);

        prev2 = prev1;
        prev1 = currentMax;
    }

    return prev1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << findMaxFish() << endl;

    return 0;
}
