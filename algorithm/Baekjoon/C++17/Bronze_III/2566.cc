#include<iostream>
#include<vector>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    vector<vector<int>> matrix(9, vector<int>(9));
    int maximum = -1, max_i = 0, max_j = 0;
    
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cin >> matrix[i][j];
            
            if (matrix[i][j] > maximum) {
                maximum = matrix[i][j];
                max_i = i + 1;
                max_j = j + 1;
            }
        }
    }
    
    cout << maximum << '\n' << max_i << ' ' << max_j << '\n';
    
    return 0;
}