#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll fibo[87];

void fibo_create(){
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i <= 87 ; i++){
        fibo[i] = fibo[i-2] + fibo[i-1];
    }
}

int main(){
    int n ; cin >> n;
    ll a[n];
    for(int i = 0 ;i < n ;i++) cin >> a[i];
    fibo_create();
    bool none = true;
    for(int i = 0 ; i < n ; i++){
        for(int j : fibo){
            if(a[i] == j){ 
                cout << j << " ";
                none = false;
                break; 
            }
        }
    }
    if(none) cout << "NONE";
}