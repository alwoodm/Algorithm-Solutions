#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    short n;
    cin >> n;
    vector<string> words;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        words.push_back(s);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < words[i].size(); j++) {
            if(words[i][j] == 'a') words[i][j] = 'b';
            else if(words[i][j] == 'b') words[i][j] = 'a';
        }
    }

    for (int i = 0; i < n; i++) {
        cout << words[i] << endl;
    }
    return 0;
}