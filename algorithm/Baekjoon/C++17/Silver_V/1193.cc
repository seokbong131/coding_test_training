#include<iostream>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    int X;
    cin >> X;
    
    int i = 1; // the i-th line
    
    while (X > i) {
        X -= i;
        i++;
    }
    
    if (i % 2 == 1) cout << i + 1 - X << '/' << X << '\n';
    else            cout << X << '/' << i + 1 - X << '\n';
    
    return 0;
}