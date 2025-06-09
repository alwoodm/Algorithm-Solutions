#include <iostream>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int n,m,a,b;
    std::cin>>n>>m>>a>>b;

    int cost1 = a * n, cost2 = ((n / m) * b) + ((n % m) * a), cost3 = ((n + m - 1) / m) * b;

    std::cout << std::min({cost1, cost2, cost3});
    return 0;
}
