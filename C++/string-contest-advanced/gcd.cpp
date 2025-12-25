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

ll bignumMod(string a, ll m){
    ll res = 0;
    for(char i : a){
        res *= 10;
        res += i - '0';
        res %= m;
    }
    return res;
}

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    fast_io();
    string s; cin >> s;
    ll m; cin >> m;
    cout << gcd(m, bignumMod(s, m));
    return 0;
}