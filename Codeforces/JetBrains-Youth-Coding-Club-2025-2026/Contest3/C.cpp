#include <iostream>

using namespace std;
typedef unsigned short u16;
typedef unsigned long long u64;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    u64 n;
    cin >> n;
    u16 x;
    cin >> x;

    for (u16 i = n % 6; i >= 1; i--) {
        if (!(i & 1)) {
            x = (x==1 ? 2 : (x==2 ? 1 : 0));
        } else {
            x = (x==0 ? 1 : (x==1 ? 0 : 2));
        }
    }

    cout << x;
    return 0;
}