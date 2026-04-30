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

vector<string> v;

int mod(string s, int n){
    if(s.size() < 17){
        ll a = stoll(s);
        return a % n;
    }
    int mod = 0;
    for(int i = 0; i <= s.length(); ++i){
        mod = (mod * 10 + (s[i] - '0') % n) % n;
    }
    return mod;
}

void process(){
    queue<string> q;
    q.push("1");
    v.push_back("1");
    while(!q.empty()){
        string top = q.front(); q.pop();
        if(top.length() > 19) break;
        v.push_back(top + "0");
        v.push_back(top + "1");
        q.push(top + "0");
        q.push(top + "1");
    }
}

int main() {
    fast_io();
    process();
    int tc; cin >> tc;
    while(tc--){
        int a; cin >> a;
        for(string i : v){
            if(mod(i, a) == 0){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}