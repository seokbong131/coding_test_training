#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void genReCombinations(vector<int>& arr, vector<int>& comb, int& k, int start) {
    if (comb.size() == k) {
        for (auto& x : comb) cout << x << " ";
        cout << '\n';

        return;
    }

    for (int i = start; i < arr.size(); ++i) {
        comb.push_back(arr[i]);
        genReCombinations(arr, comb, k, i);
        comb.pop_back();
    }
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<int> seq(n);
    iota(seq.begin(), seq.end(), 1);

    vector<int> ans;

    genReCombinations(seq, ans, m, 0);

    return 0;
}