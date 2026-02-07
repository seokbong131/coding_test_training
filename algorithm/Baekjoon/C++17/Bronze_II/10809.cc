#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string s;
    cin >> s;

    for (char i = 'a'; i <= 'z'; i++) {
        cout << (int)s.find(i) << ' ';
    }

    return 0;
}