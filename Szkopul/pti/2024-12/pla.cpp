// Plan lekcji 
#include <iostream>
#include <vector>

using namespace std;

int main() {
    short n;
    cin>>n;

    vector<int> nrGodzinyZajec;

    for (int i = 0; i < n; i++) {
        int godzina;
        cin >> godzina;

        nrGodzinyZajec.push_back(godzina);
    }

    int liczbaGodzinNaUczelni=0;

    for (int obecnaGodzina = 0; obecnaGodzina < nrGodzinyZajec.size(); obecnaGodzina++) {
        bool czyMozeNieIsc=false;

        if (obecnaGodzina==0&&nrGodzinyZajec[obecnaGodzina]==0) czyMozeNieIsc= true;

        else if
        ( (nrGodzinyZajec[obecnaGodzina]==0 && nrGodzinyZajec[obecnaGodzina+1]==0)
        || (nrGodzinyZajec[obecnaGodzina]==0 && nrGodzinyZajec[obecnaGodzina-1]==0) )
            czyMozeNieIsc=true;

        else if (obecnaGodzina==nrGodzinyZajec.size()-1&&nrGodzinyZajec[obecnaGodzina]==0) czyMozeNieIsc=true;

        if (!czyMozeNieIsc) liczbaGodzinNaUczelni++;
    }

    cout << liczbaGodzinNaUczelni << endl;

    return 0;
}