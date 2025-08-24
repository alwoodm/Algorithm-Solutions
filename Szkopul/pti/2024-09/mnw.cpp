// Małpki na wybiegu
#include <iostream>

using namespace std;

int main() {
    unsigned long long malpy;
    cin >> malpy;
    for(unsigned long long i = 0; i < malpy + 2; i++) {
        cout << "#";
    }
    cout << endl;
    cout << "#";
    for(unsigned long long i = 0; i < malpy; i++) {
        cout << "@";
    }
    cout << "#" << endl;
    for(unsigned long long i = 0; i < malpy + 2; i++) {
        cout << "#";
    }
    
    return 0;
}