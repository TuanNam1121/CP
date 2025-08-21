#include <bits/stdc++.h>
using namespace std;
#define ll long long

int delete_Index(int a[],int n, int deleteIndex){
    for(int i = deleteIndex; i < n; i++){
        a[i] = a[i + 1]; 
    }
    a[n-1] = -1;
    return n-1;
}

int main(){
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ;i++) cin >> a[i];

    for(int i = 0 ; i < n ; i++){
        while(a[i] == a[i+1]){
            n = delete_Index(a, n, i);
        }
    }

    for(int i : a){
        if(i != -1) cout << i << " ";
    }
}