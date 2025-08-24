// Silnia i dwójki
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, m, sum, i2, iterator;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> m;
        sum = 0;
        i2 = 2;
        iterator=1;

        while (m/i2>0) {
            sum += m/i2;
            iterator++;
            i2 = pow(2, iterator);
        }

        cout << sum << endl;
    }

    return 0;
}