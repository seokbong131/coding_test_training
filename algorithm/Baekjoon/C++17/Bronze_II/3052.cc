#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    unordered_set<int> res(10);
    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;

        res.insert(num % 42);
    }

    cout << res.size();

    return 0;
}