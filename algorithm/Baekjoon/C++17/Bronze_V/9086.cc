#include <iostream>
#include <string>
using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++){
        string str;
        cin >> str;
        cout << str[0] << str[str.size()-1] << "\n";
    }
    
    return 0;
}