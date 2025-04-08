#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    short n;
    int m;

    cin >> n >> m;
    vector<short> V[n+1];

    for (int i = 0; i < m; i++) {
        int u,v;
        cin >> u >> v;

        V[u].push_back(v);
        V[v].push_back(u);
    }
    
    int maximum = 0;

    for (int i = 1; i <= n; i++) {
        if(V[maximum].size() < V[i].size()) maximum = i;
    }

    cout << maximum << endl;

    sort(V[maximum].begin(), V[maximum].end());
    for (int i = 0; i < V[maximum].size(); i++) {
        cout << V[maximum][i] << ' ';
    }

    return 0;
}