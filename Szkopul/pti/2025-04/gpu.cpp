// Gorące pudełko
#include <iostream>
#include <list>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    list<int> lista;
    list<int>::iterator p,q;
    int n,x;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        lista.push_back(i);
    }
    p=lista.begin();

    for (int i = 0; i < n-1; i++) {
        cin >> x;

        if (i%2==0){
            for (int j = 1; j < x; j++) {
                p++;
                if (p==lista.end()) p = lista.begin();
            }
            q=p;
            q++;

            if(q==lista.end()) q=lista.begin();
            lista.erase(q);

        } else {
            for (int j = 1; j < x; j++) {
                if (p == lista.begin()) p = lista.end();
                p--;
            }
            q = p;
            if (q == lista.begin()) q = lista.end();
            q--;

            if (q == lista.end()) q = lista.begin();
            lista.erase(q);
        }
    }

    cout << lista.front();
    return 0;
}