#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for (auto &x : vec) {
        cin >> x;
    }

    int v;
    cin >> v;

    cout << count(vec.begin(), vec.end(), v);

    return 0;
}