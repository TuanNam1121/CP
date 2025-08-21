#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n ,m, p; cin >> n >> m >> p;
    int a[m+n], b[m];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    for(int i = 0 ; i < m ; i++) cin >> b[i];

    for(int i = 0 ; i < m ; i++){
        for(int j = n + i; j > p + i; j--){
            a[j] = a[j-1];
        }
        a[p + i] = b[i];
    }
    for(int i : a) cout << i << " ";
}