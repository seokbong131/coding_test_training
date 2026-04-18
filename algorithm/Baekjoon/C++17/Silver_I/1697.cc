#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void bfs(vector<int>& depth, int n, int k) {
    depth[n] = 1;
    
    queue<int> q;
    q.push(n);

    while (q.empty() == false) {        
        int cur = q.front();
        q.pop();

        if (cur == k) break;
        
        if ((0 <= cur - 1) && (depth[cur - 1] == 0)) {
            depth[cur - 1] = depth[cur] + 1;
            q.push(cur - 1);
        }
        if ((cur + 1 <= 100000) && (depth[cur + 1] == 0)) {
            depth[cur + 1] = depth[cur] + 1;
            q.push(cur + 1);
        }
        if ((cur * 2 <= 100000) && (depth[cur * 2] == 0)) {
            depth[cur * 2] = depth[cur] + 1;
            q.push(cur * 2);
        }
    }
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n, k;
    cin >> n >> k;

    vector<int> depth(100001);

    bfs(depth, n, k);

    cout << depth[k] - 1 << '\n';

    return 0;
}