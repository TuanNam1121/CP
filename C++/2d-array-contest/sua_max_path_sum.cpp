#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define fi first
#define se second
#define rep(i,a,b) for(int i=(a); i<(b); ++i)
#define rep2(i,j,a,b,c,d) for (int i = (a); i < (b); ++i) for (int j = (c); j < (d); ++j)

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int a[500][500]; 
int n, m ,res = 0;

void quet(int i, int j, int sum){
    if(i == n && j == m) res = max(res, sum);
    // đi qua phải
    if(i + 1 <= n){
        quet(i + 1, j, sum + a[i + 1][j]);
    }
    // đi qua trái
    if(j + 1 <= m){
        quet(i, j + 1, sum + a[i][j + 1]);
    }
}


int main() {
    fast_io();
    cin >> n >> m;
    rep2(i, j, 1, n + 1, 1, m + 1) cin >> a[i][j];
    // Cách 1 : prefix sum : cộng dồn 2 mảng , lấy max của các giá trị trên hoặc trái rồi cộng vào a[i][j];
    // rep(i, 1, n+1){
    //     rep(j, 1, m+1){
    //         if(i == 1) a[i][j] += a[i][j - 1];
    //         else if(j == 1) a[i][j] += a[i - 1][j];
    //         else a[i][j] += max(a[i-1][j], a[i][j - 1]);
    //     }
    // }
    // cout << a[n][m];
    // Cách 2 : đệ quy quét mảng
    quet(1, 1, a[1][1]);
    cout << res;
    return 0;
}