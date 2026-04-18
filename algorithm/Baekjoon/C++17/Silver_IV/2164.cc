#include <iostream>
#include <queue>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int answer = 0;
    queue<int> q;

    for (int num = 1; num <= n; ++num) {
        q.push(num);
    }

    while (true) {
        answer = q.front();
        q.pop();

        if (q.empty()) break;
        
        answer = q.front();
        q.pop();

        if (q.empty()) break;

        q.push(answer);
    }

    cout << answer << '\n';

    return 0;
}