#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::string s;
        std::cin >> n >> k >> s;

        std::vector<int> pref(n+1, 0);
        for (int i = 0; i < n; i++) {
            pref[i+1] = pref[i] + (s[i] == '1');
        }

        bool impossible = false;
        for (int i = 0; i + k <= n; i++) {
            if (pref[i+k] - pref[i] == k) {
                impossible = true;
                break;
            }
        }

        if (impossible) {
            std::cout << "NO\n";
        }
        else {
            std::cout << "YES\n";

            std::vector<int> p(n);
            std::vector<int> ones, zeros;
            for (int i = 0; i < n; i++) {
                (s[i] == '1' ? ones : zeros).push_back(i);
            }
            int val = 1;
            for (int i : ones)  {
                p[i] = val++;
            }
            for (int i : zeros) {
                p[i] = val++;
            }
            for (int i = 0; i < n; i++) {
                std::cout << p[i] << (i+1<n ? ' ' : '\n');
            }
        }
    }
    return 0;
}
