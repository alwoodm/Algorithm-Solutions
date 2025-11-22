#include <iostream>

using namespace std;
typedef unsigned short u16;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    u16 n;
    cin >> n;
    u16 arr[n];
    for (u16 & i: arr) {
        cin >> i;
    }

    if (((n & 1) == 0) || ((arr[0] & 1) == 0) || ((arr[n-1] & 1) == 0) ) {
        cout << "No";
        return 0;
    }

    cout << "Yes";
    return 0;
}