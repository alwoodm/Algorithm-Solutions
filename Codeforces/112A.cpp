#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string s1, s2;
    std::cin >> s1 >> s2;

    std::transform(s1.begin(), s1.end(), s1.begin(), [](unsigned char c){ return std::tolower(c); });
    std::transform(s2.begin(), s2.end(), s2.begin(), [](unsigned char c){ return std::tolower(c); });

    std::cout << ( (s1<s2) ? -1 : ( (s1>s2) ? +1 : 0 ) );
    return 0;
}