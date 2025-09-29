// Dwa dzielniki pierwsze
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef unsigned int u32;

vector<u32> prim = {};

bool isPrime(u32 n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i <= static_cast<u32>(sqrt(n)); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

void calcPrimTo(u32 n) {
    prim.clear();
    for (u32 i = 2; i <= static_cast<u32>(sqrt(n)); ++i) {
        if (isPrime(i)) {
            prim.push_back(i);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    u32 t;
    cin >> t;
    while(t--) {
        u32 n;
        cin >> n;

        calcPrimTo(n);
        u32 prim_count = 0;

        for (u32 i = 0; i < prim.size() && prim_count <= 3; i++) {
            if (n % prim[i] == 0) {
                prim_count++;
                while (n % prim[i] == 0) {
                    n /= prim[i];
                }
            }
        }

        if (n > 1) {
            prim_count++;
        }

        cout << (prim_count == 2 ? "TAK\n" : "NIE\n");
    }

    return 0;
}