#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    int X, Y, Z;
    
    while (true) {
        cin >> X >> Y >> Z;
        
        if (X == 0 && Y == 0 && Z == 0) break;
        
        int max_edge = max({X, Y, Z});
        
        if (max_edge >= X + Y + Z - max_edge) {
            cout << "Invalid" << '\n';
        }
        else if (X == Y && Y == Z) {
            cout << "Equilateral" << '\n';
        }
        else if (X != Y && Y != Z && Z != X) {
            cout << "Scalene" << '\n';
        }
        else {
            cout << "Isosceles" << '\n';
        }
    }
    
    return 0;
}