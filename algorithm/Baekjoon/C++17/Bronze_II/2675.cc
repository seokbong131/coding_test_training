#include <iostream>
#include <string>
using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int r;
        cin >> r;
        
        string s;
        cin >> s;
        
        for (int j = 0; j < s.size(); j++) {
            for (int k = 0; k < r; k++) {
                cout << s[j];
            }
        }
        
        cout << '\n';
    }
    
    return 0;
}