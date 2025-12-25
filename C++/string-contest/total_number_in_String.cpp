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


stack<int> a;

ll sum(){
    ll sum = 0, t = 1; 
    while(!a.empty()){
        sum += a.top() * t * 1LL;
        a.pop();
        t *= 10;
    }
    return sum;
}

int main() {
    fast_io();
    string s; cin >> s;
    ll res = 0;
    for(int i = 0; i < s.length(); ++i){
        if(s[i] >= '0' && s[i] <= '9') a.push(s[i] - '0');
        else{
            if(a.empty()) continue;
            else{
                res += sum();
                
            }
        }
    }
    if(!a.empty()) res += sum();
    cout << res;
    return 0;
}