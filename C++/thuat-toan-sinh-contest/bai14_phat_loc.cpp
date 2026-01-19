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

int n, ok, a[100];

bool so8(){
    for(int i = 1; i < n; ++i){
        if(a[i] == a[i + 1] && a[i] == 1) return false;
    }
    return true;
}

bool so6(){
    for(int i = 1; i < n - 2; ++i){
        if(a[i] == a[i + 1] && a[i] == a[i + 2] && a[i] == a[i + 3] && a[i] == 0) return false;
    }
    return true;
}

void ktao(){
    ok = 1;
    a[1] = 1; a[n] = 0;
    for(int i = 2; i < n; ++i) a[i] = 0;
}

void sinh(){
    int i = n - 1;
    while(i > 1 && a[i] == 1){
        a[i] = 0;
        --i;
    }

    if(i == 1) ok = 0;
    else a[i]++;
}

int main() {
    fast_io();
    cin >> n;
    ktao();
    while(ok){
        if(so8() && so6()){
            for(int i = 1; i <= n; ++i){
                if(a[i] == 1) cout << 8;
                else cout << 6;
            }
            cout << endl;
        }
        sinh();
    }
    return 0;
}