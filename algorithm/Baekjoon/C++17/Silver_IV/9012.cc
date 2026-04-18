#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    while (t--) {
        stack<char> s;
        bool isVPS = true;

        string ps;  // parenthesis string
        cin >> ps;

        int psSize = ps.size();
        for (int i = 0; i < psSize; ++i) {
            if (ps[i] == '(')
                s.push(ps[i]);
            else {
                if (s.empty()) {
                    isVPS = false;
                    break;
                }
                else {
                    s.pop();
                }
            }
        }

        if (s.empty() && isVPS)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}