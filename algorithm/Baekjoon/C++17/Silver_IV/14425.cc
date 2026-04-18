#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    unordered_set<string> str;
    while (n--) {
        string s;
        cin >> s;

        str.insert(s);
    }

    int sol = 0;
    while (m--) {
        string x;
        cin >> x;

        if (str.find(x) != str.end()) {
            sol++;
        }
    }

    cout << sol << '\n';

    return 0;
}