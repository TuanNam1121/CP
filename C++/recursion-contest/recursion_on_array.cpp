#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check_rev(int a[], int n, int i){
    if(n % 2 == 0 && n - i == 2){
        return a[i] == a[n];
    }
    else if(i == n) return true;
    return a[n] == a[i] && check_rev(a, --n, ++i);
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];

    if(check_rev(a, n- 1, 0))cout << "YES";
    else cout << "NO";
}