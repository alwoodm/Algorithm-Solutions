// Cyfry parzyste i nieparzyste
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    short n;
    cin >> n;

    vector<short> licznik(n);

    for (int i = 0; i < n; i++) {
        short a, b;
        cin >> a >> b;

        licznik[i] = 0;

        for (int j = a + 1; j < b; j++) {
            string jStr = to_string(j);
            int jEven = 0, jOdd = 0;

            for (int k = 0; k < jStr.size(); k++) {
                if ((jStr[k] - '0') % 2 == 0)
                    jEven++;
                else
                    jOdd++;
            }

            if (jOdd == jEven)
                licznik[i]++;
        }
    }

    for (int i = 0; i < n; i++) { 
        cout << licznik[i] << endl;
    }

    return 0;
}