#include <bits/stdc++.h>
using namespace std;

int main() {
    const int MAX_VALUE = 100000; // Maximum possible value in the input
    vector<long long> right(MAX_VALUE + 1, 0), left;
    int a, b;

    while (cin >> a >> b) {
        left.push_back(a);
        right[b]++;
    }
    long long sum = 0;
    for (int i = 0; i <= left.size(); i++) {
        sum += left[i] * right[left[i]];
    }
    cout << sum;

    return 0;
}
