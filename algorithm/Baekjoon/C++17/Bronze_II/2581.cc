#include<iostream>
#include<vector>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    int M, N;
    cin >> M >> N;
    
    vector<int> prime(N + 1, 1);
    prime[0] = prime[1] = 0;
    
    for (int i = 2; i * i <= N; ++i) {
        if (prime[i])
            for (int j = i * i; j <= N; j += i) {
                prime[j] = 0;
            }
    }
    
    int minimum = 0, sum = 0;
    
    for (int k = M; k <= N; ++k) {
        if (prime[k]) {
            if (minimum == 0) minimum = k;
            
            sum += k;
        }
    }
    
    if (minimum == 0) cout << -1 << '\n';
    else              cout << sum << '\n' << minimum << '\n';
    
    return 0;
}