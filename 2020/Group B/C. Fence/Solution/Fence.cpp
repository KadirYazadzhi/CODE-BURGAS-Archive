#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> xNumbers = vector<int>(n);
    vector<int> yNumbers = vector<int>(n);

    for (int i = 0; i < n; i++) {
        cin >> xNumbers[i] >> yNumbers[i];
    }

    int xMax = INT_MIN, yMax = INT_MIN, xMin = INT_MAX, yMin = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (xMax < xNumbers[i]) xMax = xNumbers[i];
        if (yMax < yNumbers[i]) yMax = yNumbers[i];
        if (yMin > yNumbers[i]) yMin = yNumbers[i];
        if (xMin > xNumbers[i]) xMin = xNumbers[i];
    }

    int w = xMax - xMin + 2, h = yMax - yMin + 2;
    int p = 2 * (w + h);
    cout << p << endl;

    return 0;
}
