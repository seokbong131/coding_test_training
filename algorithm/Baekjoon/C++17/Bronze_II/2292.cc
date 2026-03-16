#include<iostream>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    int N;
    cin >> N;
    
    int i = 1;
    
    // a_n: 1, 7, 19, 37, 61, ...
    // b_n:  6, 12, 18, 24, ...
    // => a_n = 1 + 6 * n(n - 1) / 2
    while (N > 3 * i * (i - 1) + 1) {
        i++;
    }
    
    cout << i << '\n';
    
    return 0;
}