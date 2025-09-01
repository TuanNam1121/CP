#include <bits/stdc++.h>
using namespace std;
#define ll long long

int first_digit(ll n){
    if(n < 10) return n;
    return first_digit(n / 10);
}

int main(){
    ll n; cin >> n;
    cout << first_digit(n);
}