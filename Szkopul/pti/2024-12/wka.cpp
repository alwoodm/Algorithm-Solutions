// Wszyscy kochają "A"
#include <iostream>
#include <string>

using namespace std;

short liczAWSlowie(string slowo){
    short counter=0;

    for (short i = 0; i < slowo.length(); i++) {
        if (slowo[i] == 'a' || slowo[i] == 'A') counter++;
    }
    return counter;
}

int main() {
    int n;
    cin >> n;

    for (int i=0; i<n; i++){
        string slowo;
        cin >> slowo;

        short ileA=liczAWSlowie(slowo), ileInnych=slowo.size() - liczAWSlowie(slowo);

        while(ileInnych>=ileA){
            ileInnych--;
        }

        cout << ileA+ileInnych << endl;
    }
    
    return 0;
}