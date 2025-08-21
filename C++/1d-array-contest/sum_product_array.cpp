#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;
int main(){
    int n ; cin >> n;
    int a[n];

    for(int i = 0 ; i < n ; i++) cin >> a[i];
    ll sum = 0 , product = 1;
    for(int i = 0 ; i < n ; i++){
        sum += a[i] % mod;
        sum %= mod;
        
        product *= a[i] % mod;
        product %= mod;
    }

    cout << sum << endl << product;
}