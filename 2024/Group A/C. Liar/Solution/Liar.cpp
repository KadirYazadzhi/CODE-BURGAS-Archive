#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <queue>
#include <algorithm>

using namespace std;

struct Object {
    long double x, y;
    int level;

    bool operator<(const Object& other) const {
        return x < other.x || (x == other.x && y < other.y);
    }
};

struct Node {
    Object object;
    Node* left;
    Node* right;

    Node(Object obj) : object(obj), left(nullptr), right(nullptr) {}
};

long double squaredDistance(long double x1, long double y1, long double x2, long double y2) {
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

class KDTree {
public:
    KDTree(vector<Object>& objects) {
        root = build(objects, 0);
    }

    vector<Object> kNearestNeighbors(const Object& target, int k) {
        priority_queue<pair<long double, Object>> pq;
        kNearest(root, target, k, 0, pq);
        vector<Object> result;

        while (!pq.empty()) {
            result.push_back(pq.top().second);
            pq.pop();
        }

        reverse(result.begin(), result.end());
        return result;
    }

private:
    Node* root;

    Node* build(vector<Object>& objects, int depth) {
        if (objects.empty()) return nullptr;

        int axis = depth % 2;
        size_t median = objects.size() / 2;

        nth_element(objects.begin(), objects.begin() + median, objects.end(), [axis](const Object& a, const Object& b) {
            return axis == 0 ? a.x < b.x : a.y < b.y;
        });

        Node* node = new Node(objects[median]);
        vector<Object> left(objects.begin(), objects.begin() + median);
        vector<Object> right(objects.begin() + median + 1, objects.end());

        node->left = build(left, depth + 1);
        node->right = build(right, depth + 1);

        return node;
    }

    void kNearest(Node* node, const Object& target, int k, int depth, priority_queue<pair<long double, Object>>& pq) {
        if (!node) return;

        long double distance = squaredDistance(target.x, target.y, node->object.x, node->object.y);
        if (node->object.level == target.level) {
            if (pq.size() < k) {
                pq.push({distance, node->object});
            }
            else if (distance < pq.top().first) {
                pq.pop();
                pq.push({distance, node->object});
            }
        }

        int axis = depth % 2;
        Node* nextNode = (axis == 0 ? (target.x < node->object.x ? node->left : node->right)
                                    : (target.y < node->object.y ? node->left : node->right));
        Node* otherNode = (axis == 0 ? (target.x < node->object.x ? node->right : node->left)
                                     : (target.y < node->object.y ? node->right : node->left));

        kNearest(nextNode, target, k, depth + 1, pq);

        long double axisDist = (axis == 0 ? (target.x - node->object.x) : (target.y - node->object.y));
        if (pq.size() < k || axisDist * axisDist < pq.top().first) {
            kNearest(otherNode, target, k, depth + 1, pq);
        }
    }
};

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<Object> objects(N);
    for (int i = 0; i < N; ++i) {
        cin >> objects[i].x >> objects[i].y >> objects[i].level;
    }

    KDTree tree(objects);

    long double totalSum = 0.0;
    for (int i = 0; i < Q; ++i) {
        long double x, y;
        int level, k;
        cin >> x >> y >> level >> k;

        Object target = {x, y, level};
        vector<Object> nearest = tree.kNearestNeighbors(target, k);

        long double sum = 0.0;
        for (const Object& obj : nearest) {
            sum += squaredDistance(x, y, obj.x, obj.y);
        }
        totalSum += sum;
    }

    cout << fixed << setprecision(5) << totalSum << endl;

    return 0;
}