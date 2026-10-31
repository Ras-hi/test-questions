#include <bits/stdc++.h>
using namespace std;

long long countWays(int n, int k) {
    vector<long long> dp(n + 1, 0);

    dp[0] = 1;

    for (int i = 1; i <= n; i++) {

        for (int dice = 1; dice <= k; dice++) {

            if (i - dice >= 0) {
                dp[i] += dp[i - dice];
            }
        }
    }

    return dp[n];
}

int main() {
    int n, k;
    cin >> n >> k;

    cout << countWays(n, k) << endl;

    return 0;
}