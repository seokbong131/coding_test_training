#include <iostream>
#include <map>
#include <string>
using namespace std;

enum class Extent { NotHear, NotSee, NotHearAndSee };

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    
    map<string, Extent> list;
    int common = 0;

    while (n--) {
        string name1;
        cin >> name1;

        list[name1] = Extent::NotHear;
    }

    while (m--) {
        string name2;
        cin >> name2;

        if (list.find(name2) == list.end()) {
            list[name2] = Extent::NotSee;
        }
        else {
            list[name2] = Extent::NotHearAndSee;
            common++;
        }
    }

    cout << common << '\n';

    for (auto it = list.begin(); it != list.end(); ++it) {
        if (it->second == Extent::NotHearAndSee) {
            cout << it->first << '\n';
        }
    }

    return 0;
}