#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    vector<int> vec(9);
    for (auto& i : vec) {
        cin >> i;
    }

    cout << *max_element(vec.begin(), vec.end()) << '\n'
        << distance(vec.begin(), max_element(vec.begin(), vec.end())) + 1;

    return 0;
}