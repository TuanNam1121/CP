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

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.first != b.first) return a.first > b.first;
    return a.second < b.second;
}

ll dis(pair<int, int> a, pair<int, int> b){
    ll x = a.first - b.first;
    ll y = a.second - b.second;
    return x*x + y*y;
}

int main() {
    fast_io();
    int n; cin >> n;
    vector<pair<int,int>> a(n);
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i].first >> a[i].second;
    }
    // sort(a.begin(), a.end(), cmp);

    ll res = LONG_LONG_MIN;
    for(int i = 0 ; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            res = max(res, dis(a[i], a[j]));
        }
    }
    cout << res;
    return 0;
}