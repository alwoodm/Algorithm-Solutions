// Triangulacja wielokąta
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    
    vector<vector<ll>> dp(n+1, vector<ll>(n+1, 0));
    
    for (int len = 3; len <= n; len++) {
        for (int i = 1; i <= n-len+1; i++) {
            int j = i + len - 1;
            if (j > n) j -= n;
            
            dp[i][j] = LLONG_MAX;
            
            for (int k = i+1; k < i+len-1; k++) {
                int actual_k = k;
                if (actual_k > n) actual_k -= n;
                
                ll triangle_weight = (ll)i * actual_k * j;
                
                ll left_weight = 0;
                ll right_weight = 0;
                
                if (actual_k - i > 1)
                    left_weight = dp[i][actual_k];
                
                if (j - actual_k > 1) {
                    if (j > actual_k)
                        right_weight = dp[actual_k][j];
                    else
                        right_weight = dp[actual_k][j+n];
                }
                
                ll total_weight = triangle_weight + left_weight + right_weight;
                dp[i][j] = min(dp[i][j], total_weight);
            }
        }
    }
    
    cout << dp[1][n] << endl;
    return 0;
}