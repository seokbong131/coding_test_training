#include <iostream>
using namespace std;

int findNthNum(int n) {
    int endNum = 666, nth = 1;

    while (nth != n) {
        endNum++;

        int tempNum = endNum;

        while (tempNum != 0) {
            if (tempNum % 1000 == 666) {
                nth++;
                break;
            }
            else tempNum /= 10;
        }
    }

    return endNum;
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int sol = findNthNum(n);

    cout << sol << '\n';

    return 0;
}