#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n;
    cin >> n;

    vector<int> vec(n);
    for (auto& i : vec) {
        cin >> i;
    }

    cout << *min_element(vec.begin(), vec.end()) << " " << *max_element(vec.begin(), vec.end());

    return 0;
}