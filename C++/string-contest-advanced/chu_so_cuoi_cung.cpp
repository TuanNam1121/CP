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

void solve(string s){
    if(s.size() == 1 && s[0] == '0'){
        cout << 1;
        return;
    }
    
    switch ((s[s.size() - 1] - '0') % 4)
    {
    case 0:
        cout << 6;
        break; 
    case 1:
        cout << 8;
        break;
    case 2:
        cout << 4;
        break;
    case 3:
        cout << 6;
    }
}

int main() {
    fast_io();
    string s; cin >> s;
    solve(s);
    return 0;
}