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

int n, a[100], ok, cnt;

void ktao(){
    ok = cnt = 1;
    a[1] = n;
}

void sinh(){
    int i = cnt;
    while(i >= 1 && a[i] == 1) --i;

    if(i == 0) ok = 0;
    else{
        a[i]--;
        int d = cnt - i + 1;
        cnt = i;
        int q = d / a[i], r = d % a[i];
        if(q){
            for(int j = 1; j <= q; ++j){
                ++cnt;
                a[cnt] = a[i];
            }
        }
        if(r){
            ++cnt;
            a[cnt] = r;
        }
    }
}

int main() {
    fast_io();
    cin >> n;
    ktao();
    while(ok){
        for(int i = 1; i <= cnt; ++i){
            cout << a[i];
            if(i != cnt) cout << "+";
        }
        cout << endl;
        sinh();
    }   
    return 0;
}