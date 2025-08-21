#include <bits/stdc++.h>
using namespace std;
#define ll long long

int exist(int a[],int n, int k){
    for(int i = 0 ; i < n ; i++){
        if(a[i] == k) return i;
    }
    return -1;
}

int main(){
    int n, x ; cin >> n >> x;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    if(exist(a,n, x) >= 0){
        for(int i = exist(a,n,x) ; i < n ; i++){
            a[i] = a[i + 1];
        }
        --n;
        for(int i = 0 ; i < n ; i++){
            cout << a[i] << " ";
        }
    }
    else cout << "NOT FOUND";
}