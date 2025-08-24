// Kasjer
#include <iostream>
#include <vector>
using namespace std;

int main(){
    unsigned int n;
    unsigned long L,a,x,y,t_before,free_time,t_after,c;
    vector<int> arr;
    int z=0;
    cin >> n >> L >> a;
    for(unsigned long i=1;i<=n;i++){
        cin >> x >> y;
        arr.push_back(x); arr.push_back(y);
    }
    if (n > 0) {
        t_before = arr[0];
        z += t_before / a;
    } else {
        z += L / a;
        cout << z << endl;
        return 0;
    }
    for (unsigned int i = 0; i < n - 1; i++) {
        z += (arr[2 * (i + 1)] - (arr[2 * i] + arr[2 * i + 1])) / a;
    }
    z += (L - (arr[2 * (n - 1)] + arr[2 * (n - 1) + 1])) / a;
    cout << z << endl;
}