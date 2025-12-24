#include <iostream>
using namespace std;

long long countZeros(long long n) {
    if (n <= 0) return 0;

    long long count = 0;
    long long factor = 1;

    while (factor <= n) {
        long long lower = n % factor;
        long long current = (n / factor) % 10;
        long long higher = n / (factor * 10);

        if (higher == 0) {
            factor *= 10;
            continue;
        }

        if (current == 0) count += (higher - 1) * factor + lower + 1;
        else count += higher * factor;

        factor *= 10;
    }

    return count;
}

int main() {
    long long n;
    cin >> n;
    cout << countZeros(n) << endl;
    return 0;
}
