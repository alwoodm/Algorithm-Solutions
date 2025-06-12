#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    std::string s, d="";
    std::cin >> s;

    for (int i=0; i<s.length(); i++) {
        if (d.find(s[i]) == std::string::npos) d+=s[i];
    }

    std::cout << (!(d.size()&1) ? "CHAT WITH HER!" : "IGNORE HIM!");
    return 0;
}