// Plakatowanie
#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    stack<int> stos;

    int n , ile=0;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int d,w;
        cin >> d >> w;

        while(!stos.empty() && stos.top() > w) stos.pop();

        if(stos.empty() || stos.top() < w) {
            stos.push(w);
            ile++;
        }

    }
    cout << ile << endl;
    return 0;
}