#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool solve(string symbols) {
    string rev = symbols;
    reverse(rev.begin(), rev.end());

    return rev == symbols;
}

int main() {
    int n;
    cin >> n;

    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        cout << solve(s) << endl;
    }

    return 0;
}
