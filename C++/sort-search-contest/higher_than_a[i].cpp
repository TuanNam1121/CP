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
    int n; cin >> n;
    vector<int> a(n);
    set<int> s;

    for(int i = 0 ;i < n; i++){
        cin >> a[i];
        s.insert(a[i]);
    }

    for(int i : a){
        set<int>::iterator it = s.upper_bound(i);
        if(it == s.end()) cout << "_ ";
        else cout << *it << " ";
    }
    return 0;
}