#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string text;
    cin >> text;

    string pattern = "agent";
    int count = 0;
    size_t pos = text.find(pattern, 0);

    while (pos != string::npos) {
        count++;
        pos = text.find(pattern, pos + pattern.length());
    }

    cout << count << endl;
    if (count > 5) cout << "ALERT" << endl;
    else cout << "NO ALERT" << endl;

    return 0;
}
