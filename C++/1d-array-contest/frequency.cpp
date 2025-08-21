#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin >> n;
    int a[n], fre[n];
    bool check[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        check[i] = true;
        fre[i] = 0;
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = i ; j < n ; j++){
            if(a[i] == a[j] && check[j]){
                fre[i]++;
                check[j] = false;
            }
        }
    }

    for(int i = 0 ; i < n ; i++){
        if(fre[i] != 0) cout << a[i] << " " << fre[i] << endl;
    }
}