#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

void solve() {
    int w, h, r;
    double circleArea, bluePartArea;
    cin >> w;

    h = w * 0.6;
    r = w * 0.2;

    circleArea = M_PI * r * r;
    bluePartArea = (w * h) - circleArea;

    cout << fixed << setprecision(2) << circleArea << " " << bluePartArea << endl;
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        solve();
    }

    return 0;
}
