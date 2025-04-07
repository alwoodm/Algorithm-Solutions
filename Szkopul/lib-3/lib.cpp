#include <iostream>

using namespace std;

int main() {
    string codeWord, result="";
    cin >> codeWord;
    
    for (int i = 0; i < codeWord.size(); i++) {
        if (codeWord[i] == 'j') result += '1';
        else if (codeWord[i] == 'z') result += '0';
    }
    
    cout << result << endl;
    return 0;
}