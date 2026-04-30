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
    int query; cin >> query;
    deque<ll> dq;
    while(query--){
        string s; cin >> s;
        if(s == "PUSHFRONT"){
            ll a; cin >> a;
            dq.push_front(a);
        }
        else if(s == "PRINTFRONT"){
            if(dq.empty()) cout << "NONE" << endl;
            else cout << dq.front() << endl;
        }  
        else if(s == "POPPRONT"){
            if(!dq.empty()) dq.pop_front();
        }
        else if(s == "PUSHBACK"){
            ll a; cin >> a;
            dq.push_back(a);
        }
        else if(s == "PRINTBACK"){
            if(dq.empty()) cout << "NONE" << endl;
            else cout << dq.back() << endl;
        }
        else{
            if(!dq.empty()) dq.pop_back();
        }
    }
    return 0;
}