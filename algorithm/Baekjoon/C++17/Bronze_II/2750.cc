#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> num(n);

    for (auto& x : num) {
        cin >> x;
    }

    sort(num.begin(), num.end());

    for (auto& x : num) {
        cout << x << '\n';
    }

    return 0;
}