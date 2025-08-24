// Niemal palindrom
#include <iostream>

using namespace std;

char asciiToChar(int ascii) {
    return ascii;
}

int charToAscii(char litera) {
    return litera;
}

bool checkNearLetters(char litera1, char litera2) {
    if (litera1 == litera2) return true;
    else if (litera1 == asciiToChar(charToAscii(litera2) + 1) || litera2 == asciiToChar(charToAscii(litera1) + 1)) return true;
    else if (litera1 == asciiToChar(charToAscii(litera2) - 1) || litera2 == asciiToChar(charToAscii(litera1) - 1)) return true;
    else return false;
}

bool checkPalindrome(string slowo){
    for (int i = 0; i < slowo.size()/2; i++) {
        int leftLetter=slowo[i];
        int rightLetter=slowo[slowo.size()-(i+1)];
        if (checkNearLetters(leftLetter, rightLetter) == false) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s.size() == 1 || checkPalindrome(s)) cout << "Tak" << endl;
        else cout << "Nie" << endl;

    }
    return 0;
}