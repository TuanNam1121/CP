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

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b){
    return a / gcd(a, b) * b;
}

struct ps{
    ll a, b;
};

void rutgon(ps &x){
    ll g = gcd(x.a, x.b);
    x.a /= g;
    x.b /= g;
}

ps cong(ps x, ps y){
    rutgon(x);
    rutgon(y);
    ll m = lcm(x.b, y.b);
    ll t = x.a * (m / x.b) + y.a * (m / y.b);
    ps res;
    res.a = t; res.b = m;
    return res;
}

void in(ps x){
    cout << x.a << "/" << x.b;
}

void nhap(ps &x){
    cin >> x.a >> x.b;
}

int main() {
    fast_io();
    ps x, y;
    nhap(x), nhap(y);
    ps t = cong(x, y);
    in(t);
    return 0;
}