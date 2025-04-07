#include <iostream>

using namespace std;

int main() {
    string slowoSzyfr, wynik="";
    cin >> slowoSzyfr;
    
    for (int i = 0; i < slowoSzyfr.size(); i++) {
        if (slowoSzyfr[i] == 'j') wynik += '1';
        else if (slowoSzyfr[i] == 'z') wynik += '0';
    }
    
    cout << wynik << endl;
    return 0;
}
