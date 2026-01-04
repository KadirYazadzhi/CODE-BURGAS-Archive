#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cctype>

using namespace std;

map<string, int> parseSide(string side) {
    map<string, int> atomCounts;
    size_t pos = 0;

    while (pos < side.length()) {
        size_t nextPlus = side.find('+', pos);
        string molecule = side.substr(pos, nextPlus - pos);

        int coefficient = 0;
        size_t i = 0;
        while (i < molecule.length() && isdigit(molecule[i])) {
            coefficient = coefficient * 10 + (molecule[i] - '0');
            i++;
        }

        if (coefficient == 0) coefficient = 1;

        while (i < molecule.length()) {
            if (isupper(molecule[i])) {
                string element = "";
                element += molecule[i];
                i++;

                int count = 0;
                while (i < molecule.length() && isdigit(molecule[i])) {
                    count = count * 10 + (molecule[i] - '0');
                    i++;
                }

                if (count == 0) count = 1;
                atomCounts[element] +=(coefficient * count);
            }
            else i++;
        }

        if (nextPlus == string::npos) break;
        pos = nextPlus + 1;
    }

    return atomCounts;
}

void solve() {
    string equation;
    cin >> equation;

    size_t arrowPos = equation.find("->");
    string leftSide = equation.substr(0, arrowPos);
    string rightSide = equation.substr(arrowPos + 2);

    map<string, int> leftAtoms = parseSide(leftSide);
    map<string, int> rightAtoms = parseSide(rightSide);

    if (leftAtoms == rightAtoms) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n--) solve();

    return 0;
}
