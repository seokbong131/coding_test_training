#include <iostream>
#include <stack>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int k;
    cin >> k;

    stack<int> s;

    while (k--) {
        int num;
        cin >> num;

        if (num == 0) {
            if (s.empty())
                return 1;
            else
                s.pop();
        }
        else
            s.push(num);
    }

    int stackSize;
    if (s.empty())
        stackSize = 0;
    else {
        stackSize = s.size();
    }

    int answer = 0;
    while (stackSize--) {
        answer += s.top();

        s.pop();
    }

    cout << answer << '\n';

    return 0;
}