#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string num;
    cin >> num;
    
    sort(num.begin(), num.end(), greater<char>());

    cout << num << '\n';
    
    return 0;
}