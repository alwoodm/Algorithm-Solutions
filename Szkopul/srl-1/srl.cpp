#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    unsigned long long numTestCases;
    int a, b, c;
    vector<int> results;
    
    cin >> numTestCases;
    
    for(unsigned long long i = 0; i < numTestCases; i++){
        cin >> a >> b >> c;
        vector<int> numbers = {a, b, c};

        // Sort the numbers to find the median (middle value)
        sort(numbers.begin(), numbers.end());
        
        // Add the median to results
        results.push_back(numbers[1]);
    }
    
    // Output all results
    for (int j = 0; j < results.size(); j++) {
        cout << results[j] << endl;
    }
    
    return 0;
}