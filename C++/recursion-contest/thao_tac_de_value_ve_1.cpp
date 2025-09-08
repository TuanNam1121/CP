#include <bits/stdc++.h>
using namespace std;
#define ll long long

int solve(int n){
    if(n == 1) return 0;
    int a, b, c; a = b = c = 1e9;
    if(n % 3 == 0) a = 1 + solve(n / 3);
    else if(n % 2 == 0) b = 1 + solve(n / 2);
    else c = 1 + solve(n - 1);
    return min({a, b, c});
}

int main(){
    int n; cin >> n;
    cout << solve(n);
}