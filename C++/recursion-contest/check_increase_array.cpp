#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool increase(int a[], int n){
    if(n == 1){
        return a[n] > a[n - 1];
    }
    return a[n] > a[n - 1] && increase(a, --n);
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];

    if(increase(a, n-1)) cout << "YES";
    else cout << "NO";

}