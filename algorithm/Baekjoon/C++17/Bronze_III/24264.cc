#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    long n;
    cin >> n;

    cout << n * n << '\n';
    cout << 2 << '\n';  // O(n^2)

    return 0;
}