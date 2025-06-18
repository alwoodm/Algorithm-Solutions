#include <iostream>
#include <algorithm>

int main(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    std::string s,t;
    std::cin >> s;
    std::cin >> t;

    std::reverse(s.begin(), s.end());
    std::cout << (s == t ? "YES" : "NO");
    return 0;
}