#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int cnt[10001] = { 0, };

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        cnt[num]++;
    }

    for (int num = 1; num < 10001; ++num) {
        for (int freq = 0; freq < cnt[num]; ++freq) {
            cout << num << '\n';
        }
    }

    return 0;
}