#include <iostream>

using namespace std;
typedef long long i64;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    i64 n, k;
    cin >> n >> k;
    i64 arr[n];
    for (i64 & i: arr) {
        cin >> i;
    }

    for (i64 i = 0; i < n; i++) {
        if (arr[i] < 0 && k > 0) {
            arr[i] = -arr[i];
            k--;
        }
    }

    i64 sum = 0, min_val = 20000;

    for (const i64 i : arr) {
        sum += i;
        if (i < min_val) {
            min_val = i;
        }
    }

    if (k > 0 && k % 2 == 1) {
        sum -= 2 * min_val;
    }

    cout << sum << endl;

    return 0;
}