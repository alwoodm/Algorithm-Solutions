// Przykrycie punktów
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int bok = 0;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        bok=max(bok,x+y);
    }

    cout << bok << endl;
    return 0;
}