// Janusz odwozi kolegów
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    short iloscMiejscowosci, maksymalnaPojemnoscBaku; // m v
    cin >> iloscMiejscowosci >> maksymalnaPojemnoscBaku;

    short obecnaPojemnoscBaku = 0, obecnaMiescowosc = 1, wydanePieniadze = 0; // vmax, n, monety

    do {
        short pozostaleMiejscowosci = iloscMiejscowosci - obecnaMiescowosc;
        if (obecnaPojemnoscBaku < min(maksymalnaPojemnoscBaku, pozostaleMiejscowosci)) {
            short paliwoDoZakupu = min(maksymalnaPojemnoscBaku - obecnaPojemnoscBaku, pozostaleMiejscowosci - obecnaPojemnoscBaku);
            wydanePieniadze += obecnaMiescowosc * paliwoDoZakupu;
            obecnaPojemnoscBaku += paliwoDoZakupu;
        }
        
        obecnaPojemnoscBaku--;
        obecnaMiescowosc++;

        if (obecnaPojemnoscBaku >= iloscMiejscowosci - obecnaMiescowosc) {
            break;
        }
    } while (iloscMiejscowosci != obecnaMiescowosc);

    cout << wydanePieniadze;
    return 0;
}