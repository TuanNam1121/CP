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

int n, k, a[16], x[16];

void in(int i){
    cout << "[";
    for(int j = 1; j <= i; ++j){
        cout << x[j];
        if(j != i) cout << " ";
    }
    cout << "]" <<  endl;
}

void ql(int i, int start, int sum){
    for(int j = start; j <= n; ++j){
        if(sum + a[j] <= k){
            x[i] = a[j];
            if(sum + a[j] == k) in(i);
            else ql(i + 1, j + 1, sum + a[j]);
        }
    }
}

int main() {
    fast_io();
    cin >> n >> k;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    sort(a + 1, a + n + 1);
    ql(1, 1, 0);
    return 0;
}