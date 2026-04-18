#include <iostream>
#include <vector>
using namespace std;

int fibonacci_like(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    
    vector<int> f(n);
    f[0] = 1, f[1] = 2;

    for (int i = 2; i < n; ++i) {
        f[i] = (f[i - 1] + f[i - 2]) % 15746;
    }

    return f[n - 1];
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int answer = fibonacci_like(n);
    cout << answer << '\n';

    return 0;
}