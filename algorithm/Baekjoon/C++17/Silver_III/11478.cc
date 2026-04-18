#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string str;
    cin >> str;
    int strSize = str.size();

    unordered_set<string> partialStrSet;

    for (int idx = 0; idx < strSize; ++idx) {
        int len = 0;

        while (idx + len != strSize) {
            partialStrSet.insert(str.substr(idx, len + 1));
            len++;
        }
    }

    cout << partialStrSet.size() << '\n';

return 0;
}