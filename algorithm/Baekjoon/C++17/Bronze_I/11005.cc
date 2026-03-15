#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    int N, B;
    cin >> N >> B;
    
    string base;
    
    while (N > 0) {
        int remainder = N % B;
        
        if (remainder < 10) base += char('0' + remainder);
        else                base += char(55 + remainder);
        
        N /= B;
    }
    
    reverse(base.begin(), base.end());
    cout << base << '\n';
    
    return 0;
}