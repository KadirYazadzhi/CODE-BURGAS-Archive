#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int findLongestSubarray(int n, long long targetSum, const vector<int>& arr) {
    unordered_map<long long, int> prefixSum;
    long long currentSum = 0;
    int maxLength = 0;

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];

        if (currentSum == targetSum) maxLength = i + 1;

        long long needed = currentSum - targetSum;
        if (prefixSum.find(needed) != prefixSum.end()) {
            maxLength = max(maxLength, i - prefixSum[needed]);
        }

        if (prefixSum.find(currentSum) == prefixSum.end()) {
            prefixSum[currentSum] = i;
        }
    }

    return maxLength;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long s;
    cin >> n >> s;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findLongestSubarray(n, s, arr) << endl;

    return 0;
}
