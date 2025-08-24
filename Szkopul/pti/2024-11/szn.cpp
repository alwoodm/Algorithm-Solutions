// Szkolna niesprawiedliwość
#include <iostream>

using namespace std;

int main() {
    short n;
    cin >> n;
    short numery[n];
    for(int i=0;i<n;i++)
    {
        cin >> numery[i];
    }
    cout<<0<<' ';
    for (int i=1;i<n;i++)
    {
        int licznik=0;
        for(int j=0;j<i;j++){
            if(numery[j]>numery[i]) licznik++;
        }
        cout <<licznik << ' ';
    }
    return 0;
}