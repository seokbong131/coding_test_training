#include <iostream>
#include <unordered_map>
using namespace std;

enum class SetType { A, B, Intersection };

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int sizeA, sizeB;
    cin >> sizeA >> sizeB;

    unordered_map<int, SetType> elem;
    int cnt = 0;

    for (int i = 0; i < sizeA; ++i) {
        int num1;
        cin >> num1;

        elem[num1] = SetType::A;
    }

    for (int j = 0; j < sizeB; ++j) {
        int num2;
        cin >> num2;

        if (elem.find(num2) == elem.end()) {
            elem[num2] = SetType::B;
        }
        else {
            elem[num2] = SetType::Intersection;
            cnt++;
        }
    }

    cout << sizeA + sizeB - 2 * cnt << '\n';

    return 0;
}