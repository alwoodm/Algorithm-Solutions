// Średnie ze średnich
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<double> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    while(v.size() > 1) {
        for(int i = 0; i < v.size() - 1; i++) {
            v[i] = (v[i] + v[i+1]) / 2;
        }
        v.pop_back();
    }

    cout << fixed;
    cout.precision(3);
    cout << v[0];
    return 0;
}
