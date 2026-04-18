#include <deque>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<bool> isQueue(n);
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;

        if (a == 0) // case: queue
            isQueue[i] = true;
    }

    deque<int> queuestack;
    for (int i = 0; i < n; ++i) {
        int b;
        cin >> b;

        if (isQueue[i])
            queuestack.push_back(b);
    }

    int m;
    cin >> m;

    while (m--) {
        int c;
        cin >> c;

        queuestack.push_front(c);
        cout << queuestack.back() << " ";
        queuestack.pop_back();
    }

    return 0;
}