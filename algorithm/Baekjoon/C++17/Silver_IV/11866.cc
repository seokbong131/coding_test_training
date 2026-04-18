#include <iostream>
#include <queue>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    queue<int> q;

    for (int num = 1; num <= n; ++num) {
        q.push(num);
    }

    cout << "<";

    int queueSize = n;

    while (queueSize != 1) {
        int cnt = 1;

        while (cnt != k) {
            int pass = q.front();
            q.pop();
            q.push(pass);
            
            cnt++;
        }

        cout << q.front() << ", ";
        q.pop();

        queueSize--;
    }

    cout << q.front() << ">" << '\n';

    return 0;
}