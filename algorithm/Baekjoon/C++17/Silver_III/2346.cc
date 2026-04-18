#include <deque>
#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    deque<pair<int, int>> balloon(n);   // 1st: index, 2nd: number
    for (int idx = 0; idx < n; ++idx) {
        int num;
        cin >> num;

        balloon[idx] = { idx, num };
    }

    while (true) {
        int elem = balloon.front().second;
        cout << balloon.front().first + 1 << " ";   // start from 1
        balloon.pop_front();

        if (balloon.empty()) break;

        if (elem > 0) {
            while (elem != 1) {
                pair<int, int> frontPair = balloon.front();
                balloon.push_back(frontPair);
                balloon.pop_front();
                
                elem--;
            }
        }
        else if (elem < 0) {
            elem = -elem;

            while (elem != 0) {
                pair<int, int> backPair = balloon.back();
                balloon.push_front(backPair);
                balloon.pop_back();
                
                elem--;
            }
        }
        else
            return 1;
    }

    return 0;
}