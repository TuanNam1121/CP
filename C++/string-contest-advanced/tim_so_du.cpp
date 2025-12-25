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

ll modulo(string s){
    ll res = 0;
    for(char i : s){
        res = res*10 + (i - '0');
        res %= 4;
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

void solve(string s){
    if(s.size() == 1 && s[0] == '0') cout << 4;
    else{
        ll exp = (modulo(s) == 0) ? 4 : modulo(s);
        cout << (1 + powMod(2, exp, 5) + powMod(3, exp, 5) + powMod(4, exp, 5)) % 5;
    }
}

int main() {
    fast_io();
    string s; cin >> s;
    solve(s);
    return 0;
}