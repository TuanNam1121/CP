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
    string ans = "";
    for(char i : s){
        if(i == '4') ans += "322";
        else if(i == '6') ans += "53";
        else if(i == '8') ans += "7222";
        else if(i == '9') ans += "7332";
        else if(i == '1') continue;
        else ans += i;
    }
    sort(ans.rbegin(), ans.rend());
    cout << ans;
    return 0;
}