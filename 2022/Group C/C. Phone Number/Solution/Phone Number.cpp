#include <iostream>
#include <string>

using namespace std;

int main() {
    string words;
    getline(cin, words);

    for (int i = 0; i < words.length(); i++) {
        switch (words[i]) {
            case 'A': case 'B': case 'C': words[i] = '2'; break;
            case 'D': case 'E': case 'F': words[i] = '3'; break;
            case 'G': case 'H': case 'I': words[i] = '4'; break;
            case 'J': case 'K': case 'L': words[i] = '5'; break;
            case 'M': case 'N': case 'O': words[i] = '6'; break;
            case 'P': case 'Q': case 'R': case 'S': words[i] = '7'; break;
            case 'T': case 'U': case 'V': words[i] = '8'; break;
            case 'W': case 'X': case 'Y': case 'Z': words[i] = '9'; break;
        }
    }

    cout << words << endl;

    return 0;
}
