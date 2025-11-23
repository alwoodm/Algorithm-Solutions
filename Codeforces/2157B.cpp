#include <iostream>
#include <algorithm>

using namespace std;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef long long i64;
typedef string str;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    u32 t;
    cin >> t;
    while (t--) {
        u64 n, cnt4=0, cnt8=0;
        i64 targetX, targetY;
        cin >> n >> targetX >> targetY;
        str s;
        cin >> s;
        for (char c : s) {
            if (c == '4') cnt4++;
            else cnt8++;
        }

        cout << (((max(abs(targetX),abs(targetY)) <= n) && ((abs(targetX) + abs(targetY)) <= ((1 * cnt4) + (2 * cnt8)))) ? "YES\n" : "NO\n");
    }

    return 0;
}