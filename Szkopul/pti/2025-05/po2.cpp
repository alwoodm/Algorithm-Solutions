// Potęgi liczby 2
#include <iostream>

using namespace std;

bool isPowerOf2(int n){
    return n > 0 && (n & (n - 1)) == 0;
}

bool canBeDecomposes(int n){
    int power = 1;

    while (power <= n) {
        int remaining = n - power;

        if (isPowerOf2(remaining)) {
            return true;
        }

        power *= 2;
    }

    return false;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int K, n;
    cin >> K;

    for (int i = 0; i < K; i++) {
        cin >> n;

        cout << (canBeDecomposes(n) ? "si" : "no") << endl;
    }

    return 0;
}