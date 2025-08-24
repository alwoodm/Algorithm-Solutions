// Włamanie do galerii
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    short n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    int wynik=a[n-1]-a[0]+1-n;
    cout << wynik << endl;
    return 0;
}