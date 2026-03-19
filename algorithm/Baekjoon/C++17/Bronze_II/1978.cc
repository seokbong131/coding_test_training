#include<iostream>
#include<vector>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    vector<int> prime(1001, 1);
    prime[0] = prime[1] = 0;
    
    for (int i = 2; i * i <= 1000; ++i) {
        if (prime[i]) {
            for (int j = i * i; j <= 1000; j += i) {
                prime[j] = 0;
            }
        }
    }
    
    int N;
    cin >> N;
    
    int count = 0;
    
    while (N--) {
        int num;
        cin >> num;
        
        if (prime[num]) count++;
    }
    
    cout << count << '\n';
    
    return 0;
}