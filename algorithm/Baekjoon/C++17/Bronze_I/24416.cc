#include <iostream>
#include <vector>
using namespace std;

int fib(int n) {
    if ((n == 1) || (n == 2)) return 1;
    else return (fib(n - 1) + fib(n - 2));
}

int fibonacci(int n) {
    vector<int> f(n);   // for recurrence relation output
    f[0] = 1, f[1] = 1;

    for (int i = 2; i < n; ++i) {
        f[i] = f[i - 1] + f[i - 2];
    }

    return f[n - 1];
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    //cout << fib(n) << " " << n - 2 << '\n';
    cout << fibonacci(n) << " " << n - 2 << '\n';

    return 0;
}