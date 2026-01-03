#include <iostream>
#include <cmath>

using namespace std;

long long sumOfProperDivisors(long long n) {
    if (n <= 1) return 0;

    long long sum = 1;
    long long sqrtN = sqrt(n);

    for (long long i = 2; i <= sqrtN; i++) {
        if (n % i != 0) continue;

        sum += i;
        if (i * i != n) sum += n / i;
    }

    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long A, B;
    cin >> A >> B;

    if (sumOfProperDivisors(A) == B && sumOfProperDivisors(B) == A)
        cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
