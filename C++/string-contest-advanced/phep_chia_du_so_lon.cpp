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

ll bignumMod(string a, ll n){
    ll res = 0;
    for(int i = 0 ; i < a.size(); ++i){
        res *= 10;
        res += a[i] -'0';
        res %= n;
    }
    return res;
}

int main() {
    fast_io();
    string a; cin >> a;
    ll n; cin >> n;
    cout << bignumMod(a, n);
    return 0;
}