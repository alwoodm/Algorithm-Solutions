// Babę zesłał Bóg
#include <iostream>
#include <string>

using namespace std;

bool isBaba(string s){
    string b="baba";
    int pos=0;
    if(s.length()<4) return false;
    for (int i = 0; i < 4; i++)
    {
        while(s[pos] != b[i])
        {
            pos++;
            if (pos == s.size()) return false;
        }
    }
    return true;
}

int main(){
    short n;
    cin>>n;
    string s;
    for (int i = 0; i < n; i++) {
        cin>>s;
        if(isBaba(s)) cout << "Tak\n";
        else cout << "Nie\n";
    }
    return 0;
}