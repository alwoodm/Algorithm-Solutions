// Największy trójkąt
#include <iostream>
#include <cmath>

using namespace std;

auto canBeTriangle = [](int a, int b, int c) { return (a+b>c) && (a+c>b) && (b+c>a); };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    int arr[n];
    for (int& i : arr) {
        cin >> i;
    }

    double max_a = 0;
    int max_p = 0;
    for (int a = 0; a < n; a++) {
        for (int b = a + 1; b < n; b++) {
            for (int c = b + 1; c < n; c++) {
                if (canBeTriangle(arr[a], arr[b], arr[c])) {
                    int s1 = arr[a], s2 = arr[b], s3 = arr[c];
                    double p = (s1 + s2 + s3) / 2.0;
                    double area = sqrt(p * (p - s1) * (p - s2) * (p - s3));

                    if (area > max_a) {
                        max_a = area;
                        max_p = s1 + s2 + s3;
                    }
                }
            }
        }
    }

    cout << (max_p > 0 ? to_string(max_p) : "NIE");
    return 0;
}