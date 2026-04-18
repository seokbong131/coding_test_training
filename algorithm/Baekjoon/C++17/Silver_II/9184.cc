#include <iostream>
using namespace std;

int table[21][21][21];  // for preprocessing

void initTable(int table[21][21][21]) {
    for (int a = 0; a < 21; ++a) {
        for (int b = 0; b < 21; ++b) {
            for (int c = 0; c < 21; ++c) {
                if ((a == 0) || (b == 0) || (c == 0)) {
                    table[a][b][c] = 1;
                }
                else if ((a < b) && (b < c)) {
                    table[a][b][c] = table[a][b][c - 1] + table[a][b - 1][c - 1] - table[a][b - 1][c];
                }
                else {
                    table[a][b][c] = table[a - 1][b][c] + table[a - 1][b - 1][c] + table[a - 1][b][c - 1] - table[a - 1][b - 1][c - 1];
                }
            }
        }
    }
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    initTable(table);

    int a, b, c;
    while (true) {
        cin >> a >> b >> c;

        if ((a == -1) && (b == -1) && (c == -1)) break;

        cout << "w(" << a << ", " << b << ", " << c << ") = ";

        if ((a <= 0) || (b <= 0) || (c <= 0)) {
            cout << 1 << '\n';
        }
        else if ((a > 20) || (b > 20) || (c > 20)) {
            cout << table[20][20][20] << '\n';
        }
        else {
            cout << table[a][b][c] << '\n';
        }
    }

    return 0;
}