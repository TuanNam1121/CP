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

int n, ok;
string a;
void ktao(){
    n = a.size() + 1;
    a = '0' + a;
     ok = 1; 
}

void sinh(){
    int i = n - 1;
    while(i >= 1 && a[i] >= a[i + 1]) --i;

    if(i == 0) ok = 0;
    else{
        int j = n;
        while(a[j] < a[i]) --j;
        swap(a[i], a[j]);
        reverse(a.begin() + i + 1, a.begin() + n + 1);
    }
}

int main() {
    fast_io();
    cin >> a;
    ktao();
    sinh();
    if(ok == 0) cout << "NOT EXIST";
    else{
        for(int i = 1; i <= n; ++i) cout << a[i];
    }
    return 0;
}