#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    else {
        return a.second < b.second;
    }
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<pair<int, int>> coords(n);
    for (auto& coord : coords) {
        cin >> coord.first >> coord.second;
    }

    sort(coords.begin(), coords.end(), compare);

    for (const auto& coord : coords) {
        cout << coord.first << " " << coord.second << '\n';
    }

    return 0;
}