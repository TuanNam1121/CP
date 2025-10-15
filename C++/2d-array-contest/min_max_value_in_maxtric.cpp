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
    ll a[200][200];

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> a[i][j];
        }
    }
    ll vmax = INT32_MIN, vmin = INT32_MAX;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            vmax = max(vmax, a[i][j]);
            vmin = min(vmin, a[i][j]);
        }
    }

    cout << vmin << endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(a[i][j] == vmin){
                cout << i+1 << ' ' << j+1 << endl;
            }
        }
    }

    cout << vmax << endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(a[i][j] == vmax){
                cout << i+1 << ' ' << j+1 << endl;
            }
        }
    }
    
    return 0;
}