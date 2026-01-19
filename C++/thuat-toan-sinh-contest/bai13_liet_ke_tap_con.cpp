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

int n, a[100], ok;

void ktao(){
    for(int i = 1; i <= n; ++i) a[i] = 0;
    ok = 1;
}

void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        --i;
    }

    if(i == 0) ok = 0;
    else a[i] = 1;
}

int main() {
    fast_io();
    cin >> n;
    vector<vector<int>> b;
    ktao();
    int cnt = 0;
    sinh();
    while(ok){
        b.emplace_back();
        for(int i = 1; i <= n; ++i){
            if(a[i] == 1){
                b[cnt].pb(i);
            }
        }
        sort(b[cnt].begin(), b[cnt].end());
        cnt++;
        cout << endl;
        sinh();
    }
    sort(b.begin(), b.end());
    for(int i = 0; i < b.size(); ++i){
        for(int j = 0; j < b[i].size(); ++j){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}