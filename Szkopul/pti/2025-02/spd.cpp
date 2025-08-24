// Silnia podwójna
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long result = 1;

    if (n == 0) {
        cout << result;
        return 0;
    }
    
    for (int i = n; i > 0; i -= 2) {
        result *= i;
    }
    
    cout << result;
    return 0;
}