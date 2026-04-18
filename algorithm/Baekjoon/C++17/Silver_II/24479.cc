#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<vector<int>>& graph, int u, int v) {
    graph[u].push_back(v);
    graph[v].push_back(u);
}

void dfs(vector<vector<int>>& graph, vector<bool>& isVisted,
         vector<int>& order, int r, int& cnt) {
    isVisted[r] = true;
    
    cnt++;
    order[r] = cnt;
    
    if (graph[r].empty()) {
        return;
    }
    else {
        for (int x : graph[r]) {
            if (isVisted[x] == false) {
                dfs(graph, isVisted, order, x, cnt);
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
        sort(graph[i].begin(), graph[i].end());
    }

    int cnt = 0;
    vector<bool> isVisited(n + 1);
    vector<int> order(n + 1);

    dfs(graph, isVisited, order, r, cnt);

    for (int i = 1; i <= n; ++i) {
        cout << order[i] << '\n';
    }

    return 0;
}