#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string s;
    
    int cnt = 0;
    while (cin >> s) {
        cnt++;
    }
    
    cout << cnt;

    return 0;
}