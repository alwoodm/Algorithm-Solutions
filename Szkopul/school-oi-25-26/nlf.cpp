// Największa liczba Fibonacci'ego
#include <iostream>
#include <vector>

using namespace std;

typedef unsigned long long u64;

vector<u64> fib = {0, 1};

void calcFibTo(u64 n){
    for(u64 i=fib.size()-1; i<=n; i++){
        fib.push_back(fib[i-1] + fib[i]);
    }
}

auto getFib = [](u64 n) { return fib[n]; };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    u64 t;
    cin >> t;
    while(t--) {
        u64 n;
        cin >> n;

        u64 i=0;
        while (getFib(i) < n){
            calcFibTo(i+1);
            i++;
        }

        cout << getFib(i-1) << '\n';
    }

    return 0;
}
