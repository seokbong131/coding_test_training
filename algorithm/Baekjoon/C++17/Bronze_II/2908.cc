#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string a, b;
    cin >> a >> b;

    string r_a = "000", r_b = "000";
    for (int i = 0; i < a.size(); i++) {
        r_a[i] = a[a.size() - 1 - i];
    }
    for (int i = 0; i < b.size(); i++) {
        r_b[i] = b[b.size() - 1 - i];
    }

    if (r_a > r_b) cout << r_a;
    else if (r_a < r_b) cout << r_b;

    return 0;
}