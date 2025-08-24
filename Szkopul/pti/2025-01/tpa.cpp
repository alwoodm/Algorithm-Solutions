// Taneczny palindrom
#include <iostream>

using namespace std;

int main() {
    short iloscTancerek, kosztBiala, kosztCzarna;
    cin >> iloscTancerek >> kosztBiala >> kosztCzarna;

    short kostiumyTancerek[iloscTancerek];
    for (int i = 0; i < iloscTancerek; i++) {
        cin >> kostiumyTancerek[i];
    }

    int sumaWydatkow = 0;
    for (int i = 0; i < iloscTancerek / 2; i++) {
        int j = iloscTancerek - 1 - i;

        if (kostiumyTancerek[i] == 0 && kostiumyTancerek[j] == 0) {
            if (kosztBiala <= kosztCzarna) {
                sumaWydatkow += 2 * kosztBiala;
                kostiumyTancerek[i] = 1;
                kostiumyTancerek[j] = 1;
            } else {
                sumaWydatkow += 2 * kosztCzarna;
                kostiumyTancerek[i] = 2;
                kostiumyTancerek[j] = 2;
            }
        }
        else if (kostiumyTancerek[i] == 0) {
            if (kostiumyTancerek[j] == 1) {
                sumaWydatkow += kosztBiala;
                kostiumyTancerek[i] = 1;
            } else if (kostiumyTancerek[j] == 2) {
                sumaWydatkow += kosztCzarna;
                kostiumyTancerek[i] = 2;
            }
        }
        else if (kostiumyTancerek[j] == 0) {
            if (kostiumyTancerek[i] == 1) {
                sumaWydatkow += kosztBiala;
                kostiumyTancerek[j] = 1;
            } else if (kostiumyTancerek[i] == 2) {
                sumaWydatkow += kosztCzarna;
                kostiumyTancerek[j] = 2;
            }
        } 
        else if (kostiumyTancerek[i] != kostiumyTancerek[j]) {
            cout << "NIE";
            return 0;
        }
    }

    if (iloscTancerek % 2 == 1 && kostiumyTancerek[iloscTancerek / 2] == 0) {
        if (kosztBiala <= kosztCzarna) {
            sumaWydatkow += kosztBiala;
            kostiumyTancerek[iloscTancerek / 2] = 1;
        } else {
            sumaWydatkow += kosztCzarna;
            kostiumyTancerek[iloscTancerek / 2] = 2;
        }
    }
    
    cout << sumaWydatkow;
    return 0;
}