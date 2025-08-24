// Roztargniony profesor
#include <iostream>
#include <vector>

using namespace std;

int countWays(short n){
    if (n==0) return 1;
    if (n<0) return 0;
    return countWays(n-1) + countWays(n-2);
}

void generateSteps(short n, vector<short>& steps){
    if (n==0) {
        for (short step: steps) {
            cout << step << " ";
        }
        cout << endl;
        return;
    }
    if (n>=1){
        steps.push_back(1);
        generateSteps(n-1, steps);
        steps.pop_back();
    }
    if (n>=2){
        steps.push_back(2);
        generateSteps(n-2,steps);
        steps.pop_back();
    }
}

int main() {
    short n;
    cin >> n;

    cout << countWays(n) << endl;
    vector<short> steps;

    generateSteps(n, steps);
    return 0;
}