#include <bits/stdc++.h>

std::unordered_set<std::string> database;
std::unordered_map<std::string, int> maxIndex;

std::string processRegistration(const std::string& login) {
    if (!database.count(login)) {
        database.insert(login);
        maxIndex[login] = 0;
        return "OK";
    }

    std::string newName = login + std::to_string(++maxIndex[login]);

    database.insert(newName);
    return newName;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::string name;

    while(n--) {
        std::cin >> name;
        std::cout << processRegistration(name) << '\n';
    }

    return 0;
}
