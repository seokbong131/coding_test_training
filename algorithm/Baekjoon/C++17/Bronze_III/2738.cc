#include<iostream>
#include<vector>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> matrix(N, vector<int> (M));
    
    for (int iter = 0; iter < 2; ++iter) {
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                int element;
                cin >> element;
                
                matrix[i][j] += element;
            }
        }
    }
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << matrix[i][j] << ' ';
        }
        
        cout << '\n';
    }
    
    return 0;
}