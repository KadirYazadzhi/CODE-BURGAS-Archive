#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int getLevenshteinDistance(const string& s1, const string& s2) {
    int m = s1.length();
    int n = s2.length();

    vector<vector<int>> dp(m + 1, vector<int>(n + 1));

    for (int i = 0; i <= m; i++) dp[i][0] = i;
    for (int j = 0; j <= n; j++) dp[0][j] = j;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s1[i - 1] == s2[j - 1]) dp[i][j] = dp[i - 1][j - 1];
            else dp[i][j] = 1 + min({dp[i - 1][j],
                                    dp[i][j - 1],
                                    dp[i - 1][j - 1]});
        }
    }

    return dp[m][n];
}

int main() {
    int n;
    cin >> n;

    vector<string> dictionary(n);
    for (int i = 0; i < n; i++) cin >> dictionary[i];

    string misspelled;
    cin >> misspelled;

    string bestMatch = "";
    int minDistance = 4;

    for (const string& word : dictionary) {
        int dist = getLevenshteinDistance(misspelled, word);

        if (dist < minDistance) {
            minDistance = dist;
            bestMatch = word;
        }
    }

    if (minDistance <= 3) cout << bestMatch << endl;
    else cout << "WORD NOT FOUND";

    return 0;
}
