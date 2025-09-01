#include <bits/stdc++.h>
using namespace std;
#define ll long long

//O(1)
ll sumO1(int n) return n * (n - 1) / 2

//O(log(n))
ll sum(int n){
    if(n == 1) return 1;
    return sum(n - 1) + n;
}

int main(){
    int n ; cin >> n;
    cout << sum(n);
}