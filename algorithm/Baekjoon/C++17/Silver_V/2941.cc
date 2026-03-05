#include<iostream>
#include<string>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    string word;
    cin >> word;
    
    size_t word_size = word.size();
    int count = 0;
    
    for (size_t i = 0; i < word_size; ++i) {
        if (i + 2 < word_size) {
            if (word[i] == 'd' && word[i + 1] == 'z' && word[i + 2] == '=') {
                i += 2;
                count++;
                continue;
            }
        }
        
        if (i + 1 < word_size) {
            if (word[i] == 'c' && (word[i + 1] == '=' || word[i + 1] == '-')) {
                i++;
            }
            else if (word[i] == 'd' && word[i + 1] == '-') {
                i++;
            }
            else if ((word[i] == 'l' || word[i] == 'n') && word[i + 1] == 'j') {
                i++;
            }
            else if ((word[i] == 's' || word[i] == 'z') && word[i + 1] == '=') {
                i++;
            }
        }
        
        count++;
    }
    
    cout << count << '\n';
    
    return 0;
}