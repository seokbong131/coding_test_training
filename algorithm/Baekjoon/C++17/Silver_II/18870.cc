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
    for (auto& x : num) cin >> x;

    vector<int> sortedNum = num;
    sort(sortedNum.begin(), sortedNum.end());
    auto p = unique(sortedNum.begin(), sortedNum.end());
    sortedNum.erase(p, sortedNum.end());

    for (auto& x : num) {
        cout << lower_bound(sortedNum.begin(), sortedNum.end(), x)
                - sortedNum.begin() << " ";
    }

    return 0;
}