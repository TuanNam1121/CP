#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());
    ll res = a[0];
    for(int i = 1 ; i < n; i++){
        if(i <= k) res += a[i];
        else res -= a[i];
    }
    cout << res;
}