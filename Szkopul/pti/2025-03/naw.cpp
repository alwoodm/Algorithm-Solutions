// Nawiasy
#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool czyNawiasyPasuja(char no, char nz){
    return (no == '(' && nz == ')') ||
           (no == '[' && nz == ']') ||
           (no == '{' && nz == '}') ||
           (no == '<' && nz == '>');
}

bool sprawdzNawiasy(const string& napis){
    stack<char> stos;

    for (char znak : napis) {
        if (znak == '(' || znak == '[' || znak == '{' || znak == '<') {
            stos.push(znak);
        } else {
            if (stos.empty()) return false;
            char ostatni = stos.top();
            stos.pop();
            if (!czyNawiasyPasuja(ostatni, znak)) return false;
        }
    }

    return stos.empty();
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    short n;
    cin >> n;

    while (n--) {
        string napis;
        cin >> napis;
        cout << (sprawdzNawiasy(napis) ? 'T' : 'N') << '\n';
    }

    return 0;
}