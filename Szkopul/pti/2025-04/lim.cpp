// Liczby monotoniczne
#include <iostream>
#include <string>

using namespace std;

bool CzyMonotoczniczne(string s) {
    if (s.length() == 1) return true;

    bool rosnaco = true, malejaco = true;

    for (int i = 1; i < s.length(); i++) {
        int poprzedniaCyfra = s[i-1] - '0', biezacaCyfra = s[i] - '0';

        if (poprzedniaCyfra >= biezacaCyfra) rosnaco = false;
        if (poprzedniaCyfra <= biezacaCyfra) malejaco = false;

        if (!rosnaco && !malejaco) return false;
    }

    return true;
}

int main() {
    int ciagOd, ciagDo;
    cin >> ciagOd >> ciagDo;

    int counter=0;
    for (int i=ciagOd; i<=ciagDo; i++) {
        string i_string = to_string(i);

        if (CzyMonotoczniczne(i_string)) {
            counter++;
        }
    }

    cout << counter << endl;
    return 0;
}