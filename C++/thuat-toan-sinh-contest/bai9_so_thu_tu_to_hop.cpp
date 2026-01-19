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

int n, k, a[100], ok;

void ktao(){
    for(int i = 1; i <= k; ++i) a[i] = i;
    ok = 1;
}

void sinh(){
    int i = k;
    while(i > 0 && a[i] == n - k + i) --i;

    if(i == 0) ok = 0;
    else{
        a[i]++;
        for(int j = i + 1; j <= k; ++j){
            a[j] = a[j - 1] + 1;
        }
    }
}

bool match(int *b){
    for(int i = 1; i <= k; ++i){
        if(b[i] != a[i]) return 0;
    }
    return 1;
}

int main() {
    fast_io();
    cin >> n >> k;
    int b[k + 1];
    for(int i = 1; i <= k; ++i) cin >> b[i];
    int cnt = 1;
    ktao();
    while(ok){
        if(match(b)){
            cout << cnt;
            return 0;
        }
        cnt++;
        sinh();
    }   
    return 0;
}