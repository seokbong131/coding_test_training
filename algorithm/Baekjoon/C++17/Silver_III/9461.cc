#include <iostream>
#include <vector>
using namespace std;

long long padovan(int n) {
    if (n == 1 || n == 2 || n == 3) return 1;

    vector<long long> p(n);
    p[0] = 1, p[1] = 1, p[2] = 1;

    for (int i = 3; i < n; ++i) {
        p[i] = p[i - 2] + p[i - 3];
    }

    return p[n - 1];
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long answer = padovan(n);
        cout << answer << '\n';
    }

    return 0;
}