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

    if (n == 1) {
        if (arr[0] == 0) cout << "UP";
        else if (arr[0] == 15) cout << "DOWN";
        else cout << "-1";
        return 0;
    }

    cout << (arr[n-1]>arr[n-2] ? (arr[n-1]==15 ? "DOWN" : "UP" ) : ( arr[n-1]==0 ? "UP" : "DOWN"));
    return 0;
}