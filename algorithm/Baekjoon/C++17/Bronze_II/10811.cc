#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<int> vec(n);
    iota(vec.begin(), vec.end(), 0);

    for (int iter = 0; iter < m; iter++) {
        int i, j;
        cin >> i >> j;

        reverse(vec.begin() + i - 1, vec.begin() + j);
    }

    for (auto& x : vec) {
        cout << x+1 << " ";
    }

    return 0;
}