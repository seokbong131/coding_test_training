#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }
    else {
        return a.first < b.first;
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

    for (auto& coord : coords) {
        cout << coord.first << " " << coord.second << '\n';
    }

    return 0;
}