#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    bool isMinus = false;
    int sum = 0;
    string strNum = "";

    string equation;
    getline(cin, equation);
    equation.push_back('+');    // kick

    for (char c : equation) {
        if ((c == '+') || (c == '-')) {
            int num = stoi(strNum);
            strNum = "";

            sum += isMinus ? -num : num;

            if (c == '-') isMinus = true;
        }
        else {
            strNum.push_back(c);
        }
    }

    cout << sum << '\n';

    return 0;
}