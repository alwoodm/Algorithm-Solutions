// Podzielniki 2 i 3
#include <iostream>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        set<int> s;

        for (int pow2 = 1; pow2 <= n; pow2 *= 2) {
            for (int pow3 = 1; pow2 * pow3 <= n; pow3 *= 3) {
                if (pow2 > 1 || pow3 > 1) {
                    s.insert(pow2 * pow3);
                }
            }
        }

        cout << s.size() << "\n";
    }

    return 0;
}
