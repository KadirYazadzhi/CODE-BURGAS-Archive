#include <iostream>
#include <limits.h>

using namespace std;

struct Words {
    string word;
    int countUpperCaseLetters;
    int countLowerCaseLetters;
};

int main() {
    int n;
    cin >> n;

    Words words[n];

    for (int i = 0; i < n; i++) {
        cin >> words[i].word;
    }

    for (int i = 0; i < n; i++) {
        int upperCaseLettersCount = 0, lowerCaseLettersCount = 0;

        for (int j = 0; j < words[i].word.length(); j++) {
            if (words[i].word[j] >= 'a' && words[i].word[j] <= 'z') lowerCaseLettersCount++;
            else if (words[i].word[j] >= 'A' && words[i].word[j] <= 'Z') upperCaseLettersCount++;
        }

        words[i].countUpperCaseLetters = upperCaseLettersCount;
        words[i].countLowerCaseLetters = lowerCaseLettersCount;
    }

    int minIndex = -1, maxIndex = -1;
    int minSum = INT_MAX, maxSum = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (words[i].countLowerCaseLetters < minSum) {
            minSum = words[i].countLowerCaseLetters;
            minIndex = i;
        }
        if (words[i].countUpperCaseLetters > maxSum) {
            maxSum = words[i].countUpperCaseLetters;
            maxIndex = i;
        }
    }

    cout << words[minIndex].word << endl;
    cout << words[maxIndex].word << endl;

    return 0;
}
