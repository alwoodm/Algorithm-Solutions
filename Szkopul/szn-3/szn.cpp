#include <iostream>
#include <vector>

using namespace std;

int main() {
    short n;
    cin >> n;
    vector<short> numbers(n);
    for(int i=0;i<n;i++)
    {
        cin >> numbers[i];
    }
    cout<<0<<' ';
    for (int i=1;i<n;i++)
    {
        int counter=0;
        for(int j=0;j<i;j++){
            if(numbers[j]>numbers[i]) counter++;
        }
        cout <<counter << ' ';
    }
    return 0;
}