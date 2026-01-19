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
    for(int i = 1; i <= n; ++i) a[i] = n - i + 1;
    ok = 1;
}

void sinh(){
    int i = n - 1;

    while(i > 0 && a[i] < a[i + 1]){
        --i;
    }

    if(i == 0) ok = 0;
    else{
        int j = n;
        while(a[j] > a[i]) --j;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

int main() {
    fast_io();
    cin >> n;
    ktao();
    for(int i = 1; i <= n; ++i) cout << a[i] << " ";
    cout << endl;
    while(ok){
        for(int i = 1; i <= n; ++i){
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
    return 0;
}