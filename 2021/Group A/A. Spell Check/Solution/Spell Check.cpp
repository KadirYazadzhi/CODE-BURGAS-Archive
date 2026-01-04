#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> prevRow;
vector<int> currRow;

int editDistance(const string& s1, const string& s2) {
    int n = s1.length();
    int m = s2.length();

    if (n < m) return editDistance(s2, s1);

    prevRow.assign(m + 1, 0);
    currRow.assign(m + 1, 0);

    for (int j = 0; j <= m; j++) prevRow[j] = j;

    for (int i = 1; i <= n; i++) {
        currRow[0] = i;

        for (int j = 1; j <= m; j++) {
            if (s1[i - 1] == s2[j - 1]) currRow[j] = prevRow[j - 1];
            else {
                int del = prevRow[j] + 1;
                int ins = currRow[j - 1] + 1;
                int rep = prevRow[j - 1] + 1;

                int res = del;
                if (ins < res) res = ins;
                if (rep < res) res = rep;
                currRow[j] = res;
            }
        }

        prevRow.swap(currRow);
    }

    return prevRow[m];
}

void solve() {
    int n;
    cin >> n;

    while (n--) {
        string word1, word2;
        cin >> word1 >> word2;
        cout << editDistance(word1, word2) << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
