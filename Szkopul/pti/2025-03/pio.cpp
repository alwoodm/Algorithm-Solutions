// Pierwsza i ostatnia cyfra
#include <iostream>
#include <string>

using namespace std;

int main()
{
    short n;
    cin >> n;
    
    for(int i=0; i < n; i++){
        string number;
        cin >> number;
        
        cout << (number[0]==number[number.length() - 1] ? "Ano!" : "Ne!") << endl;
    }

    return 0;
}