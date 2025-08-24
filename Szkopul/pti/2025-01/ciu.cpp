// Ciuchcia w Górach Bitowych
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n, k, c;
    cin >> n;
    int s[n + 1];
    s[0] = 0;
    
    for (int i = 1; i <= n; i++)
    {
        cin >> c;
        s[i] = s[i - 1] + c;
    }

    cin >> k;
    while (k--)
    {
        int a, b;
        cin >> a >> b;
        cout << s[max(a, b)] - s[min(a, b)] << endl;
    }

    return 0;
}