#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    if (!(cin >> s)) return 0;

    while (!s.empty() && (s.back() < 'a' || s.back() > 'z')) s.pop_back();

    int n = s.length();
    if (n == 0) return 0;

    int max_res = 1;

    double area_limit = (double)n / 2.0 - 1.0;

    for (int i = 0; i < n; ++i) {
        for (int type = 0; type < 2; ++type) {
            int l, r, center_matches;
            if (type == 0) {
                l = i - 1; r = i + 1;
                center_matches = 1;
            } else {
                l = i; r = i + 1;
                center_matches = 0;
            }

            int m1 = 0;
            while (center_matches + 2 * (m1 + 1) <= n) {
                int L_idx = (l % n + n) % n;
                int R_idx = (r % n + n) % n;
                if (s[L_idx] == s[R_idx]) {
                    m1++; l--; r++;
                } else break;
            }

            max_res = max(max_res, center_matches + 2 * m1);

            if (center_matches + 2 * (m1 + 1) <= n) {
                int mis = 0;
                int ml = l, mr = r;

                while (center_matches + 2 * (m1 + mis + 1) <= n && (mis + 1) < area_limit) {
                    int L_idx = (ml % n + n) % n;
                    int R_idx = (mr % n + n) % n;
                    if (s[L_idx] != s[R_idx]) {
                        mis++; ml--; mr++;
                    } else break;
                }

                if (mis > 0) {
                    int m2 = 0;
                    while (center_matches + 2 * (m1 + mis + m2 + 1) <= n) {
                        int L_idx = (ml % n + n) % n;
                        int R_idx = (mr % n + n) % n;
                        if (s[L_idx] == s[R_idx]) {
                            m2++; ml--; mr++;
                        } else break;
                    }

                    if (center_matches + m1 + m2 >= 1) {
                        max_res = max(max_res, center_matches + 2 * (m1 + mis + m2));
                    }
                }
            }
        }
    }

    cout << max_res << endl;

    return 0;
}