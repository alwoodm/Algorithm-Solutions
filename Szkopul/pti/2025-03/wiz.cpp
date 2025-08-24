// Wizyta Janusza
#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
    short n, m;
    cin >> n >> m;
    pair<short, short> B[n];
    short l, r;
    
    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        B[i] = make_pair(l, r);
    }

    sort(B, B + n);

    int c = 0;
    for (int i = 0; i < n; i++)
    {
        l = B[i].first;
        r = B[i].second;
        c = (l <= c && r > c) ? r : c;
    }

    cout << (c == m ? "TAK" : "NIE") << endl;

    return 0;
}