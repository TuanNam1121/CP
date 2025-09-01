#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fac(int n){
    if(n == 1) return 1;
    return fac(n - 1) * n;
}

int main(){
    int n; cin >> n;

    cout << fac(n);
}