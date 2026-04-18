#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void addEdge(vector<vector<int>>& graph, int u, int v) {
    graph[u].push_back(v);
    graph[v].push_back(u);
}

void dfs(vector<vector<int>>& graph, vector<bool>& isVisited,
         int v) {
    isVisited[v] = true;

    cout << v << " ";

    for (int adj : graph[v]) {
        if (isVisited[adj] == false) {
            dfs(graph, isVisited, adj);
        }
    }
}

void bfs(vector<vector<int>>& graph, vector<bool>& isVisited,
         int v) {
    fill(isVisited.begin(), isVisited.end(), false);
    isVisited[v] = true;

    queue<int> q;
    q.push(v);

    while (q.empty() == false) {
        int cur = q.front();
        q.pop();

        cout << cur << " ";

        for (int adj : graph[cur]) {
            if (isVisited[adj] == false) {
                isVisited[adj] = true;
                q.push(adj);
            }
        }
    }
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n, m, v;
    cin >> n >> m >> v;

    vector<vector<int>> graph(n + 1);

    while (m--) {
        int u, v;
        cin >> u >> v;

        addEdge(graph, u, v);
    }

    for (int i = 1; i <= n; ++i) {
        sort(graph[i].begin(), graph[i].end());
    }

    vector<bool> isVisited(n + 1);
    
    dfs(graph, isVisited, v);
    cout << '\n';
    
    bfs(graph, isVisited, v);
    cout << '\n';

    return 0;
}