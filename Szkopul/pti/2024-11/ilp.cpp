// Ilość nieparzystych podzielników
#include <iostream>

using namespace std;

int main() {
    unsigned int n, index=0;
    cin >> n;
    for(int i=1; i<=n;i++) {
        if (n%i==0 && i%2==1) index++;
    }
    cout << index << endl;

    return 0;
}