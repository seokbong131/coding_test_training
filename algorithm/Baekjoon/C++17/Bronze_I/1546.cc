#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<double> score(n);
    double mx = -1, sum = 0;
    for (auto& val : score) {
        cin >> val;
        
        mx = max(mx, val);
        sum += val;
    }
    
    cout.precision(15);
    cout << sum / mx * 100 / n;

    return 0;
}