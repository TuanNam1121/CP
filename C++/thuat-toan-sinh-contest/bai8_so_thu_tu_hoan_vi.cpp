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
    for(int i = 1; i <= n; ++i){
        a[i] = i;
    }
    ok = 1;
}

void sinh(){
    int i = n;
    while(i >= 1 && a[i] > a[i + 1]) --i;

    if(i == 0) ok = 0;
    else{
        int j = n;
        while(a[i] > a[j]) --j;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

bool match(int *b){
    for(int i = 1; i <= n; ++i){
        if(a[i] != b[i]) return 0;
    }
    return 1;
}

int main() {
    fast_io();
    cin >> n;
    int b[n + 1];
    for(int i = 1; i <= n; ++i) cin >> b[i];
    ktao();
    int cnt = 1;
    while(ok){
        if(match(b)){
            cout << cnt;
            return 0;
        }
        else{
            sinh();
            cnt++;
        }
    }
    return 0;
}