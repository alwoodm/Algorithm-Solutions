// Bezpieczni alpiniści
#include <iostream>
#include <string>

using namespace std;

string Pomoc(string alpinisci){
    string alpinisciPo=alpinisci;

    for (int i = 0; i < alpinisci.size(); i++) {
        if (alpinisci[i]=='B'&&alpinisci[i+1]=='Z') alpinisciPo[i+1]='B';
    }

    return alpinisciPo;
}

int main() {
    short n;
    cin >> n;

    string grupaAlpinistow[n];
    for (int i = 0; i < n; i++) {
        cin >> grupaAlpinistow[i];
    }

    int licznik[n];
    for (int i = 0; i < n; i++) {
        licznik[i]=0;
        bool still=true;

        if(grupaAlpinistow[i][0]=='Z'){
            licznik[i] = -1;
            still = false;
        }

        if(grupaAlpinistow[i].find('Z') != string::npos) {
            while (still) {
                still = false;
                grupaAlpinistow[i] = Pomoc(grupaAlpinistow[i]);
                for (int j = 0; j < grupaAlpinistow[i].size(); j++) {
                    if (grupaAlpinistow[i][j] == 'Z') still = true;
                }
                licznik[i] += 1;
            }
        }
        
    }

    for (int i = 0; i < n; i++) {
        cout << licznik[i] << endl;
    }
    return 0;
}