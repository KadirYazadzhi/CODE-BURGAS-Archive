#include <algorithm>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct Poster {
    int x1, y1, x2, y2;
    string owner;
};

int main() {
    int W, H, M, N;
    cin >> W >> H;
    cin >> M;

    vector<string> inhabitants(M);
    for (int i = 0; i < M; i++) cin >> inhabitants[i];

    cin >> N;
    vector<Poster> posters(N);
    vector<int> coordsX, coordsY;

    coordsX.push_back(0);
    coordsY.push_back(0);
    coordsX.push_back(W);
    coordsY.push_back(H);

    for (int i = 0; i < N; i++) {
        int x, y, a, b;
        string name;
        cin >> x >> y >> a >> b >> name;

        posters[i].x1 = max(0, x);
        posters[i].y1 = max(0, y);
        posters[i].x2 = min(W, x + a);
        posters[i].y2 = min(H, y + b);
        posters[i].owner = name;

        coordsX.push_back(posters[i].x1);
        coordsY.push_back(posters[i].y1);
        coordsX.push_back(posters[i].x2);
        coordsY.push_back(posters[i].y2);
    }

    sort(coordsX.begin(), coordsX.end());
    coordsX.erase(unique(coordsX.begin(), coordsX.end()),coordsX.end());

    sort(coordsY.begin(), coordsY.end());
    coordsY.erase(unique(coordsY.begin(), coordsY.end()),coordsY.end());

    int nx = coordsX.size(), ny = coordsY.size();
    vector<vector<int>> grid(nx - 1, vector<int>(ny - 1, -1));

    map<string, int> nameToIndex;
    for (int i = 0; i < M; i++) nameToIndex[inhabitants[i]] = i;

    for (int p = 0; p < N; p++) {
        int ix1 = lower_bound(coordsX.begin(), coordsX.end(), posters[p].x1) - coordsX.begin();
        int ix2 = lower_bound(coordsX.begin(), coordsX.end(), posters[p].x2) - coordsX.begin();
        int iy1 = lower_bound(coordsY.begin(), coordsY.end(), posters[p].y1) - coordsY.begin();
        int iy2 = lower_bound(coordsY.begin(), coordsY.end(), posters[p].y2) - coordsY.begin();

        for (int i = ix1; i < ix2; i++) {
            for (int j = iy1; j < iy2; j++) {
                grid[i][j] = nameToIndex[posters[p].owner];
            }
        }
    }

    vector<long long> areas(M, 0);

    for (int i = 0; i < nx - 1; i++) {
        for (int j = 0; j < ny - 1; j++) {
            if (grid[i][j] != -1) {
                long long cellArea = (long long)(coordsX[i + 1] - coordsX[i]) * (coordsY[j + 1] - coordsY[j]);
                areas[grid[i][j]] += cellArea;
            }
        }
    }

    for (int i = 0; i < M; i++) {
        if (areas[i] > 0) cout << inhabitants[i] << " " << areas[i] << endl;
    }
    return 0;
}
