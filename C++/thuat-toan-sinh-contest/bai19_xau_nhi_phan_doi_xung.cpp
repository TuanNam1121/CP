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
    ok = 1;
    for(int i = 1; i <= n; ++i) a[i] = 0;
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

bool palidrome(){
    for(int i = 1; i <= n / 2; ++i){
        if(a[i] != a[n - i + 1]) return 0;
    }
    return 1;
}

int main() {
    fast_io();
    cin >> n;
    ktao();
    while(ok){
        if(palidrome()){
            for(int i = 1; i <= n; ++i) cout << a[i];
            cout << endl;
        }
        sinh();
    }
    return 0;
}