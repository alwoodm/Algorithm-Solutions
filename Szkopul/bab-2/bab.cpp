#include <iostream>
#include <string>

using namespace std;

/**
 * Checks if the word contains "baba" as a subsequence
 * A subsequence means the characters appear in order but not necessarily adjacent
 */
bool containsBaba(string word) {
    // Target subsequence to find
    string target = "baba";
    int targetPos = 0;  // Current position in target
    
    // Early check - if the word is shorter than 4 chars, it can't contain "baba"
    if(word.length() < 4) return false;
    
    // Scan through the word looking for each character of "baba" in sequence
    for(int i = 0; i < word.length(); i++) {
        // If current character matches the needed character in the target
        if(word[i] == target[targetPos]) {
            targetPos++;
            // If we've matched all 4 characters, we found the subsequence
            if(targetPos == 4) return true;
        }
    }
    
    // If we scanned the whole word but didn't match all 4 characters
    return false;
}

int main() {
    int n;
    cin >> n;
    string word;
    
    for(int i = 0; i < n; i++) {
        cin >> word;
        if(containsBaba(word)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}