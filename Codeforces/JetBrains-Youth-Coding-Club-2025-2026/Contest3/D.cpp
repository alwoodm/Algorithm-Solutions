#include <iostream>

using namespace std;
typedef unsigned int u32;
typedef string str;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    str s;
    cin >> s;

    u32 l = s.size(), i = 0;
    while (i < s.size() && s[i] == 'a') i++;
    if (i == l) {
        s[l - 1] = 'z';
    } else {
        while (i < l && s[i] != 'a') {
            s[i] = static_cast<char>(s[i] - 1);
            i++;
        }
    }

    cout << s;
    return 0;
}