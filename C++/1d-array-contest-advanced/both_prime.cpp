#include <bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

int main(){
    int n ; cin >> n;
    vector<ll> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int count = 0;
    for(int i = 0 ; i < n - 1 ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(gcd(a[i], a[j]) == 1) count++;
        }
    }
    cout << count;
}