#include <iostream>

using namespace std;

struct chair {
    int number{};
    bool is_checked = false;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int p_size;
        cin >> p_size;
        chair p[p_size];

        for(int i = 0; i < p_size; i++) {
            cin >> p[i].number;
        }

        int sum = 0;
        for(int i = 0; i < p_size; i++) {
            if(p[i].is_checked) {
                break;
            }
            if(p[i].number - 1 <= i) {
                sum += 1;
                p[p[i].number - 1].is_checked = true;
            }
        }
        cout << sum << '\n';
    }
    return 0;
}