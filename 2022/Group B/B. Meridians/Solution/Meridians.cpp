#include <iostream>

using namespace std;

long long toTotalSeconds(long long d, long long m, long long s) {
    return d * 3600 + m * 60 + s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long d1, m1, s1, d2, m2, s2;
    char operation;

    cin >> d1 >> m1 >> s1 >> d2 >> m2 >> s2;
    cin >> operation;

    long long total1 = toTotalSeconds(d1, m1, s1);
    long long total2 = toTotalSeconds(d2, m2, s2);
    long long result;

    if (operation == '+') result = total1 + total2;
    else result = total1 - total2;

    result /= 2;

    long long finalD = result / 3600;
    long long remainingSecs = result % 3600;
    long long finalM = remainingSecs / 60;
    long long finalS = remainingSecs % 60;

    cout << finalD << " " << finalM << " " << finalS << endl;
    return 0;
}
