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
    bool higher, lower;
    higher = lower = true;
    for(int i = 1; i < a.size(); ++i){
        if(a[i - 1] > a[i]) lower = false;
        else if(a[i - 1] < a[i]) higher = false;
    }
    return higher || lower;
}

int main() {
    fast_io();
    string a; cin >> a;
    if(check(a)) cout << "YES";
    else cout << "NO";
    return 0;
}

