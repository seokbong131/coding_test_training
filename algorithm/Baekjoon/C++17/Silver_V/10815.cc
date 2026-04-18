#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> nums(n);
    for (auto& num : nums) {
        cin >> num;
    }

    sort(nums.begin(), nums.end());

    int m;
    cin >> m;

    for (int i = 0; i < m; ++i) {
        int x;
        cin >> x;

        cout << binary_search(nums.begin(), nums.end(), x) << " ";
    }

    return 0;
}