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

vector<ll> v;

void xuly(){
    queue<ll> q;
    q.push(1);
    v.pb(1);
    while(!q.empty()){
        ll u = q.front(); q.pop();
        if(u > 1e17) break;
        v.push_back(u * 10);
        v.push_back(u * 10 + 1);
        q.push(u * 10);
        q.push(u * 10 + 1);
    }
}

int main() {
    fast_io();
    xuly();
    int n; cin >> n;
    int a[n];
    rep(i, 0, n){
        cin >> a[i];
        for(int j = 0; j < v.size(); ++j){
            if(a[i] < v[j]) cout << j - 1 << endl;
        }
    }
    return 0;
}