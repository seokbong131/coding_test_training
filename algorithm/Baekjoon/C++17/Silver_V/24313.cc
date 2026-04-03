#include <cmath>
#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int a, b;
    cin >> a >> b;

    int c;
    cin >> c;

    int k;
    cin >> k;
    
    if (a > c)  // case 1
        cout << 0 << '\n';
    else if (a == c) {  // case 2
        if (b > 0)
            cout << 0 << '\n';
        else
            cout << 1 << '\n';
    }
    else {  // case 3
        int inSec = ceil((float)b / (c-a));
        
        if (inSec > k)
            cout << 0 << '\n';
        else
            cout << 1 << '\n';
    }

    return 0;
}