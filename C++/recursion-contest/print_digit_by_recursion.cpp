#include <bits/stdc++.h>
using namespace std;
#define ll long long

void print(ll a){
    if(a < 10){
        cout << a;
        return;
    }
    cout << a % 10  << " ";
    print(a / 10);
}

void print_rev(ll a){
    if(a < 10){
        cout << a << " ";
        return;
    }
    print_rev(a / 10);
    cout << a % 10 << " ";
}

int main(){
    ll n; cin >> n;
    print_rev(n);
    cout << endl;
    print(n);
}