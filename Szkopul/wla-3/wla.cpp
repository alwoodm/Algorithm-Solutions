#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    short n;
    cin >> n;
    
    // Create an array to store the input numbers
    int numbers[n];
    
    // Read n numbers
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    // Sort the array
    sort(numbers, numbers + n);
    
    // Calculate the number of missing integers in the range
    // (max - min + 1) gives the total range size, subtract n to get missing count
    int result = numbers[n-1] - numbers[0] + 1 - n;
    
    cout << result << endl;
    return 0;
}