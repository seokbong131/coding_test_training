#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int t;
    cin >> t;
    
    for (int i = 1; i < t+1; i++){
        int a, b;
        cin >> a >> b;
        cout << "Case #" << i << ": " << a+b << "\n";
    }
    
    return 0;
}