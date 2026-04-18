#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int sol = 0;

    while (n >= 0) {
        if (n % 5 == 0) {
            sol += n / 5;
            cout << sol << '\n';

            return 0;
        }
        else {
            n -= 3;
            sol++;
        }
    }

    cout << -1 << '\n';

    return 0;
}