#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>
using namespace std;

enum class Command {
    Push, Pop, Size, Empty, Front, Back, Unknown
};

const unordered_map<string, Command> commandMap = {
    {"push", Command::Push},
    {"pop", Command::Pop},
    {"size", Command::Size},
    {"empty", Command::Empty},
    {"front", Command::Front},
    {"back", Command::Back},
};

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    queue<int> q;
    string command;

    while (n--) {
        cin >> command;

        auto it = commandMap.find(command);
        Command cmd = (it != commandMap.end()) ? it->second : Command::Unknown;

        switch (cmd)
        {
        case Command::Push:
            int num;
            cin >> num;
            
            q.push(num);

            break;
        case Command::Pop:
            if (q.empty())
                cout << -1 << '\n';
            else {
                int num;
                num = q.front();

                q.pop();
                cout << num << '\n';
            }

            break;
        case Command::Size:
            cout << q.size() << '\n';

            break;
        case Command::Empty:
            if (q.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';

            break;
        case Command::Front:
            if (q.empty())
                cout << -1 << '\n';
            else
                cout << q.front() << '\n';

            break;
        case Command::Back:
            if (q.empty())
                cout << -1 << '\n';
            else
                cout << q.back() << '\n';

            break;
        default:
            return 1;
        }
    }

    return 0;
}