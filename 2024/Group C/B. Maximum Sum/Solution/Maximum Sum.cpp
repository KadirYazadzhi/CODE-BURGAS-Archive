#include <iostream>
#include <vector>

using namespace std;

int maxSubarraySum(vector<int>& numbers) {
    int n = numbers.size();

    if (n == 0) return 0;

    int previous = numbers[0];
    int current = max(previous, 0);
    int maxSum = previous;

    for (int i = 1; i < n; i++) {
        int temp = current;
        current = max(current, previous + numbers[i]);
        previous = temp;
        maxSum = max(maxSum, current);
    }

    return maxSum;
}

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    cout << maxSubarraySum(numbers) << endl;

    return 0;
}
