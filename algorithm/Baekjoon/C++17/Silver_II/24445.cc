#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void addEdge(vector<vector<int>>& graph, int u, int v) {
    graph[u].push_back(v);
    graph[v].push_back(u);
}

void bfs(vector<vector<int>>& graph, queue<int>& q,
         vector<bool>& isVisited, vector<int>& order, int& cnt) {
    while (q.empty() == false) {
        int cur = q.front();
        q.pop();

        for (int next : graph[cur]) {
            if (isVisited[next] == false) {
                q.push(next);
                
                isVisited[next] = true;

                cnt++;
                order[next] = cnt;
            }
        }
    }
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n, m, r;
    cin >> n >> m >> r;

    vector<vector<int>> graph(n + 1);

    while (m--) {
        int u, v;
        cin >> u >> v;

        addEdge(graph, u, v);
    }

    for (int i = 1; i <= n; ++i) {
        sort(graph[i].begin(), graph[i].end(), greater<int>());
    }

    queue<int> q;
    q.push(r);

    vector<bool> isVisited(n + 1);
    isVisited[r] = true;

    int cnt = 1;
    vector<int> order(n + 1);
    order[r] = cnt;

    bfs(graph, q, isVisited, order, cnt);

    for (int i = 1; i <= n; ++i) {
        cout << order[i] << '\n';
    }

    return 0;
}