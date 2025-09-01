#include <bits/stdc++.h>
using namespace std;
#define ll long long

int digit(ll n){
    if(n == 0) return 0;
    return digit(n / 10) + 1;
}

int main(){
    ll n; cin >> n;
    cout << digit(n);
}