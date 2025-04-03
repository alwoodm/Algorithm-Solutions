#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    vector<int>numbers = {a,b,c,d,e};
    sort(numbers.begin(), numbers.end());
    cout << numbers[numbers.size()-1];
    return 0;
}