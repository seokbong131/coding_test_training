#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    string line;
    while (getline(cin, line)) {
        cout << line << '\n';
    }

    return 0;
}