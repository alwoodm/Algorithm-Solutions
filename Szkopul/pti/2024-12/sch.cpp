// Halinka na schodach
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numerySchodow;
    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        numerySchodow.push_back(s);
    }

    int counter=0;
    vector<int> location;
    for (int i = 0; i < numerySchodow.size(); i++) {
        if(numerySchodow[i]==1) {
            counter++;
            if(i>1) {
                location.push_back(numerySchodow[i-1]);
            }
        }
    }
    location.push_back(numerySchodow.back());
    cout << counter << endl;
    for (int i = 0; i < location.size(); i++) {
        cout << location[i] << " ";
    }
    return 0;
}