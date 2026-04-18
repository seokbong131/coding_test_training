#include <iostream>
#include <stack>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int order = 1;
    stack<int> numStack;

    while (n--) {
        int lineNum;
        cin >> lineNum;

        if (lineNum == order) order++;
        else numStack.push(lineNum);

        while ((numStack.empty() == false) && (numStack.top() == order)) {
            numStack.pop();
            order++;
        }
    }

    if (numStack.empty())
        cout << "Nice" << '\n';
    else
        cout << "Sad" << '\n';

    return 0;
}