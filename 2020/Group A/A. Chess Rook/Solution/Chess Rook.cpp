#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

int calculateDistance(string c1, string c2) {
    int col1 = c1[0] - 'a';
    int row1 = c1[1] - '1';
    int col2 = c2[0] - 'a';
    int row2 = c2[1] - '1';

    return abs(col1 - col2) + abs(row1 - row2);
}

void solve() {
    string line;
    getline(cin, line);

    stringstream ss(line);
    string prevCord, currentCoord;

    int totalDistance = 0;

    if (ss >> prevCord) {
        while (ss >> currentCoord) {
            totalDistance += calculateDistance(prevCord, currentCoord);
            prevCord = currentCoord;
        }
    }

    cout << totalDistance << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string nStr;
    if (getline(cin, nStr)) {
        n = stoi(nStr);

        while (n--) solve();
    }

    return 0;
}
