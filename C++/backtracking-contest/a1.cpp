#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
int n;
int c[20][20];
int dp[1<<15][15];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> c[i][j];

    int N = 1 << n;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < n; j++)
            dp[i][j] = INF;

    dp[1][0] = 0; // bắt đầu từ node 0 (tức thành phố 1)

    for (int mask = 1; mask < N; mask++) {
        for (int u = 0; u < n; u++) {
            if (!(mask & (1 << u))) continue;
            for (int v = 0; v < n; v++) {
                if (mask & (1 << v)) continue;
                dp[mask | (1 << v)][v] = min(
                    dp[mask | (1 << v)][v],
                    dp[mask][u] + c[u][v]
                );
            }
        }
    }

    int res = INF;
    for (int i = 1; i < n; i++) {
        res = min(res, dp[N-1][i] + c[i][0]);
    }

    cout << res << endl;
}