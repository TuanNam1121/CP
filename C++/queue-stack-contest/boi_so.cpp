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

vector<ll> v;

void process(){
    queue<ll> q;
    q.push(8);
    v.push_back(8);
    while(!q.empty()){
        ll u = q.front();
        if(u * 10 > 1e18) break;
        q.pop();
        v.push_back(u * 10);
        v.push_back(u * 10 + 8);
        q.push(u * 10);
        q.push(u * 10 + 8);
    }
}

int main() {
    fast_io();
    process();
    int n; cin >> n;
    int a[n];
    rep(i, 0, 200){
        int ok = 0;
        for(ll x : v){
            if(x % i == 0){
                ok = 1;
                cout << x << endl;
                break;
            }
        }
        if(!ok) cout << -1 << endl;
    }

    return 0;
}