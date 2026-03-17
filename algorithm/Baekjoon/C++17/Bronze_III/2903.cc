#include<iostream>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    int N;
    cin >> N;
    
    // side:  2 -> 4 -> 8 -> 16 -> ...
    // point: 3 -> 5 -> 9 -> 17 -> ...
    int point = (1 << N) + 1;
    cout << point * point << '\n';
    
    return 0;
}