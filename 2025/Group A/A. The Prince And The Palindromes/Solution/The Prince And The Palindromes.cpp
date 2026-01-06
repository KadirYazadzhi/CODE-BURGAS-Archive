#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int minimalReplacementsToPalindrome(const string& word) {
    if (word.empty()) return 0;

    int count = 0;
    int n = word.length();

    for (int i = 0, j = n - 1; i < j; i++, j--) {
        if (word[i] != word[j]) {
            count++;
        }
    }

    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string word;
    if (!getline(cin, word)) return 0;

    while (!word.empty() && (word.back() == '\r' || word.back() == '\n')) {
        word.pop_back();
    }

    cout << minimalReplacementsToPalindrome(word) << "\n";

    return 0;
}