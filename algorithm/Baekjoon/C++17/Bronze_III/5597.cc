#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    vector<bool> students(30);
    
    for (int i = 0; i < 28; i++) {
        int num;
        cin >> num;

        students[num - 1] = true;
    }

    int cnt = 2;
    for (int ck = 0; cnt != 0; ck++) {
        if (students[ck] == false) {
            cout << ck+1 << '\n';
            cnt--;
        }
    }

    return 0;
}