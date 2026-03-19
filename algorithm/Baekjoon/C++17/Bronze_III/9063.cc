#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    int N;
    cin >> N;
    
    int max_x = -10001, max_y = -10001;
    int min_x =  10001, min_y =  10001;
    
    while (N--) {
        int x, y;
        cin >> x >> y;
        
        max_x = max(max_x, x);
        min_x = min(min_x, x);
        
        max_y = max(max_y, y);
        min_y = min(min_y, y);
    }
    
    cout << (max_x - min_x) * (max_y - min_y) << '\n';
    
    return 0;
}