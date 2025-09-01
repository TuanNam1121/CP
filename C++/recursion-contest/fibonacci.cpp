#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fibo(int n){
    if(n == 1 || n == 0) return n;
    return fibo(n - 1) + fibo(n - 2);
}

int main(){
    int n; cin >> n;
    cout << fibo(n);
}