#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Item {
    int weight;
    int value;
    double density;
};

bool compareItems(Item a, Item b) {
    return a.density > b.density;
}

void solve() {
    int n;
    double capacity;
    cin >> n >> capacity;

    vector<Item> items(n);
    for (int i = 0; i < n; i++) {
        cin >> items[i].weight >> items[i].value;
        items[i].density = (double)items[i].value / items[i].weight;
    }

    sort(items.begin(), items.end(), compareItems);

    double maxProfit = 0.0;
    double currentWeight = 0.0;

    for (int i = 0; i < n; i++) {
        if (currentWeight + items[i].weight <= capacity) {
            currentWeight += items[i].weight;
            maxProfit += items[i].value;
        }
        else {
            double remainingWeight = capacity - currentWeight;
            maxProfit += items[i].density * remainingWeight;
            break;
        }
    }

    cout << fixed << setprecision(3) << maxProfit << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
