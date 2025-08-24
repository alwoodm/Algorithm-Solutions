// Środkowa liczba
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    unsigned long long n;
    int a, b, c;
    vector<int>answers;
    cin >> n;
    for(unsigned long long i = 0; i < n; i++){
        cin >> a >> b >> c;
        vector<int>lista = {a, b , c};

        sort(lista.begin(), lista.end());
        answers.push_back(lista[1]);
    }
    for (int j = 0; j < answers.size(); j++) {
        cout << answers[j] << endl;
    }
    return 0;
}