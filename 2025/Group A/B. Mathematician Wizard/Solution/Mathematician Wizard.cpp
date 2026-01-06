#include <iostream>
#include <vector>

using namespace std;

const int MAX = 1000001;
bool isPrime[MAX];

void sieve() {
    fill(isPrime, isPrime + MAX, true);

    isPrime[0] = isPrime[1] = false;

    for (int p = 2; p * p < MAX; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i < MAX; i += p) {
                isPrime[i] = false;
            }
        }
    }
}

bool canBeSumOfTwoDistinctPrimes(int n) {
    if (n < 5) return false;

    if (n % 2 != 0) {
        int other = n - 2;

        if (other > 2 && isPrime[other]) {
            return true;
        }

        return false;
    }
    else {
        for (int p = 2; p < n / 2; p++) {
            if (isPrime[p] && isPrime[n - p]) {
                return true;
            }
        }

        return false;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int n;
    while (cin >> n) {
        if (canBeSumOfTwoDistinctPrimes(n)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
