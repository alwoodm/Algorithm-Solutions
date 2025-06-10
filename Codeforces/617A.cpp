#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int x;
    std::cin>>x;

    std::cout<< (!(x%5) ? x/5 : (x/5)+1);
    return 0;
}