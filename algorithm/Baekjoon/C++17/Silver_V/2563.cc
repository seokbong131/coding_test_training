#include<iostream>
#include<vector>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    int num;
    cin >> num;
    
    vector<vector<char>> matrix(100, vector<char>(100, 'w'));
    
    for (int k = 0; k < num; ++k) {
        int X, Y;
        cin >> X >> Y;
        
        for (int i = X; i < X + 10; ++i) {
            for (int j = Y; j < Y + 10; ++j) {
                matrix[i][j] = 'b';
            }
        }
    }
    
    int area = 0;
    
    for (int i = 0; i < 100; ++i) {
        for (int j = 0; j < 100; ++j) {
            if (matrix[i][j] == 'b') {
                area++;
            }
        }
    }
    
    cout << area << '\n';
    
    return 0;
}