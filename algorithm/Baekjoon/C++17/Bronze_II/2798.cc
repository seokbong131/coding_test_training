#include <iostream>
#include <vector>
using namespace std;

int getMaxFromFor(int arrSize, int upperLimit, vector<int>& arr) {
    int max = -1;

    for (int i = 0; i < arrSize; i++) {
        int sum = 0;

        for (int j = 0; (j != i) && (j < arrSize); j++) {
            for (int k = 0; (k != j) && (k != i) && (k < arrSize); k++) {
                sum = arr[i] + arr[j] + arr[k];

                if ((max < sum) && (sum <= upperLimit)) max = sum;
            }
        }
    }

    return max;
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<int> num(n);
    for (auto& x : num) cin >> x;
    
    int sol = getMaxFromFor(n, m, num);

    cout << sol;

    return 0;
}