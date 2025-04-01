#include <iostream>

using namespace std;

int main() {
    unsigned long long x;
    cin >> x;
    while(x>=1) {
        if(x % 16 >= 10) {
            cout << "YES";
            return 0;
        }
        x = x / 16;
    }
    cout << "NO";
    return 0;
}