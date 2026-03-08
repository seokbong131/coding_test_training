#include<iostream>
#include<string>
#include<array>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    int N;
    cin >> N;
    
    int num = N;
    
    while (N--) {
        string word;
        cin >> word;
        
        size_t word_size = word.size();
        array<bool, 26> table{};
        
        table[word[0] - 'a'] = true;
        
        for (size_t i = 1; i < word_size; ++i) {
            if (word[i - 1] != word[i]) {
                if (table[word[i] - 'a']) {
                    num--;
                    break;
                }
                else {
                    table[word[i] - 'a'] = true;
                }
            }
        }
    }
    
    cout << num << '\n';
    
    return 0;
}