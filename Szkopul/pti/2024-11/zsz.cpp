// Zamiana sąsiednich znaków
#include <iostream>
#include <string>

using namespace std;

int main() {
    short n;
    cin >> n;
    string slowa[n];
    for (int i = 0; i < n; i++) {
        cin >> slowa[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j=0; j< slowa[i].length() ; j+=2) {
            if(j != slowa[i].length()-1) {
                char a = slowa[i][j];
                char b = slowa[i][j+1];
                slowa[i][j] = b;
                slowa[i][j+1] = a;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << slowa[i] << endl;
    }

    return 0;
}