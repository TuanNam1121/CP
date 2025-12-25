#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define fi first
#define se second
#define rep(i,a,b) for(int i=(a); i<(b); ++i)
#define rep2(i,j,a,b,c,d) for (int i = (a); i < (b); ++i) for (int j = (c); j < (d); ++j)

const ll mod = 1e9 + 7;
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

ll chiadu(string s){
    ll res = 0;
    for(char i : s){
        res = res * 10 + (i -'0');
        res %= mod;
    }
    return res;
}

ll powMod(ll a, ll b, ll mod){
    ll res = 1;
    while(b > 0){
        if(b % 2 == 1){
            res *= a;
            res %= mod;
        }
        a *= a;
        a %= mod;
        b /= 2;
    }
    return res;
}


int main() {
    fast_io();
    string a; cin >> a;
    ll b; cin >> b;
    ll aSauChiaDu = chiadu(a);
    cout << powMod(aSauChiaDu, b, mod);
    return 0;
}