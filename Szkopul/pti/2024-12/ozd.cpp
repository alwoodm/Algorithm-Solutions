// Ozdoby choinkowe
#include <iostream>

using namespace std;

unsigned int ileZeszytNaKolor(unsigned int ileArkuszyNaOzdobe, unsigned int ileOzdob, unsigned int iloscArkuszyNaZeszyt){
    int result = (ileOzdob * ileArkuszyNaOzdobe) / iloscArkuszyNaZeszyt;
    if ( (ileOzdob * ileArkuszyNaOzdobe) % iloscArkuszyNaZeszyt != 0 ) result++;
    return result;
}

int main() {
    unsigned int ileOzdob,iloscArkuszyNaZeszyt;
    cin >> ileOzdob >> iloscArkuszyNaZeszyt;

    unsigned int ileZeszytow =
            ileZeszytNaKolor(2, ileOzdob, iloscArkuszyNaZeszyt)
            + ileZeszytNaKolor(5, ileOzdob, iloscArkuszyNaZeszyt)
            + ileZeszytNaKolor(8, ileOzdob, iloscArkuszyNaZeszyt);

    cout << ileZeszytow << endl;
    return 0;
}