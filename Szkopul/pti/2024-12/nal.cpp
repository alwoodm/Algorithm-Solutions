// Najczęstsza liczba
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int liczIleRazyWLiscie(int liczna, vector<int> lista) {
    int wynik=0;
    for (int i = 0; i < lista.size(); i++) {
        if (lista[i] == liczna) {
            wynik++;
        }
    }
    return wynik;
}

int main() {
    vector<int> liczbyPodane;
    for (int i = 0; i < 5; i++) {
        int liczba;
        cin >> liczba;
        liczbyPodane.push_back(liczba);
    }
    vector<int> odpowiedzi;
    for (int i = 0; i < 5; i++) {
        odpowiedzi.push_back(liczIleRazyWLiscie(liczbyPodane[i], liczbyPodane));
    }
    cout << liczbyPodane[(max_element(odpowiedzi.begin(), odpowiedzi.end()) - odpowiedzi.begin())] << endl;
    return 0;
}