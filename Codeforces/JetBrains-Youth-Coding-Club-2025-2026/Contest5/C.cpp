#include <iostream>

using namespace std;
typedef int i32;
typedef long long i64;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    i32 n, k;
    if (!(cin >> n >> k)) return 0;

    i32 table[n][n];

    i32 num = 1;
    i32 high = n*n;
    i64 sum = 0;

    for (i32 i = 0; i < n; i++) {
        for (i32 j = 0; j < k-1; j++) table[i][j] = num++;

        for (i32 j = n-1; j >= k-1; j--) {
            table[i][j] = high--;
            if (j == k-1) sum += table[i][j];
        }
    }

    cout << sum << "\n";

    for (i32 i = 0; i < n; i++) {
        for (i32 j = 0; j < n; j++) {
            cout << table[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}