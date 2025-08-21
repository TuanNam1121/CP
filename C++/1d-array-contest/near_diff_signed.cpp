#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(int a, int b){
    int r1 = (a > 0)? 0 : 1, r2 = (b > 0)? 0 : 1;
    return r1 != r2;
}

int main(){
    int n; cin >>n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0 ; i < n ; i++){
        if(i == 0 && cmp(a[i], a[i+1])) cout << a[i] << " ";
        else if(i == n - 1 && cmp(a[i], a[i - 1])) cout << a[i] << " ";
        else if(cmp(a[i], a[i+1]) || cmp(a[i], a[i - 1])) cout << a[i] << " ";  
    }
    
}