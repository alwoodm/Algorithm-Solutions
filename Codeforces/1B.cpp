#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

bool getSystem(std::string cell) {
    if (cell.empty() || cell[0] != 'R') return false;

    int i = 1;
    int n = cell.size();

    if (i >= n || !std::isdigit(cell[i])) return false;
    while (i < n && std::isdigit(cell[i])) ++i;

    if (i >= n || cell[i] != 'C') return false;
    ++i;

    if (i >= n || !std::isdigit(cell[i])) return false;
    while (i < n && std::isdigit(cell[i])) ++i;

    return i == n;
}

std::string getRXCY(std::string cellSpreadsheet) {
    int digitStart = 0;
    for (int i = 0; i < cellSpreadsheet.size(); ++i) {
        if (std::isdigit(cellSpreadsheet[i])) {
            digitStart = i;
            break;
        }
    }
    std::string letters = cellSpreadsheet.substr(0, digitStart);

    int sumOfLetters = 0;
    for (int i = 0; i < letters.size(); ++i) {
        sumOfLetters = sumOfLetters * 26 + (letters[i] - 'A' + 1);
    }

    return "R" + cellSpreadsheet.substr(digitStart, cellSpreadsheet.size()-digitStart+1) + "C" + std::to_string(sumOfLetters);
}

std::string getSpreadsheets(std::string cellRXCY) {
    int cPos = cellRXCY.find('C', 1);;

    int numOfLetters = std::stoi(cellRXCY.substr(cPos+1, cellRXCY.size()-cPos+1));

    std::string letters = "";
    while(numOfLetters > 0) {
        numOfLetters--;
        letters.push_back('A' + (numOfLetters % 26));
        numOfLetters /= 26;
    }
    std::reverse(letters.begin(), letters.end());

    return letters + cellRXCY.substr(1, cPos-1);
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    std::cin >> n;

    std::string s;
    for (int i=0; i<n ; i++) {
        std::cin >> s;
        std::cout << (getSystem(s) ? getSpreadsheets(s) : getRXCY(s)) << '\n';
    }
    return 0;
}
