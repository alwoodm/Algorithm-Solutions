// Szyfr Piotera
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string key, word;
    getline(cin, key);
    getline(cin, word);

    for (int i = 0; i < word.length(); i++) {
        for (int j = 0; j < key.length()-1; j+=3) {
                    if(word[i]==key[j])word[i] = key[j+1];
                    else if(word[i]==key[j+1]) word[i] = key[j];
            }
        }
    cout << word;
    return 0;
}