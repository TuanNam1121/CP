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
    for(int i = 0 ; i < n ; i++){
        int a[2][2];
        vector<int> b;
        for(int i = 0 ; i < 2 ; i++){
            for(int j = 0 ; j < 2 ; j++){
                cin >> a[i][j];
                b.pb(a[i][j]);
            }
        }
    sort(b.begin(), b.end());

    if((max(a[0][0], a[1][1]) == b[3] && min(a[0][0], a[1][1]) == b[0]) || (max(a[1][0], a[0][1]) == b[3] && min(a[1][0], a[0][1]) == b[0])){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    }
    return 0;
}