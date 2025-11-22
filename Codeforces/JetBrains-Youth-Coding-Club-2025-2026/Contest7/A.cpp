#include <iostream>

using namespace std;
typedef unsigned short u16;
typedef unsigned long long u64;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    u16 n,k;
    u64 count=0;
    cin >> n >> k;
    u16 arr[n];
    for (u16 & i: arr) {
        cin >> i;
    }

    for (int i = 0; i < n-1; i++) {
        if (arr[i] + arr[i+1] < k) {
            count += k - (arr[i] + arr[i+1]);
            arr[i+1] = k - arr[i];
        }
    }

    cout << count << "\n";
    for (u16 i: arr) {
        cout << i << " ";
    }
    return 0;
}