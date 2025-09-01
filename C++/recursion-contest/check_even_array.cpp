#include <bits/stdc++.h>
using namespace std;
#define ll long long


bool check_even(int a[], int n){
    if(n == 0) return a[n] % 2 == 0;
    return a[n] % 2 == 0 && check_even(a, --n);
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    if(check_even(a, n)) cout << "YES";
    else cout << "NO";
}