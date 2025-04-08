#include <iostream>

using namespace std;

bool newName(string name, string text){
    if(text.size()<11) return false;
    int pom=-1;
    for (int i = 0; i < text.size(); i++) {
        if(name[0]==text[i]) {pom=i; break;}
    }
    if(pom==-1) return false;
    if(text.size()-pom<11) return false;
    return true;
}

int main() {
    int n;
    cin>>n;
    string name,text;
    for(int i =0;i<n;i++)
    {
        cin >> name >> text;
        if(newName(name, text)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}