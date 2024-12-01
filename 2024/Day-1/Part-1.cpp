#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> left, right;
    int a, b;

    // Read input pairs into separate lists
    while (cin >> a >> b) {
        left.push_back(a);
        right.push_back(b);
    }

    // Sort both lists
    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    // Calculate total distance
    long long total_distance = 0;
    for (size_t i = 0; i < left.size(); i++) {
        total_distance += abs(left[i] - right[i]);
    }

    cout << total_distance;
    return 0;
}
