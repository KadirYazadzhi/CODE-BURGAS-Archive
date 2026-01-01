#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    long long X;
    int N;

    cin >> X >> N;

    long long totalDistance1 = 0, totalDistance2 = 0;

    for (int i = 0; i < N; i++) {
        long long v1, t1, v2, t2;
        cin >> v1 >> t1 >> v2 >> t2;

        totalDistance1 += v1 * t1;
        totalDistance2 += v2 * t2;
    }

    long long pos1 = totalDistance1 % X;
    if (pos1 < 0) pos1 += X;

    long long pos2 = totalDistance2 % X;
    if (pos2 < 0) pos2 += X;

    long long diff = abs(pos1 - pos2);
    long long result = min(diff, X - diff);

    cout << result << endl;

    return 0;
}
