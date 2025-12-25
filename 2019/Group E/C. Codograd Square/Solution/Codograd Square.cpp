#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;

        cout << (num * num) * 4 << endl;
    }
    return 0;
}
