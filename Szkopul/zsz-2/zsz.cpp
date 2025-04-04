#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    short n;
    cin >> n;
    vector<string> slowa(n);
    for (int i = 0; i < n; i++) {
        cin >> slowa[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < slowa[i].length() - 1; j += 2) {
            swap(slowa[i][j], slowa[i][j + 1]);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << slowa[i] << endl;
    }

    return 0;
}
