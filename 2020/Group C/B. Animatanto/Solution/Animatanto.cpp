#include <iostream>
#include <string>

using namespace std;

int main() {
    string characters[13];

    for (int i = 0; i < 10; i++) {
        cin >> characters[i];
    }

    cin >> characters[10] >> characters[11] >> characters[12];

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string line;
        cin.ignore();
        getline(cin, line);

        string result;
        for (int j = 0; j < line.length(); j++) {
            char ch = line[j];

            if (ch >= '0' && ch <= '9') {
                result += characters[ch - '0'] + " ";
            }
            else if (ch == '+') result += characters[10] + " ";
            else if (ch == '-') result += characters[11] + " ";
            else if (ch == '=') result += characters[12] + " ";
        }

        cout << result << endl;
    }

    return 0;
}
