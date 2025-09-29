// Trzy liczby i wielokrotność
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        unsigned long long a,b,c;
        cin >> a >> b >> c;

        cout << ((a%b==0) || (b%a==0) || (a%c==0) || (c%a==0) || (b%c==0) || (c%b==0) ? "TAK\n" : "NIE\n");
    }

    return 0;
}
