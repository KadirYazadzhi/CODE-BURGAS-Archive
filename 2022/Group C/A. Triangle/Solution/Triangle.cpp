#include <iostream>

using namespace std;

void patternDrawing(int n) {
    cout << "*" << endl;
    cout << "* *" << endl;

    for (int i = 3; i < n; i++) {
        cout << "*";
        for (int j = 2; j <= i - 1; j++) {
            cout << " .";
        }
        cout << " *" << endl;
    }

    cout << "*";
    for (int j = 2; j <= n; j++) cout << " *";
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    patternDrawing(n);

    return 0;
}
