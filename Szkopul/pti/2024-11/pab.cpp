// Przemiana a <--> b
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    short n;
    cin >> n;
    vector<string> slowo;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        slowo.push_back(s);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < slowo[i].size(); j++) { 
            if(slowo[i][j] == 'a') slowo[i][j] = 'b';
            else if(slowo[i][j] == 'b') slowo[i][j] = 'a';
        }
    }

    for (int i = 0; i < n; i++) {
        cout << slowo[i] << endl;
    }
    return 0;
}