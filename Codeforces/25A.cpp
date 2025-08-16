#include <iostream>
#include <vector>

int findMoreFrequent(const std::vector<int>& arr) {
    int even = 0, odd = 0;
    for (int num : arr) {
        if (num % 2 == 0) even++;
        else odd++;
    }
    return (even > odd) ? 0 : 1;
}

int findDifferentIndex(const std::vector<int>& arr, int majorityParity) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 != majorityParity) {
            return i + 1;
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int majorityParity = findMoreFrequent(arr);
    std::cout << findDifferentIndex(arr, majorityParity);

    return 0;
}
