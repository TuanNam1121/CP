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

ll toLL(string s){
    ll a = 0;
    for(char i : s){
        a *= 10;
        a += i - '0';
    }
    return a;
}

int main() {
    fast_io();
    string s; cin >> s;
    s += '@';
    string num = "";
    vector<int> a;
    for(char i : s){
        if(isdigit(i)) num += i; 
        else{
            if(num != ""){
                a.pb(toLL(num));
                num = "";
            }
        }
    }
    
    ll res = 0;
    for(ll i : a){
        res += i;
    }
    cout << res;
    return 0;
}