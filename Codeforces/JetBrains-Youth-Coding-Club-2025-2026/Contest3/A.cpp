#include <iostream>
#include <algorithm>

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

    int pos1 = -1, posN = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 1) pos1 = i;
        if (arr[i] == n) posN = i;
    }

    cout << max({posN, (n - 1) - posN, pos1, (n - 1) - pos1});
    return 0;
}