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

int main() {
    fast_io();
    string s; cin >> s;
    set<char> se;
    bool exist = false;
    cout << s << endl;
    for(char x : s){
        if(se.find(x) != se.end()){
            cout << x;
            exist = true;
            break;
        }
        se.insert(x);
    }
    if(!exist) cout << "NONE";
    return 0;
}