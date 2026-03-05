#include<iostream>
#include<string>
#include<array>
#include<cctype>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    string word;
    cin >> word;
    
    array<int, 26> frequency{};

    for (auto character : word) {
        frequency[toupper(character) - 'A'] += 1;
    }
    
    char answer;
    int max = 0, second_max= 0;
    
    for (int i = 0; i < 26; ++i) {
        if (frequency[i] > max) {
            second_max = max;
            max = frequency[i];
            answer = 'A' + i;
        }
        else if (frequency[i] == max) {
            second_max = max;
        }
}
    
    if (max == second_max) cout << '?' << '\n';
    else cout << answer << '\n';
    
    return 0;
}