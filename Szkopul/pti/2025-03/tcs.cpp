// Trzy czułe słówka
#include <iostream>
#include <string>

using namespace std;

int main() {
    string czuleSlowa[3];
    for (int i = 0; i < 3; i++) {
        cin >> czuleSlowa[i];
        cin.ignore();
    }

    string slowa;

    getline(cin, slowa);

    short counter = 0;

    for (int i = 0; i < 3; i++) {
        if (slowa.find(czuleSlowa[i]) != std::string::npos) counter++;
    }

    cout << counter;
    return 0;
}