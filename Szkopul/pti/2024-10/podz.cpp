// Podzielność
#include <iostream>

using namespace std;

int main() {
    long long a, b, podzielnePrzez3, podzielnePrzez5, duplikaty;
    cin >> a >> b;
    podzielnePrzez3 = b / 3 - (a - 1) / 3;
    podzielnePrzez5 = b / 5 - (a - 1) / 5;
    duplikaty = b / 15 - (a - 1) / 15;

    cout << podzielnePrzez3 + podzielnePrzez5 - duplikaty << endl;
    return 0;
}