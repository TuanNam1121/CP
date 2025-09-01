#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sum(int n){
    if(n == 1) return -1;
    if(n % 2 == 0) return sum(n - 1) + n;
    else return sum(n - 1) - n;
}

int main(){
    int n; cin >> n; 
    cout << sum(n);
}