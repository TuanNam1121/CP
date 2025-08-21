#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(int mid, int a, int b){
    return (mid > a) && (mid > b);
}

int main(){
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    
    for(int i = 1 ; i < n - 1; i++){
        if(cmp(a[i], a[i-1], a[i+1])){
            cout << a[i] << " ";
        }
    }
    
}