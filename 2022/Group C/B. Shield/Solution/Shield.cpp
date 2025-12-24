#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;

    long long max1 = max({a1, b1, c1});
    long long max2 = max({a2, b2, c2});

    long long total = a1 + b1 + c1 + a2 + b2 + c2;

    long long min_perimeter = total - 2 * min(max1, max2);

    cout << min_perimeter << endl;

    return 0;
}
