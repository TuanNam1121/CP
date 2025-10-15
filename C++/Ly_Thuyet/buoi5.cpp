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

long long tong(int a[][100], int n, int m){
    int sum = 0;
    for(int i =0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum += a[i][j];
        }
    }
    return sum;
}


int main() {
    fast_io();

    int n, m; cin >> n >> m;
    int a[100][100];
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j < m; j++){
            cout << "a[" << i << "][" << j << "] = "; 
            cin >> a[i][j];
        }
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cout << a[i][j] << " ";
        }
    }

    return 0;
}