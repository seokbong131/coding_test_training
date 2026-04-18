#include <iostream>
#include <stack>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    stack<int> s;
    int command;

    while (n--) {
        cin >> command;

        switch (command)
        {
        case 1:
            int num;
            cin >> num;

            s.push(num);

            break;
        case 2:
            if (s.empty())
                cout << -1 << '\n';
            else {
                int num;
                num = s.top();

                s.pop();
                cout << num << '\n';
            }
            
            break;
        case 3:
            cout << s.size() << '\n';

            break;
        case 4:
            if (s.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';

            break;
        case 5:
            if (s.empty())
                cout << -1 << '\n';
            else {
                int num;
                num = s.top();

                cout << num << '\n';
            }

            break;
        default:
            return 1;
        }
    }

    return 0;
}