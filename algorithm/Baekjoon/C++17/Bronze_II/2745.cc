#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    string N;
    int B;
    cin >> N >> B;
    
    int sum = 0;
    
    for (char c : N) {
        int place = 0;
        
        if (isdigit(c)) place = c - '0';
        else            place = c - 'A' + 10;
        
        // by Horner's method
        sum = sum * B + place;
    }
    
    cout << sum << '\n';
    
    return 0;
}