// Magiczne kule
#include <iostream>

using namespace std;

int main() {
    int kule[3];
    cin >> kule[0] >> kule[1] >> kule[2];

    int potrzebneKule[3];
    cin >> potrzebneKule[0] >> potrzebneKule[1] >> potrzebneKule[2];

    int brakujaceKule=0, pozostaleKule=0;;
    for (int i = 0; i < 3; i++) {
        if (kule[i]-potrzebneKule[i]<0) brakujaceKule += potrzebneKule[i] - kule[i];
        else pozostaleKule += ( ( kule[i] - potrzebneKule[i] ) / 2 );
    }

    if (pozostaleKule-brakujaceKule>=0) cout << "Tak" << endl;
    else cout << "Nie" << endl;

    return 0;
}