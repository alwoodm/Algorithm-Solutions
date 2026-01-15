#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef int i32;

struct Goods {
    i32 profitPerUnit;
    i32 unitsAvailable;
};

bool compareGoods(const Goods &a, const Goods &b) {
    return a.profitPerUnit > b.profitPerUnit;
}

i32 a[15][105];
i32 b[15][105];
i32 c[15][105];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    i32 n,m,k;
    cin >> n >> m >> k;

    for (i32 i = 0; i < n; i++) {
        string s;
        cin >> s;

        for (i32 j = 0; j < m; j++) {
            cin >> a[i][j] >> b[i][j] >> c[i][j];
        }
    }

    i32 maximumProfit = 0;
    for (i32 start = 0; start < n; start++) {
        for (i32 end = 0; end < n; end++) {
            if (end == start) continue;

            vector<Goods> goodsList;
            for (i32 i = 0; i < m; i++) {
                i32 profit = b[end][i] - a[start][i];
                if (profit > 0) {
                    goodsList.push_back({profit, c[start][i]});
                }
            }
            sort(goodsList.begin(), goodsList.end(), compareGoods);

            i32 currentProfit = 0;
            i32 remainingCapacity = k;
            for (const Goods &item : goodsList) {
                if (remainingCapacity <= 0) break;
                i32 unitsToTake = min(item.unitsAvailable, remainingCapacity);
                currentProfit += unitsToTake * item.profitPerUnit;
                remainingCapacity -= unitsToTake;
            }

            if (currentProfit > maximumProfit) maximumProfit = currentProfit;
        }
    }

    cout << maximumProfit;
    return 0;
}