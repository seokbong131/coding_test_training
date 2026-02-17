#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string s;
    cin >> s;

    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] < 'P') sum += ((s[i] - 'A') / 3) + 3;
        else if (s[i] < 'T') sum += 8;
        else if (s[i] < 'W') sum += 9;
        else sum += 10;
    }

    cout << sum;

    return 0;
}