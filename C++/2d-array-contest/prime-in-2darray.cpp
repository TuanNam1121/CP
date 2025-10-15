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

bool prime(int n){
    if(n < 2) return 0;
    for(int i = 2 ; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main() {
    fast_io();
    int n, m; cin >> n >> m;
    ll a[100][100];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(prime(a[i][j])) cout << a[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}