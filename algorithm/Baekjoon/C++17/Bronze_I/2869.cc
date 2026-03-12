#include<iostream>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    int A, B, V;
    cin >> A >> B >> V;
    
    // (A - B) * (day - 1) + A >= V
    // day >= (V - A) / (A - B) + 1
    int day = (V - B - 1) / (A - B) + 1;
    
    cout << day << '\n';
    
    return 0;
}