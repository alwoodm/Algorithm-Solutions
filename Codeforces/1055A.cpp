#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, s;
    cin >> n >> s;
    int forward[n], backward[n];
    for (int i = 0; i < n; ++i) cin >> forward[i];
    for (int i = 0; i < n; ++i) cin >> backward[i];

    if (forward[0] == 0) {
        cout << "NO";
        return 0;
    }

    if (forward[s-1] == 1) {
        cout << "YES";
        return 0;
    }

    if (backward[s-1] == 0) {
        cout << "NO";
        return 0;
    }

    for (int i = s; i < n; i++) {
        if (forward[i] == 1 && backward[i] == 1) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}