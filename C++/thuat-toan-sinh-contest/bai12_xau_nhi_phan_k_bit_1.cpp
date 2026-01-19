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

bool cn1(){
    int cnt = 0;
    for(int i : a) cnt += i;
    return cnt == k;
}

bool cn2(){
    int cnt = 0, res = 0; 
    for(int i = 0; i <= n; ++i){
        if(a[i] == 1) cnt++;
        else{
            res = max(res, cnt);
            cnt = 0;      
        }
    }
    return max(res, cnt) == k;
}

int main() {
    fast_io();
    cin >> n >> k;
    ktao();
    while(ok){
        if(cn1()){
            for(int i = 1; i <= n; ++i) cout << a[i];
            cout << " ";
        }
        sinh();
    }
    cout << endl;
    ktao();
    while(ok){
        if(cn2()){
            for(int i = 1; i <= n; ++i) cout << a[i];
            cout << " ";
        }
        sinh();
    }
    return 0;
}