#include <iostream>

int main(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int w;
    std::cin >> w;

    std::cout << (!(w & 1) && w > 3 ? "YES" : "NO");
    return 0;
}