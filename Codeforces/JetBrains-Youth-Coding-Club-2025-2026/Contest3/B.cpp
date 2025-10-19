#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;
typedef unsigned short u16;
typedef string str;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    u16 n, m, minPrice = 0, maxPrice = 0;;
    cin >> n >> m;
    vector<u16> prices(n);
    for (u16 i = 0; i < n; i++) cin >> prices[i];
    map<str, int> cnt;
    for (u16 i = 0; i < m; i++) {
        str s;
        cin >> s;
        cnt[s]++;
    }

    vector<u16> freq;
    for (auto &p: cnt) freq.push_back(p.second);

    sort(prices.begin(), prices.end());
    sort(freq.begin(), freq.end(), greater<u16>());

    for (u16 i = 0; i < freq.size(); i++) minPrice += freq[i] * prices[i];
    for (u16 i = 0; i < freq.size(); i++) maxPrice += freq[i] * prices[n - 1 - i];

    cout << minPrice << ' ' << maxPrice;
    return 0;
}