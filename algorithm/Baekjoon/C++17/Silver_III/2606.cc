#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<vector<int>>& graph, int u, int v) {
    graph[u].push_back(v);
    graph[v].push_back(u);
}

void dfs(vector<vector<int>>& graph, vector<bool>& isVisited,
         int& cnt, int cur) {
    isVisited[cur] = true;
    cnt++;

    for (int next : graph[cur]) {
        if (isVisited[next] == false) {
            dfs(graph, isVisited, cnt, next);
        }
    }
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int compNum, pairNum;
    cin >> compNum >> pairNum;

    vector<vector<int>> graph(compNum + 1);

    while (pairNum--) {
        int u, v;
        cin >> u >> v;

        addEdge(graph, u, v);
    }

    int cnt = 0;
    vector<bool> isVisited(compNum + 1);
    
    dfs(graph, isVisited, cnt, 1);

    cout << cnt - 1 << '\n';

    return 0;
}