#include <bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

int main(){
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    int res = gcd(a[0], a[1]);
    for(int i = 2 ; i < n ; i++){
        res = gcd(res, a[i]);
    }  

    cout << res;
}