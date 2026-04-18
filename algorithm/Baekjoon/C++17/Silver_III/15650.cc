#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void genCombinations(vector<int>& arr, vector<int>& comb, int& k, int start) {
    if (comb.size() == k) {
        for (auto& x : comb) cout << x << " ";
        cout << '\n';

        return;
    }

    for (int i = start; i < arr.size(); ++i) {
        comb.push_back(arr[i]);
        genCombinations(arr, comb, k, i+1);
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

    genCombinations(seq, ans, m, 0);

    return 0;
}