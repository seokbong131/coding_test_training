#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    long long sum = 0;
    for (int k = 1; k <= n - 2; ++k) {
        sum += (long long)k * (k + 1);
    }
    sum /= 2;

    cout << sum << '\n';
    cout << 3 << '\n';  // O(n^3)

    return 0;
}