#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n, x;
    cin >> n >> x;
    
    int num;
    while (cin >> num) {
        if (num < x) cout << num << " ";
    }

    return 0;
}