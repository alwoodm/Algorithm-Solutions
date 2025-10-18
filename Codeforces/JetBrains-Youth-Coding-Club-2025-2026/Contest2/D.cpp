#include <iostream>

using namespace std;
typedef unsigned long long u64;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    u64 n;
    cin >> n;

    cout << (!(n&1) ? ((n/2)*(n/2))-1 : ((n*n)-1)/2) << ' ' << (!(n&1) ? ((n/2)*(n/2))+1 : ((n*n)+1)/2);
    return 0;
}
