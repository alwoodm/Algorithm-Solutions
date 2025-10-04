#include <iostream>
#include <algorithm>

int solve(int a[], int n, int k) {
    std::sort(a, a+n);

    if (k==0) return (a[0]>1 ? 1 : -1);
    if (k==n) return a[n-1];
    return (a[k-1] < a[k] && a[k-1] != a[k] ? a[k-1] : -1);
}


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n,k;
    std::cin >> n >> k;
    int a[n];
    for (int& i : a) {
        std::cin >> i;
    }

    std::cout << solve(a, n, k);
    return 0;
}
