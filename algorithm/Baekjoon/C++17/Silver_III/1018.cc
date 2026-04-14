#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<vector<char>> mat(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    int sol = 64;
    for (int topLeftRow = 0; topLeftRow < n - 7; topLeftRow++) {
        for (int topLeftCol = 0; topLeftCol < m - 7; topLeftCol++) {
            int cnt1 = 0, cnt2 = 0;

            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    if ((i + j) % 2 == 0) { // same case
                        if (mat[topLeftRow + i][topLeftCol + j] != 'B') cnt1++;
                        if (mat[topLeftRow + i][topLeftCol + j] != 'W') cnt2++;
                    }
                    else { // different case
                        if (mat[topLeftRow + i][topLeftCol + j] == 'B') cnt1++;
                        if (mat[topLeftRow + i][topLeftCol + j] == 'W') cnt2++;
                    }
                }
            }

            if (min(cnt1, cnt2) < sol) sol = min(cnt1, cnt2);
        }
    }

    cout << sol << '\n';

    return 0;
}