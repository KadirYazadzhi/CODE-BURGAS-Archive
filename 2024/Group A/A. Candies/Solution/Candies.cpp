#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Candy {
    int weight;
    int value;
};

bool compareCandies(const Candy& a, const Candy& b) {
    if (a.weight != b.weight) {
        return a.weight > b.weight;
    }

    return a.value > b.value;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long budget;
    int n;

    cin >> budget >> n;

    vector<Candy> candies(n);
    for (int i = 0; i < n; i++) {
        cin >> candies[i].weight >> candies[i].value;
    }

    sort(candies.begin(), candies.end(), compareCandies);

    long long totalValue = 0;

    for (int i = 0; i < n; i++) {
        if (budget >= candies[i].weight) {
            budget -= candies[i].weight;
            totalValue += candies[i].value;
        }
        else break;
    }

    cout << totalValue << " " << budget << "\n";

    return 0;
}
