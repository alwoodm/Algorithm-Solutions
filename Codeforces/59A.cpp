#include <iostream>
#include <cctype>
#include <string>

std::string to_uppercase(std::string w) {
    for (char &c : w) {
        c = std::toupper(c);
    }
    return w;
}

std::string to_lowercase(std::string w) {
    for (char &c : w) {
        c = std::tolower(c);
    }
    return w;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    std::string w;
    std::cin >> w;

    int male = 0, duze = 0;
    for(char c : w) {
        if (std::islower(c)) male++;
        else if (std::isupper(c)) duze++;
    }

    std::cout << ((male >= duze) ? to_lowercase(w) : to_uppercase(w));
    return 0;
}
