// Najkrotsze odleglosci znakow
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int zaIleTakiSam(char litera, string slowo, short miejsce){
    for (int i = miejsce + 1; i < slowo.size(); i++) {
        if (litera == slowo[i]) return i - miejsce;
    }
    return 0;
}


int main() {
    string slowo;
    cin >> slowo;

    vector<short> litery;
    for (short i = 0; i < slowo.size(); i++) {
        short zaIle= zaIleTakiSam(slowo[i],slowo, i);
        if(zaIle > 0) litery.push_back(zaIle);
    }

    sort(litery.begin(), litery.end());

    cout << litery[0];

    return 0;
}