#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    string numStr;
    cin >> numStr;
    
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += (int)numStr[i] - 48;
    }
    
    cout << sum << "\n";
    
    return 0;
}