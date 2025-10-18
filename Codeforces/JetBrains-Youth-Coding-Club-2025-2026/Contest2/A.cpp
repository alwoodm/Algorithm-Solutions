#include <iostream>
#include <string>

typedef unsigned short u16;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    u16 n, m;
    cin >> n >> m;
    u16 flag[n][m];
    for (u16 i = 0; i < n; ++i) {
        string row;
        cin >> row;
        for (u16 j = 0; j < m; ++j) {
            flag[i][j] = static_cast<u16>(row[j] - '0');
        }
    }

    bool canBe = true;
    u16 oldColor = flag[0][0];
    for (u16 i = 0; i < m; i++) {
        if (flag[0][i] != oldColor) {
            canBe = false;
            break;
        }
    }

    for (u16 i = 1; i < n && canBe; i++) {
        u16 currColor = flag[i][0];
        for (u16 j = 0; j < m; j++) {
            if (flag[i][j] != currColor) {
                canBe = false;
                break;
            }
        }
        if (!canBe) break;

        if (currColor == oldColor) {
            canBe = false;
            break;
        }

        oldColor = flag[i][0];
    }

    cout << (canBe ? "YES" : "NO");
    return 0;
}