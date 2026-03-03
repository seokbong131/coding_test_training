#include<iostream>
#include<string>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    string word;
    cin >> word;
    
    int word_len = word.length();
    
    for (int i = 0; i < word_len / 2; ++i) {
        if (word[i] != word[word_len - 1 - i]) {
            cout << 0 << '\n';
            
            return 0;
        }
    }
    
    cout << 1 << '\n';
    
    return 0;
}