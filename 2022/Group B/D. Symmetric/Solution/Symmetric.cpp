#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

typedef unsigned long long ull;

ull createPalindrome(ull left, bool isOdd) {
    ull result = left;

    if (isOdd) left /= 10;

    while (left > 0) {
        result = result * 10 + (left % 10);
        left /= 10;
    }

    return result;
}

int main() {
    string sN;
    cin >> sN;

    ull N = stoull(sN);
    int len = sN.length();

    ull count = 0;

    for (int i = 1; i < len; i++) {
        ull currentLenCount = 9;

        for (int j = 0; j < (i - 1) / 2; j++) currentLenCount *= 10;
        count += currentLenCount;
    }

    int halfLen = (len + 1) / 2;
    ull firstHalf = stoull(sN.substr(0, halfLen));

    ull minFirstHalf = 1;
    for (int i = 0; i < halfLen - 1; i++) minFirstHalf *= 10;

    count += (firstHalf - minFirstHalf);

    if (createPalindrome(firstHalf, len % 2 != 0) <= N) count++;

    cout << count << endl;

    return 0;
}
