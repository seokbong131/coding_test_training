#include <deque>
#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    deque<int> dq;
    int command;

    while (n--) {
        cin >> command;

        switch (command)
        {
        case 1:
            int frontNum;
            cin >> frontNum;

            dq.push_front(frontNum);

            break;
        case 2:
            int backNum;
            cin >> backNum;

            dq.push_back(backNum);

            break;
        case 3:
            if (dq.empty())
                cout << -1 << '\n';
            else {
                cout << dq.front() << '\n';
                dq.pop_front();
            }

            break;
        case 4:
            if (dq.empty())
                cout << -1 << '\n';
            else {
                cout << dq.back() << '\n';
                dq.pop_back();
            }

            break;
        case 5:
            cout << dq.size() << '\n';

            break;
        case 6:
            if (dq.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';

            break;
        case 7:
            if (dq.empty())
                cout << -1 << '\n';
            else
                cout << dq.front() << '\n';

            break;
        case 8:
            if (dq.empty())
                cout << -1 << '\n';
            else
                cout << dq.back() << '\n';

            break;
        default:
            return 1;
        }
    }

    return 0;
}