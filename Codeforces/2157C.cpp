#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef unsigned short u16;

struct q_tuple {
    u16 c, l, r;
};

bool compare_q_tuple(const q_tuple &a, const q_tuple &b) {
    if (a.c != b.c) {
        return a.c < b.c;
    } else if (a.l != b.l) {
        return a.l < b.l;
    } else {
        return a.r < b.r;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    u16 t;
    cin >> t;
    while (t--) {
        u16 n, k, q;
        cin >> n >> k >> q;

        vector<q_tuple> arr(q);
        vector<bool> blocked_for_k(n, false);

        for (u16 i = 0; i < q; i++) {
            cin >> arr[i].c >> arr[i].l >> arr[i].r;

            if (arr[i].c == 2) {
                for(u16 j = arr[i].l - 1; j < arr[i].r; j++) {
                    blocked_for_k[j] = true;
                }
            }
        }

        sort(arr.begin(), arr.end(), compare_q_tuple);

        vector<u16> ans(n, 10000);
        u16 k_min_count = 0;

        for (u16 i = 0; i < q; i++) {
            if (arr[i].c == 1) {
                for (u16 j = arr[i].l-1; j < arr[i].r; j++) {
                    ans[j] = 10001;
                }
            } else {
                for (u16 j = arr[i].l-1; j < arr[i].r; j++) {
                    if (ans[j] == 10000) {
                        ans[j] = k_min_count % k;
                        k_min_count++;
                    }
                }
            }
        }

        u16 huge_val = k + 1;

        for (u16 i = 0; i < n; i++) {
            if (ans[i] == 10001) {
                if (!blocked_for_k[i]) {
                    ans[i] = k;
                } else {
                    ans[i] = huge_val;
                    huge_val++;
                }
            } else if (ans[i] == 10000) {
                ans[i] = k;
            }
        }

        for (const u16 & i: ans) {
            cout << i << ' ';
        }
        cout << '\n';
    }

    return 0;
}