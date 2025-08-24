// Słoneczkowy korytarz
#include <iostream>

using namespace std;

int main() {
    short n;
    cin >> n;

    int liczbaCiastekWPokoju[n], pozostaleCiastkaWPokoju[n],sumaCiastek=0;
    for (int i = 0; i < n; i++) {
        cin >> liczbaCiastekWPokoju[i];
        sumaCiastek += liczbaCiastekWPokoju[i];

    }

    int sredniaCiastekNaPokoj = sumaCiastek / n;
    for (int i = 0; i < n; i++) {
        pozostaleCiastkaWPokoju[i] = liczbaCiastekWPokoju[i] - sredniaCiastekNaPokoj;
    }

    int liczbaRuchuwKuriera=0;
    for (int i = 0; i < n; i++) {
        if(pozostaleCiastkaWPokoju[i]!=0){
            pozostaleCiastkaWPokoju[i+1] += pozostaleCiastkaWPokoju[i];

            liczbaRuchuwKuriera += 1;
            pozostaleCiastkaWPokoju[i] = 0;
            }
        }

    cout << liczbaRuchuwKuriera << endl;
    return 0;
}