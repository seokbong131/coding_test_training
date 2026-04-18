#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool compareLen(const string& a, const string& b) {
    if (a.size() != b.size()) return a.size() < b.size();

    return a < b;
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<string> set(n);

    for (auto& word : set) {
        cin >> word;
    }

    sort(set.begin(), set.end(), compareLen);
    set.erase(unique(set.begin(), set.end()), set.end());

    for (auto& word: set) cout << word << '\n';

    return 0;
}