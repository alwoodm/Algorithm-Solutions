// Piramida liczbowa
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    short n, rowNumber;
    cin >> n;

    short numbers[n];
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    cin >> rowNumber;

    vector<vector<short>> triangle(rowNumber + 1);
    short currectIterator = 0;

    for (int i = 0; i <= rowNumber; i++) {
        triangle[i].resize(i + 1);
        for (int j = 0; j <= i; j++) {
            if (currectIterator >= n) currectIterator = 0;
            triangle[i][j] = numbers[currectIterator];
            currectIterator++;
        }
    }

    int sum = 0;
    for (int i = 0; i < triangle[rowNumber - 1].size(); i++) {
        sum += triangle[rowNumber - 1][i];
    }

    cout << sum << endl;
    return 0;
}