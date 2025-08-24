// Przemiana superbohatera
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool CzyLiteraIJestSamoglosko(char litera){
    vector<char> samogloski = {'a', 'e', 'i', 'o', 'u', 'y'};
    if(find(samogloski.begin(), samogloski.end(), litera) != samogloski.end()){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    string Imie1, Imie2;
    cin>>Imie1>>Imie2;
    if(Imie1.size() != Imie2.size())
    {
        cout << "NIE";
        return 0;
    }
    for (int i = 0; i < Imie1.size(); i++) {
        if (CzyLiteraIJestSamoglosko(Imie1[i]) && CzyLiteraIJestSamoglosko(Imie2[i])){
        }
        else if (!CzyLiteraIJestSamoglosko(Imie1[i]) && !CzyLiteraIJestSamoglosko(Imie2[i])){
        }
        else {
            cout << "NIE";
            return 0;
        }
    }
    cout << "TAK";
    return 0;
}