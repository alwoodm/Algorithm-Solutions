// Precz z "A"
#include <iostream>
#include <string>

using namespace std;

string removeAfromWord(string word){
    string result="";

    for (int i = 0; i < word.size(); i++) {
        if (word[i] != 'a') result += word[i];
    }

    return result;
}

int main() {
    string word;
    cin >> word;

    string wordWithoutA = removeAfromWord(word);

    if (wordWithoutA == word || wordWithoutA.size() == 0) {
        cout << word << endl;
        return 0;
    }

    char lastletter = word[word.size() - 1];
    if (wordWithoutA.size() % 2 != 0 || lastletter == 'a') {
        cout << "NIE";
        return 0;
    }

    int t_size = wordWithoutA.size() / 2;
    string t1 = wordWithoutA.substr(0, t_size);
    string t2 = wordWithoutA.substr(t_size, t_size);

    if (t1 != t2) {
        cout << "NIE" << endl;
    }

    int s_size = word.size() - t1.size();
    string s = word.substr(0, s_size);

    if (removeAfromWord(s) == t1) {
        cout << s;
    } else {
        cout << "NIE";
    }

    return 0;
}