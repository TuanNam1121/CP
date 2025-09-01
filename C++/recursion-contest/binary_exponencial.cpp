#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;

ll exp(int a, int b){
    if(b == 0) return 1;
    ll temp = exp(a, b/2);
    if(b % 2 == 0) return (temp % mod) * (temp % mod);
    else return (temp % mod) * (temp % mod) * (a % mod);
}


int main(){
    int a, b; cin >> a >> b;
    cout << exp(a,b);
}