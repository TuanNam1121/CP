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

int a[200][200];
int n;
int main() {
    fast_io();
    cin >> n;
    rep2(i, j, 0, n, 0, n) cin >> a[i][j];
    map<int, int> mp;
    rep2(i, j, 0, n, 0, n){
        int value = a[i][j];
        if(mp[value] == i - 1){
            mp[value] = i;
        }
    }
    bool exist = false;
    for(pair<int, int> i : mp){
        if(i.second == n - 1){
            cout << i.first << " ";
            exist = true; 
        }
    }
    if(!exist) cout << "NOT FOUND";
    return 0;
}