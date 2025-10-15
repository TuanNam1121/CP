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
    int n, x; cin >> n >> x;
    vector<int> a(n);
    
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    sort(all(a));

    int l = 0, r = n - 1;
    int res = 0;
    while(l <= r){
        if(a[l] + a[r] <= x){
            ++l; --r;
            ++res;
        }
        else{
            --r;
            ++res;
        }
    }
    cout << res;
}