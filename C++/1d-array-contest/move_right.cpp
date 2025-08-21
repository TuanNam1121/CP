#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n , k ; cin >> n >> k;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];

    while(k--){
        int move = a[n-1];
        for(int i = n - 1 ; i > 0 ; i--){
            a[i] = a[i-1];
        }
        a[0] = move;
    }

    for(int i : a) cout << i << " ";
}