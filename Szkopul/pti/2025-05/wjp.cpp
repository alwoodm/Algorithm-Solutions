// Wszyscy jesteśmy Pitagorasami
#include <iostream>
#include <cmath>

using namespace std;

int NWD(int a, int b) {
    return b == 0 ? a : NWD(b, a % b);
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    cin >> n;

    int sum=0;

    for (int a = 1; a <= n; a++) {
        for (int b = a; b <= n; b++) {
            int c_squared = pow(a, 2) + pow(b, 2);
            int c = sqrt(c_squared);

            if (pow(c, 2) == c_squared && c <= n) {
                if (NWD(NWD(a, b), c) == 1) {
                    sum++;
                }
            }
        }
    }

    cout << sum;
    return 0;
}