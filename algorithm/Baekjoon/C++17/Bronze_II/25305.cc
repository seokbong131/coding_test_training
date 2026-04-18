#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    vector<int> score(n);
    for (auto& x : score) {
        cin >> x;
    }

    sort(score.begin(), score.end(), greater<int>());

    cout << score[k - 1] << '\n';

    return 0;
}