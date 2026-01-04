#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

struct Class {
    string subject;
    string hall;
};

string clean(string s) {
    if (!s.empty() && s.back() == ',') s.pop_back();
    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    string line;
    getline(cin, line);

    vector<vector<Class>> programs;
    int maxLen = 0;

    for (int i = 0; i < N; i++) {
        if (!getline(cin, line) || line.empty()) {
            i--; continue;
        }
        stringstream ss(line);
        vector<Class> currentProgram;
        string sub, hall;

        while (ss >> sub && sub != "finalDestination") {
            if (ss >> hall) {
                currentProgram.push_back({clean(sub), clean(hall)});
            }
        }

        programs.push_back(currentProgram);
        maxLen = max(maxLen, (int)currentProgram.size());
    }

    string anyaFirst, georgiFirst;
    cin >> anyaFirst >> georgiFirst;

    int endTime = 8 + maxLen;

    vector<int> anyaPossible, georgiPossible;
    for (int i = 0; i < N; i++) {
        if (!programs[i].empty()) {
            if (programs[i][0].subject == anyaFirst) anyaPossible.push_back(i);
            if (programs[i][0].subject == georgiFirst) georgiPossible.push_back(i);
        }
    }

    int totalMaxOverlap = 0;

    for (int aIdx : anyaPossible) {
        for (int gIdx : georgiPossible) {
            int currentOverlap = 0;
            int anyaPtr = programs[aIdx].size() - 1;
            int georgiPtr = programs[gIdx].size() - 1;

            while (anyaPtr >= 0 && georgiPtr >= 0) {
                if (programs[aIdx][anyaPtr].subject == programs[gIdx][georgiPtr].subject &&
                    programs[aIdx][anyaPtr].hall == programs[gIdx][georgiPtr].hall) {
                    currentOverlap++;
                }
                else break;

                anyaPtr--;
                georgiPtr--;
            }
            totalMaxOverlap = max(totalMaxOverlap, currentOverlap);
        }
    }

    cout << endTime - totalMaxOverlap << endl;

    return 0;
}