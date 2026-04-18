#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> people(n);
    for (auto& person : people) {
        cin >> person;
    }

    sort(people.begin(), people.end());

    int sum = 0;

    for (int i = 0; i < n; ++i) {
        sum += (n - i) * people[i];
    }

    cout << sum << '\n';

    return 0;
}