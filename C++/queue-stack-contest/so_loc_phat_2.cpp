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

void process(int n){
    queue<string> q;
    vector<string> a;
    q.push("6"); q.push("8");
    int res = 0;
    while(q.front().length() <= n){
        string top = q.front();
        q.pop();
        a.push_back(top);
        res++;
        q.push(top + "6");
        q.push(top + "8");
    }
    cout << res << endl;
    for(string i : a) cout << i << " ";
    cout << endl;
}

int main() {
    fast_io();
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        process(n);
    }
    return 0;
}