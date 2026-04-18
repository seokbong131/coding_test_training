#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    vector<int> value(n);
    for (auto& A : value) {
        cin >> A;
    }
    
    int change = k;
    vector<int> cnt(n);
    for (int i = n - 1; i >= 0; --i) {
        if (change == 0) break;

        if (value[i] <= change) {
            cnt[i] = change / value[i];
            change = change % value[i];
        }
    }
    
    int answer = 0;

    for (auto& x : cnt) {
        answer += x;
    }

    cout << answer << '\n';

    return 0;
}