#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<int> basket(n);

    for (int iter = 0; iter < m; iter++) {
        int i, j, k;
        cin >> i >> j >> k;

        for (int idx = i-1; idx < j; idx++) {
            basket[idx] = k;
        }
    }

    for (auto& x : basket) {
        cout << x << " ";
    }

    return 0;
}