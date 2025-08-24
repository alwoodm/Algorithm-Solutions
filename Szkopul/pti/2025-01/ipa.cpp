// Idealna para
#include <iostream>

using namespace std;

int main() {
    short n;
    cin >> n;

    short wzrostUczniow[n];
    for(int i=0; i<n; i++){
        cin >> wzrostUczniow[i];
    }

    short counter=0;

    for(short idUcznia1=0; idUcznia1<n; idUcznia1++){
        for(short idUcznia2=idUcznia1+1; idUcznia2<n; idUcznia2++){
            if(wzrostUczniow[idUcznia1]==wzrostUczniow[idUcznia2]) counter++;
        }
    }

    if(counter==0) counter = 1;


    cout << counter;
    return 0;
}