#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double radius, volume = 0, surfaceArea = 0;
    cin >> radius;

    volume = (4 / 3.0) * M_PI * (radius * radius * radius);
    surfaceArea = 4 * M_PI * radius * radius;

    cout << fixed << setprecision(3) << volume << " " << surfaceArea << endl;
    return 0;
}
