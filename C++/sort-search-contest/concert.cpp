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
    int n, m; cin >> n >> m;
    multiset<int> s;
    vector<int> a(m);

    for(int i = 0 ; i < n ; i++){
        int c; cin >> c;
        s.insert(c);
    }
    
    for(int i = 0 ; i < m ; i++) cin >> a[i];

    for(int i = 0 ; i < m ; i++){
        multiset<int>::iterator it = s.upper_bound(a[i]);
        if(it == s.begin()) cout << -1 << " ";
        else{
            cout << *(--it) << " ";
            s.erase(it);
        }
    }
}