#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    int a, b, c;
    cin >> a >> b >> c;
    
    vector<int> edge(3);
    edge[0] = a, edge[1] = b, edge[2] = c;
    sort(edge.begin(), edge.end());
    
    if (edge[2] < edge[0] + edge[1]) {
        cout << edge[0] + edge[1] + edge[2] << '\n';
    }
    else {
        cout << 2 * (edge[0] + edge[1]) - 1 << '\n';
    }
    
    return 0;
}