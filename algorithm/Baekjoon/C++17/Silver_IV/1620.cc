#include <cctype>
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    map<int, string> bookInIdxOrder;
    map<string, int> bookInNameOrder;
    for (int idx = 1; idx <= n; ++idx) {
        string name;
        cin >> name;

        bookInIdxOrder[idx] = name;
        bookInNameOrder[name] = idx;
    }

    for (int i = 0; i < m; ++i) {
        string problem;
        cin >> problem;

        if (isalpha(problem[0])) {
            cout << bookInNameOrder[problem] << '\n';
        }
        else {
            cout << bookInIdxOrder[stoi(problem)] << '\n';
        }
    }

    return 0;
}