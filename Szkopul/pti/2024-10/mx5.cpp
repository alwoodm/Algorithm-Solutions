// Najlepszy z pięciu
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    vector<int>liczby = {a,b,c,d,e};
    sort(liczby.begin(), liczby.end());
    cout << liczby[liczby.size()-1];
    return 0;
}