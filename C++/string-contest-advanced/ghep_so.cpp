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
    s += '@';
    string num = "";
    vector<string> a;
    for(char i : s){
        if(isdigit(i)) num += i; 
        else{
            if(num != ""){
                while(num[0] == '0' && num.size() > 1) num.erase(0);
                a.pb(num);
                num = "";
            }
        }
    }
    
    sort(a.rbegin(), a.rend());
    for(string i : a) cout << i;
    return 0;
}