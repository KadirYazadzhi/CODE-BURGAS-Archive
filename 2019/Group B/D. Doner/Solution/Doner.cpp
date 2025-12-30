#include <algorithm>
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, m;
        cin >> n;

        vector<int> nums = vector<int>(n);
        for (int j = 0; j < n; j++) cin >> nums[j];

        cin >> m;

        sort(nums.begin(), nums.end());

        int minDiff = INT_MAX;

        for (int j = 0; j <= n - m; j++) {
            int currentDiff = nums[j + m - 1] - nums[j];

            if (currentDiff < minDiff) minDiff = currentDiff;
        }

        cout << minDiff << endl;
    }

    return 0;
}
