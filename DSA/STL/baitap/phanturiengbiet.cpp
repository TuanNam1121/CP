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

int inSet(int n){
    set<int> se;
    while(n--){
        int v; cin >> v;
        se.insert(v);
    }
    return se.size();
}

int inMap(int n){
    map<int, int> mp; 
    while(n--){
        int v; cin >> v;
        mp[v] = 1;
    }
    return mp.size();
}


int main() {
    fast_io();
    int n; cin >> n;
    //cout << inSet(n);
    cout << inMap(n);
    return 0;
}