#include <iostream>

using namespace std;
typedef unsigned long long u64;
typedef unsigned int  u32;
typedef unsigned short u16;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    u32 n;
    cin >> n;
    u16 arr[n];
    for (u16 & i: arr) {
        cin >> i;
    }

    u32 i = 0, j = n - 1;
    u32 eatA = 0, eatB = 0;
    u64 timeA = 0, timeB = 0;

    while (i <= j) {
        if (timeA <= timeB) {
            timeA += arr[i];
            ++eatA;
            ++i;
        } else {
            timeB += arr[j];
            ++eatB;
            --j;
        }
    }

    cout << eatA << ' ' << eatB;
    return 0;
}