#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool prime(int a){
    if(a < 2) return false;
    for(int i = 2 ; i < sqrt(a) ; i++){
        if(a % i == 0) return false;
    }
    return true;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0 ;i < n ; i++){
        cin >> a[i];
    }
    float sum = 0, count = 0;
    for(int i = 0 ; i < n ; i++){
        if(prime(a[i])){
            sum += a[i];
            count++;
        }
    }
    printf("%.3f", sum / count);
}