#include <iostream>

using namespace std;

struct Square {
    int x;
    int y;
    int a;
};

Square square;

void move(int dx, int dy) {
    square.x += dx;
    square.y += dy;
}

void print() {
    cout << square.x << " " << square.y << " " << square.a << endl;
}

int main() {
    int x, y, a;

    cin >> x >> y >> a;

    square.x = x;
    square.y = y;
    square.a = a;

    int dx, dy;
    cin >> dx >> dy;

    move(dx, dy);
    print();

    return 0;
}
