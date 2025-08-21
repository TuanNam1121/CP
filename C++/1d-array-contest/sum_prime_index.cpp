#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool prime(int n){
    if(n < 2) return false;
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int n = 0 ; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];

    for (int i = 1; i < n; i++){
        int suml, sumr ; suml = sumr = 0;
        for(int j = 0 ; j < i ; j++) suml += a[j];
        for(int j = i + 1 ; j < n ; j++) sumr += a[j];
        if(prime(suml) && prime(sumr)) cout << i << " "; 
    }
    
}