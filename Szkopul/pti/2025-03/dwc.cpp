// Dwa ciągi znaków
#include<iostream>
#include<string>

using namespace std;

bool dcz() {
    string s, t;
    cin >> s >> t;
    if (s.size() != t.size()) return false;
    if (s == t) return true;
    
    int len = s.size();

    for (int i = 1; i < len; i++) {
        for (int j = 1; j < len; j++) {
            string s1 = s.substr(0, i), s2 = s.substr(i, len - i);
            string t1 = t.substr(0, j), t2 = t.substr(j, len - j);

            if (s2 + s1 == t2 + t1) return true;
        }
    }

    return false;
}

int main() {
    short N;
    cin >> N;
    while (N--) {
        if (dcz()) cout << "TAK\n";
        else cout << "NIE\n";
    }
    
    return 0;
}