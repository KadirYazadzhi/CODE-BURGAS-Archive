#include <iostream>

using namespace std;

int solve() {
    int pages = 0;
    int digitsPerPage = 1;
    int countOfPagesInRange = 9;

    int n;
    cin >> n;

    while (n > digitsPerPage * countOfPagesInRange) {
        n -= digitsPerPage * countOfPagesInRange;
        pages += countOfPagesInRange;

        digitsPerPage++;
        countOfPagesInRange *= 10;
    }

    pages += n / digitsPerPage;

    return pages;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cout << solve() << endl;
    }

    return 0;
}
