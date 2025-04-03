#include <iostream>

using namespace std;

int main() {
    long long a, b, divisibleBy3, divisibleBy5, duplicates;
    cin >> a >> b;
    divisibleBy3 = b / 3 - (a - 1) / 3;
    divisibleBy5 = b / 5 - (a - 1) / 5;
    duplicates = b / 15 - (a - 1) / 15;

    cout << divisibleBy3 + divisibleBy5 - duplicates << endl;
    return 0;
}