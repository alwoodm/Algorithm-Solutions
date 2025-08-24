// Przenoszenie
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    unsigned int n; 
    cin >> n;
    vector<int> answers;

    for (unsigned int i = 0; i < n; i++) {
        unsigned long long a, b; 
        cin >> a >> b;

        string a_str = to_string(a);
        string b_str = to_string(b);

        if (a_str.size() < b_str.size()) {
            a_str.insert(0, b_str.size() - a_str.size(), '0');
        } else if (b_str.size() < a_str.size()) {
            b_str.insert(0, a_str.size() - b_str.size(), '0');
        }

        int index = 0;
        int carry = 0;

        for (int j = a_str.size() - 1; j >= 0; j--) {
            int a_int = a_str[j] - '0';
            int b_int = b_str[j] - '0';

            if (a_int + b_int + carry >= 10) {
                carry = 1;
                index++;
            } else {
                carry = 0;
            }
        }

        answers.push_back(index);
    }

    for (int i = 0; i < answers.size(); i++) {
        cout << answers[i] << endl;
    }

    return 0;
}