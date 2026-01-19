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

struct phanso{
    ll a, b;
};

void nhap(phanso &p){
    cin >> p.a >> p.b;
}

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

void rutgon(phanso &p){
    ll g = gcd(p.a, p.b);
    p.a /= g;
    p.b /= g;
}
void in(phanso p){
    cout << p.a << "/" << p.b;
}

int main() {
    fast_io();
    phanso p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}