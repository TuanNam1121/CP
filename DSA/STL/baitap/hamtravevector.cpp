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

bool nt(int n){
    for(int i = 2; i <= sqrt(n); ++i){
        if(n % i == 0) return 0;
    }
    return n > 1;
}

void nhap(vector<int> &v){
    int n; cin >> n;
    rep(i, 0, n){
        int a; cin >> a;
        v.pb(a);
    }
}

void in(vector<int> v){
    for(int i : v) cout << i << " ";
}

vector<int> prime_list(vector<int> v){
    vector<int> res;
    for(int i : v){
        if(nt(i)) res.pb(i);
    }
    return res;
}

int main() {
    fast_io();
    vector<int> v;
    nhap(v);
    vector<int> res = prime_list(v);
    in(res);
    return 0;
}