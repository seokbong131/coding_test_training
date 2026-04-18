#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int avr = 0;

    vector<int> num(5);
    for (auto& x : num) {
        cin >> x;
        avr += x;
    }

    avr /= 5;
    sort(num.begin(), num.end());

    cout << avr << '\n' << num[2] << '\n';

    return 0;
}