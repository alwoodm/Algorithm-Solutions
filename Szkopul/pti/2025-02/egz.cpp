// Egzaminy Halinki
#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

int main() {
    short n;
    cin >> n;

    pair<int,int> exam[n];

    for (int i = 0; i < n; i++) {
        cin >> exam[i].first >> exam[i].second;
    }

    sort(exam,exam+n);

    int day=0;
    for (int i = 0; i < n; i++) {
        day = (day<=exam[i].second) ? exam[i].second : exam[i].first;
    }
    
    cout<<day<<endl;

    return 0;
}