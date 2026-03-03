#include<iostream>
#include<string>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    int N;
    cin >> N;
    
    for (int down = N - 1; down > 0; --down) {
        cout << string(down, ' ') << string(2 * (N - down) - 1, '*') << '\n';
    }
    cout << string(2 * N - 1, '*') << '\n';
    for (int up = 1; up < N; ++up) {
        cout << string(up, ' ') << string(2 * (N - up) - 1, '*') << '\n';
    }
    
    return 0;
}