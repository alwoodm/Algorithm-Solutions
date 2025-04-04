#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    short n;
    cin >> n;
    vector<string> words;
    vector<string> repeated(n, "");
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        words.push_back(word);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < words[i].size(); j++) {
            for (int k = 0; k < j+1; k++) {
                repeated[i].push_back(words[i][j]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << repeated[i] << endl;
    }
    return 0;
}