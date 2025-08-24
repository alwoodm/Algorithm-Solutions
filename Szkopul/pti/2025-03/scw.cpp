// Schodami czy windą?
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    short x, y, z, t1, t2, t3; 
    cin >> x >> y >> z >> t1 >> t2 >> t3;
    
    cout << (((abs(x-z) * t2) + (abs(x-y) * t2) + 3*t3) <= (abs(x-y)*t1) ? "Tak" : "Nie");
    return 0;
}