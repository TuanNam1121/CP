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

bool cmp(string a, string b){
    if(a.size() != b.size()) return a.size() > b.size();
    return a > b;
}

int main() {
    fast_io();
    string s; cin >> s;
    string num = "";
    vector<string> a;
    for(int i = 0; i < s.size(); ++i){
        if(isdigit(s[i])) num += s[i];
        else{
            if(num != ""){
                while(num[0] == 0 && num.size() > 1){
                    num.erase(0);
                }
                a.pb(num);
                num = "";
            }
        }
    }
    sort(a.begin(), a.end(), cmp); 
    cout << a[0];
    return 0;
}