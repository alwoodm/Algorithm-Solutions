#include <iostream>
using namespace std;

int main() {
    unsigned long long x, power = 1;
    int counter = 0;
    cin >> x;
    while (power <= x) {
        counter++;
        power *= 2;
    }
    cout << counter;
    return 0;
}