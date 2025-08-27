#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n ;cin >> n;
    vector<int> a(n);

    for(int i = 0 ; i < n ; ++i){
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    ll num1, num2; num1 = num2 = 0;
    for(int i = 0 ; i < n ; ++i){
        if(i % 2 == 0){
            num1 *= 10;
            num1 += a[i];
        }
        else{
            num2 *= 10;
            num2 += a[i];
        }
    }

    cout << num1 + num2;
}