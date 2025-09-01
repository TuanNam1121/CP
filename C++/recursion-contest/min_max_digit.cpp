#include <bits/stdc++.h>
using namespace std;
#define ll long long

int min_digit(ll n){
    if(n < 10) return n;
    int temp = n % 10;
    return min(temp, min_digit(n / 10));
}

int max_digit(ll n){
    if(n < 10) return n;
    int temp = n % 10;
    return max(temp, min_digit(n / 10));
}

int main(){
    ll n; cin >> n;
    cout << max_digit(n) << " " << min_digit(n);
}  