#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        long long sum = 0;
        std::cin >> n >> k;
        std::vector<int> a(n), b(k);
        for(int& i : a) {
            std::cin >> i;
        }
        for(int& i : b) {
            std::cin >> i;
        }

        std::sort(a.begin(), a.end(), std::greater<int>());
        for(int price : a) {
            sum += price;
        }

        std::sort(b.begin(), b.end());

        int idx = 0;
        for(int i = 0; i < k && idx < n; i++) {
            int voucher_size = b[i];

            if(idx + voucher_size <= n) {
                sum -= a[idx + voucher_size - 1];
                idx += voucher_size;
            } else break;
        }

        std::cout << sum << '\n';
    }
    return 0;
}