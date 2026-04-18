#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

bool comp(const pair<int, int>& a, const pair<int, int>& b) {
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

    vector<pair<int, int>> meeting(n);
    for (auto& I : meeting) {
        cin >> I.first >> I.second;
    }

    sort(meeting.begin(), meeting.end(), comp);

    int end = 0;
    stack<pair<int, int>> s;

    for (auto& I : meeting) {
        if (end <= I.first) {
            end = I.second;
            s.push(I);
        }
    }

    cout << s.size() << '\n';

    return 0;
}