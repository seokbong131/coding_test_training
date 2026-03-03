#include<iostream>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    int num_king, num_queen, num_rook, num_bishop, num_knight, num_pawn;
    cin >> num_king >> num_queen >> num_rook >> num_bishop >> num_knight >> num_pawn;
    
    cout << 1 - num_king << " ";
    cout << 1 - num_queen << " ";
    cout << 2 - num_rook << " ";
    cout << 2 - num_bishop << " ";
    cout << 2 - num_knight << " ";
    cout << 8 - num_pawn << '\n';
    
    return 0;
}