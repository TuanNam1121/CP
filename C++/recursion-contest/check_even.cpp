#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool contain_odd(ll a){
    if(a < 10){
        return a % 2;
    }
    return (a % 2) + contain_odd(a / 10);
}

int main(){
    ll n; cin >> n;
    if(contain_odd(n)) cout << "NO";
    else cout << "YES";
}