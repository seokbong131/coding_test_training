#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool compare(const pair<int, string>& a, const pair<int, string>& b) {
    return a.first < b.first;
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<pair<int, string>> book(n);
    for (auto& person : book) {
        cin >> person.first >> person.second;
    }

    stable_sort(book.begin(), book.end(), compare);

    for (const auto& person : book) {
        cout << person.first << " " << person.second << '\n';
    }

    return 0;
}