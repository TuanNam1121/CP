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

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.first < b.first;
}

int main() {
    fast_io();
    ll s, n; cin >> s >> n;
    vector<pair<int, int>> a(n);
    
    for(int i = 0 ; i < n ; i++){
        cin >> a[i].first >> a[i].second;
    }

    sort(all(a), cmp);

    for(int i = 0 ; i < n ; i++){
        if(a[i].first >= s){
            cout << "NO";
            return 0;
        }
        else{
            s += a[i].second;
        }
    }
    cout << "YES";
    return 0;
}