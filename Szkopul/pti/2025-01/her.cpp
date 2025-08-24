// Góralska herbata
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    
    vector<int> cups(n);
    for (int i = 0; i < n; i++) {
        cin >> cups[i];
    }
    
    if (x > y) {
        cout << n << endl; // Wszystkie szklanki opróżnione
    } else {
        int k = 0;
        for (int i = 0; i < n; i++) {
            if (cups[i] <= x) {
                k++; // Liczba szklanek <= x
            }
        }
        cout << (k + 1) / 2 << endl; // ceil(k/2) w arytmetyce całkowitej
    }
    
    return 0;
}