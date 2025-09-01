#include <bits/stdc++.h>
using namespace std;
#define ll long long

string hex(ll n){
    if(n == 0) return "";
    string temp = hex(n / 16);
    if(n % 16 < 10) return temp + (char)(n % 16 + 48);
    else return temp + char(n % 16 + 65 - 10);
}

int main(){
    ll n; cin >> n;
    cout << hex(n);
}