#include<iostream>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    int n;
    
    while (true) {
        cin >> n;
        
        if (n == -1) break;
        
        int sum = 0;
        
        for (int i = 1; i < n; ++i) {
            if (n % i == 0) {
                sum += i;
            }
        }
        
        if (sum != n) {
            cout << n << " is NOT perfect." << '\n';
            continue;
        }
        
        cout << n << " = 1";
              
        for (int i = 2; i < n; ++i) {
             if (n % i == 0) {
                 cout << " + " << i;
             }
        }
        
        cout << '\n';
    }
    
    return 0;
}