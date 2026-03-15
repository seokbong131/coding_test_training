#include<iostream>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    while (true) {
        int X, Y;
        cin >> X >> Y;
        
        if (X == 0 && Y == 0) break;
        
        if (Y % X == 0)      cout << "factor" << '\n';
        else if (X % Y == 0) cout << "multiple" << '\n';
        else                 cout << "neither" << '\n';
    }
    
    return 0;
}