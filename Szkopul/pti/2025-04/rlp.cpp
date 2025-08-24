// Raz z lewej, raz z prawej
#include <iostream>

using namespace std;

int main() {
    string n;
    cin >> n;

    string s = "";

    while (n.size()>0) {
        if (n.size()%2 == 1) {
            s = n.front() + s;
            n.erase(n.begin());
        } else {
            s = n.back() + s;
            n.erase(n.end()-1);
        }
    }

    cout << s << endl;
    return 0;
}