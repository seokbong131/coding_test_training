#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void genRePermutaions(vector<int>& arr, vector<int>& pmt, int& k) {
    if (pmt.size() == k) {
        for (auto& x : pmt) cout << x << " ";
        cout << '\n';

        return;
    }

    for (int i = 0; i < arr.size(); ++i) {
        pmt.push_back(arr[i]);
        genRePermutaions(arr, pmt, k);
        pmt.pop_back();
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

    genRePermutaions(seq, ans, m);

    return 0;
}