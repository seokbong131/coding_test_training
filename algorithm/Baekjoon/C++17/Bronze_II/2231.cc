#include <iostream>
using namespace std;

int findConstructor(int num, int n) {
    int constructor = num, quot = num;

    while (true) {
        if (quot < 10) {
            constructor += quot;
            break;
        }

        constructor += quot % 10;
        quot /= 10;
    }

    if (constructor == n) return num;
    else return 0;
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int sol = 0;

    for (int i = 1; i < n; i++) {
        sol = findConstructor(i, n);

        if (sol > 0) {
            cout << sol;

            return 0;
        }
    }

    cout << sol;

    return 0;
}