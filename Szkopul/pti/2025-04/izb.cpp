// Izba przyjęć
#include <iostream>
#include <queue>

using namespace std;

struct pacjent{
    int kolor, czas;
};

pacjent p;

priority_queue<pacjent> q;

bool operator <(const pacjent &a, const pacjent &b){
    return (a.kolor>b.kolor) || (a.kolor==b.kolor && a.czas>b.czas);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> p.kolor;

        if (p.kolor==-1) {
            p=q.top();
            q.pop();
            cout << p.czas << endl;
        } else {
            p.czas=i;
            q.push(p);
        }
    }

    return 0;
}