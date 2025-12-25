#include <iostream>
#include<string>

using namespace std;

int main() {
    string input;
    cin >> input;

    cout << (int)(input[0] - '0') + (int)(input[1] - '0') + (int)(input[2] - '0') + (int)(input[3] - '0') << endl;
    cout << (int)(input[0] - '0') * (int)(input[1] - '0') * (int)(input[2] - '0') * (int)(input[3] - '0') << endl;

    return 0;
}
