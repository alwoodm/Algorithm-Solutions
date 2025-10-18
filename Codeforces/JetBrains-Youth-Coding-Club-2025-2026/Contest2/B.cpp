#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef unsigned int u32;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<u32> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];

    u32 minVal = *min_element(arr.begin(), arr.end());
    __gnu_cxx::__normal_iterator<unsigned *, vector<unsigned>> it = find(arr.begin(), arr.end(), minVal);
    u32 last = static_cast<u32>(distance(arr.begin(), it));
    u32 ans = n;

    while (true) {
        it = find(next(it), arr.end(), minVal);
        if (it == arr.end()) break;
        int idx = distance(arr.begin(), it);
        ans = min(ans, idx - last);
        last = idx;
    }

    cout << ans;
    return 0;
}
