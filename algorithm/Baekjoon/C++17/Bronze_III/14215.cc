#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    int a, b, c;
    cin >> a >> b >> c;
    
    // No need to sort
    int sum = a + b + c;
    int maximum = max({a, b, c});
    
    if (sum - maximum > maximum) {
        cout << sum << '\n';
    }
    else {
        cout << 2 * (sum - maximum) - 1 << '\n';
    }
    
    return 0;
}