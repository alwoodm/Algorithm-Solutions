#include <iostream>
#include <string>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t, a, b;
    std::cin >> t;

    std::string ab;
    while(t--){
        std::cin >> ab;

        std::cout << (ab[0] - '0') + (ab[2] - '0') << '\n';
    }

}