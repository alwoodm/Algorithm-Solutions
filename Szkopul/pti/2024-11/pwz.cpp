// Powielanie znaków
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    short n;
    cin >>n;
    vector<string> slowa;
    vector<string> powielone(n,"");
    for (int i = 0; i < n; i++) {
        string slowo;
        cin >> slowo;
        slowa.push_back(slowo);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < slowa[i].size(); j++) {
            for (int k = 0; k < j+1; k++) {
                powielone[i].push_back(slowa[i][j]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << powielone[i] << endl;
    }
    return 0;
}