#include <iostream>

using namespace std;

int main() {
    unsigned long long monkeys;
    cin >> monkeys;
    for(unsigned long long i = 0; i < monkeys + 2; i++) {
        cout << "#";
    }
    cout << endl;
    cout << "#";
    for(unsigned long long i = 0; i < monkeys; i++) {
        cout << "@";
    }
    cout << "#" << endl;
    for(unsigned long long i = 0; i < monkeys + 2; i++) {
        cout << "#";
    }
    
    return 0;
}