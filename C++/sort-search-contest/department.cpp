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
    int n, m, k; cin >> n >> m >> k;
    int move[3] = {-k, 0, k};
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    multiset<int> b;
    for(int i = 0 ; i < m ; i++){
        int t; cin >> t;
        b.insert(t);
    }
    int res = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j : move){
            auto it = b.lower_bound(a[i] + j);
            if(it != b.end()){
                ++res;
                b.erase(it);
                break;
            }
        }
    }
    cout << res;
    return 0;
}