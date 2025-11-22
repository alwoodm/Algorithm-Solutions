#include <iostream>

using namespace std;
typedef unsigned int u32;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    u32 startSize, endSize, moves=0;
    cin >> startSize >> endSize;

    u32 a = endSize,b = endSize,c = endSize;

    while (a < startSize || b < startSize || c < startSize) {
        if (a <= b && a <= c) a = min(b + c - 1, startSize);
        else if (b <= a && b <= c) b = min(a + c - 1, startSize);
        else c = min(a + b - 1, startSize);

        moves++;
    }

    cout << moves;
    return 0;
}