#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool higher(int a[], int n){
    if(n == 0) return false;
    for(int i = 0 ; i < n - 1; i++){
        if(a[i] >= a[i+1]) return false;
    }
    return true;
}

int main(){
    int n; cin >> n ;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    if(higher(a,n)) cout << "YES" ;
    else cout << "NO";
}

