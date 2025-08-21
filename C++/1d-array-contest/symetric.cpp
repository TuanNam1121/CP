#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool symetric_array(int a[], int n){
    if(n == 0 )
    for(int i = 0 ; i < n/2 ; i++){
        if(a[i] != a[n - i - 1]) return false;
    }
    return true;
}


int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    if(symetric_array(a,n)) cout << "YES";
    else cout << "NO";
    
}