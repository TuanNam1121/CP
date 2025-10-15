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
    int n , m ; cin >> n >> m;
    ll a[200][200];
    for(int i = 0; i < n; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0 ; i < n ; i++){
        ll sum = 0;
        for(int j = 0 ; j < m ; j++){
            sum += a[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
    for(int j = 0; j < m; j++){
        ll sum = 0;
        for(int i = 0 ; i < n ; i++){
            sum += a[i][j];
        }
        cout << sum << " ";
    }
    

    return 0;
}