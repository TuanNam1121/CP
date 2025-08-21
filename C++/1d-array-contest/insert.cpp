#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, x, k ; cin >> n >> x >> k;
    int a[n+1];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    for(int i = n ; i > k ; i--){
        a[i] = a[i - 1];
    }
    a[k] = x;

    for(int i : a) cout << i << " ";
}