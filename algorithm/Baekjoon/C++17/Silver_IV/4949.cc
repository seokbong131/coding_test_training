#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string line;
    while (getline(cin, line)) {
        if (line == ".") break;

        int lineSize = line.size();
        stack<char> bracket;
        bool isVPS = true;

        for (int i = 0; i < lineSize; ++i) {
            char ch = line[i];

            if (ch == '(')  // for round bracket
                bracket.push(ch);
            else if (ch == ')') {
                if (bracket.empty()) {
                    isVPS = false;
                    break;
                }
                else {
                    char topCh = bracket.top();

                    if (topCh == '(')
                        bracket.pop();
                    else {
                        isVPS = false;
                        break;
                    }
                }
            }

            if (ch == '[')  // for square bracket
                bracket.push(ch);
            else if (ch == ']') {
                if (bracket.empty()) {
                    isVPS = false;
                    break;
                }
                else {
                    char topCh = bracket.top();

                    if (topCh == '[')
                        bracket.pop();
                    else {
                        isVPS = false;
                        break;
                    }
                }
            }
        }

        if (bracket.empty() && isVPS)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }

    return 0;
}