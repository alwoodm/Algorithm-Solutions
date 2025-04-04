#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool IsVowel(char letter){
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'};
    if(find(vowels.begin(), vowels.end(), letter) != vowels.end()){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    string Name1, Name2;
    cin>>Name1>>Name2;
    if(Name1.size() != Name2.size())
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < Name1.size(); i++) {
        if (IsVowel(Name1[i]) && IsVowel(Name2[i])){
        }
        else if (!IsVowel(Name1[i]) && !IsVowel(Name2[i])){
        }
        else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}