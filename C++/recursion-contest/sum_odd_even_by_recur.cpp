#include <bits/stdc++.h>
using namespace std;
#define ll long long

int odd(ll a){
    if(a < 10){
        if(a % 2 == 1) return a;
        else return 0;
    }
    int sum = odd(a/10);
    if(a % 2 == 1) return sum + (a%10);
    else return sum;
}

int even(ll a){
    if(a < 10){
        if(a % 2 == 0) return a;
        else return 0;
    }
    int sum = even(a/10);
    if(a % 2 == 0) return sum + (a%10);
    else return sum;
}

int main(){
    ll n; cin >>n;
    cout << even(n) << endl << odd(n);
}