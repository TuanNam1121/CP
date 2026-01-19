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
set<int> s;

void ktao(int *b){
    for(int i = 1; i <= k; ++i) a[i] = b[i - 1];
    ok = 1;
}

void sinh(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i) --i;
    
    if(i == 0) ok = 0;
    else{
        a[i]++;
        for(int j = i + 1; j <= n; ++j) a[j] = a[j - 1] + 1;
    }
}

int main() {
    fast_io();
    cin >> n >> k;
    int b[k];
    for(int i = 0; i < k; ++i){
        cin >> b[i];
        s.insert(b[i]);
    }
    ktao(b);
    sinh();
    int cnt = 0;
    if(ok == 0){
        cout << s.size();
        return 0;
    }
    for(int i = 1; i <= k; ++i){
        if(s.find(a[i]) == s.end()) cnt++;
    }
    cout << cnt;
    return 0;
}