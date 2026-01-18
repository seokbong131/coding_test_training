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
    for (int idx = 0; idx < n; idx++) {
        basket[idx] = idx;
    }

    for (int iter = 0; iter < m; iter++) {
        int i, j;
        cin >> i >> j;

        swap(basket[i-1], basket[j-1]);
    }

    for (auto& x : basket) {
        cout << x+1 << " ";
    }

    return 0;
}