#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define fi first
#define se second

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    fast_io();
    int n, q; cin >> n >> q;
    map<string, int> m;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        m.insert({s, i});
    }

    for(int i = 0 ; i < q ; i++){
        string query; cin >> query;
        auto it = m.find(query);
        if(it != m.end()){
            auto res = *it;
            cout << res.second + 1 << endl;
        }
        else cout << -1 << endl;
    }

    return 0;
}