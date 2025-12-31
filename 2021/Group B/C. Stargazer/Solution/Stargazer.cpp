#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point {
    long long x, y;

    bool operator<(const Point& other) const {
        if (x != other.x) return x < other.x;

        return y < other.y;
    }

    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<Point> stars(n);
    long long sumX = 0, sumY = 0;

    for (int i = 0; i < n; i++) {
        cin >> stars[i].x >> stars[i].y;
        sumX += stars[i].x;
        sumY += stars[i].y;
    }

    if (sumX % n != 0 || sumY % n != 0) {
        cout << "BAD LUCK" << endl;
        return 0;
    }

    long long targetX = sumX / n;
    long long targetY = sumY / n;

    sort(stars.begin(), stars.end());

    int left = 0;
    int right = n - 1;
    bool possible = true;

    while (left <= right) {
        if (stars[left].x + stars[right].x != 2 * targetX ||
            stars[left].y + stars[right].y != 2 * targetY) {
            possible = false;
            break;
        }

        left++;
        right--;
    }

    if (possible) cout << targetX << " " << targetY << endl;
    else cout << "BAD LUCK" << endl;

    return 0;
}
