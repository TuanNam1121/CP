#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;
int main(){
    int n ;cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    sort(a.begin(), a.end());
    ll sum = 0;
    for(int i = 1 ; i < n ; i++){
        sum += (a[i] % mod) * (i % mod); 
        sum %= mod;
    }

    cout << sum;
}