#include <iostream>

using namespace std;

int main() {
    int numberOfChocolates;
    cin >> numberOfChocolates;

    int requiredChocolates = 0;
    
    while (numberOfChocolates > 0) {
        
        if (numberOfChocolates % 2 == 1) {
            requiredChocolates++;
        }

        numberOfChocolates /= 2;
    }

    cout << requiredChocolates << endl;
    return 0;
}