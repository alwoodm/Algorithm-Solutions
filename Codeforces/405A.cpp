#include <iostream>
#include <algorithm>

bool compare(int a, int b) {
    return a < b;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    int A[n];
    for (int &x : A) {
        std::cin >> x;
    }

    std::sort(A, A + n, compare);

    for (int &x : A) {
        std::cout << x << (&x == &A[n-1] ? "" : " ");
    }
    return 0;
}