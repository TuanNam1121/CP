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

int n, a[100], used[100];

void in(){
    for(int i = 1; i <= n; ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}

void ql(int i){
    for(int j = 1; j <= n; j++){
        if(!used[j]){
            a[i] = j;
            used[j] = 1;
            if(i < n) ql(i + 1);
            else in();
            used[j] = 0;
        }
    }
}

int main() {
    fast_io();
    cin >> n;
    ql(1);
    return 0;
}