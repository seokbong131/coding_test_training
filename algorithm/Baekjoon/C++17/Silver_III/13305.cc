#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n;
    cin >> n;

    vector<int> dist(n - 1);
    for (auto& d : dist) {
        cin >> d;
    }

    vector<int> price(n);
    for (auto& p : price) {
        cin >> p;
    }

    int localMin = price[0];
    long long cost = 0, partialSum = 0;

    for (int i = 0; i < n; ++i) {
        if ((price[i] < localMin) || (i == n-1)) {
            cost += localMin * partialSum;
            
            localMin = price[i];
            partialSum = 0;
        }
        
        if (i != n-1)
            partialSum += dist[i];
    }

    cout << cost << '\n';

    return 0;
}