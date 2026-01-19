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
int n, a[100], ok;

void ktao(){
    ok = 1;
    for(int i = 1; i <= n; ++i) a[i] = 0;
}

void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if(i == 0) ok = 0;
    else a[i] = 1;
}
int main() {
    fast_io();
    cin >> n;
    int b[n];
    for(int i = 0; i < n; ++i) cin >> b[i];
    ktao();
    int sum1, sum2, res;
    sum1 = sum2 = 0;
    res = INT32_MAX;
    while(ok){
        for(int i = 1; i <= n; ++i){
            if(a[i] & 1) sum1 += b[i - 1];
            else sum2 += b[i - 1];
        }
        res = min(res, abs(sum1 - sum2));
        sum1 = sum2 = 0;
        sinh();
    }
    cout << res;
    return 0;
}