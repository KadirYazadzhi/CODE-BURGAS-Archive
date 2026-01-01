#include <iostream>
#include <climits>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long currentHill;

    long long maxSoFar = LLONG_MIN;
    long long currentMax = 0;

    string line;
    getline(cin, line);
    stringstream ss(line);

    while (ss >> currentHill) {
        currentMax += currentHill;

        if (maxSoFar < currentMax) maxSoFar = currentMax;

        if (currentMax < 0) currentMax = 0;
    }

    cout << maxSoFar << endl;

    return 0;
}
