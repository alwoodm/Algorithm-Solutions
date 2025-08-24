// Czego więcej, X czy Y?
#include <iostream>

using namespace std;

short ileWSlowie(string slowo, char litera){
    short counter=0;
    for (int i = 0; i < slowo.size(); i++) {
        if (slowo[i]==litera) counter++;
    }
    return counter;
}

int main() {
    short n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string ciag, szukane;
        cin >> ciag >> szukane;

        short ileX = ileWSlowie(ciag, szukane[0])
            , ileY = ileWSlowie(ciag, szukane[1]);

        if (ileX>ileY) cout << szukane[0] << endl;
        else if (ileX==ileY) cout << "=" << endl;
        else cout << szukane[1] << endl;
    }

    return 0;
}