// Egzamin testowy
#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;
    int h[m + n][5] = {{0}};
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            char c;
            cin >> c;
            h[j][c - 'A']++;
        }
    }

    int r = 0;
    for (int i = 0; i < m; i++) 
    {
        int a;
        cin >> a;
        r += a * *max_element(h[i], h[i] + 5);
    }

    cout << r << endl;
    return 0;
}