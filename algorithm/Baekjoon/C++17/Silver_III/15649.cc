#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void genPermutations(vector<int>& arr, vector<bool>& visited, vector<int>& pmt, int& k) {
    if (pmt.size() == k) {
        for (auto& x : pmt) cout << x << " ";
        cout << '\n';

        return;
    }

    for (int i = 0; i < arr.size(); ++i) {
        if (visited[i] == false) {
            visited[i] = true;
            pmt.push_back(arr[i]);
            genPermutations(arr, visited, pmt, k);
            pmt.pop_back();
            visited[i] = false;
        }
    }
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<int> seq(n);
    iota(seq.begin(), seq.end(), 1);

    vector<bool> visited(n);
    vector<int> ans;

    genPermutations(seq, visited, ans, m);

    return 0;
}