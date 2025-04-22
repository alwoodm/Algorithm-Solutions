#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    short n; // number of benches
    cin >> n;

    short m; // number of people
    cin >> m;

    vector<short> people;
    for (int i = 0; i < n; i++) {
        short number;
        cin >> number;
        people.push_back(number);
    }

    short k_max, k_min, m_min = m;
    vector<short> people2 = people; 

    while (m_min > 0) {
        sort(people.begin(), people.end());
        people[0] = people[0] + 1;
        m_min -= 1;
    }
    sort(people.begin(), people.end());
    k_min = people[people.size() - 1]; 


    sort(people2.begin(), people2.end());
    k_max = people2[people2.size() - 1] + m; 

    cout << k_min << ' ' << k_max;
    return 0;
}