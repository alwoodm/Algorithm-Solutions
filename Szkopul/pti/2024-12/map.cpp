// Magiczne podwojenie
#include <iostream>

using namespace std;

int main() {
    int liczbaCzekoladek;
    cin >> liczbaCzekoladek;

    int ilePotrzebaCzekolad = 0;
    
    while (liczbaCzekoladek > 0) {
        
        if (liczbaCzekoladek % 2 == 1) {
            ilePotrzebaCzekolad++;
        }

        liczbaCzekoladek /= 2;
    }

    cout << ilePotrzebaCzekolad << endl;
    return 0;
}