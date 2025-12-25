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

bool check(string a){
    char i1 = a[a.size() - 1], i2 = a[a.size() - 2];
    if(i1 != '0' || i2 != '0') return false;
    
    return (((i1 - '0') * 10) + (i2 - '0')) % 25 == 0;
}

int main() {
    fast_io();
    string a; cin >> a;
    if(check(a)) cout << "YES";
    else cout << "NO";
    return 0;
}