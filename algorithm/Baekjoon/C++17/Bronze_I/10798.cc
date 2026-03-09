#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    string line;
    vector<vector<char>> matrix(5, vector<char>(15, '*'));
    
    for (int i = 0; i < 5; ++i) {
        cin >> line;
        int line_size = line.size();
        
        for (int j = 0; j < line_size; ++j) {
            matrix[i][j] = line[j];
        }
    }
    
    for (int j = 0; j < 15; ++j) {
        for (int i = 0; i < 5; ++i) {
            if (matrix[i][j] != '*') {
                cout << matrix[i][j];
            }
        }
    }
    
    return 0;
}