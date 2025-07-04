#include <iostream>
#include <string>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string s;
    std::cin >> s;

    int countCurrentTeam = 0, currentTeam = s[0], i = 0;
    do {
        if (currentTeam == s[i]) {
            countCurrentTeam++;
        } else {
            countCurrentTeam = 1;
            currentTeam = s[i];
        }

        if(countCurrentTeam > 6) {
            std::cout << "YES";
            return 0;
        }

        i++;
    } while (i < s.length());

    std::cout << "NO";
    return 0;
}
