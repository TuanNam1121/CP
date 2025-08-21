#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n , k ; cin >> n >> k;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];

    while(k--){
        int move = a[0];
        for(int i = 0 ; i < n ; i++){
            a[i] = a[i+1];
        }
        a[n-1] = move;
    }

    for(int i : a) cout << i << " ";
}