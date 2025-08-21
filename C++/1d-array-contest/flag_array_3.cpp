#include <bits/stdc++.h>
using namespace std;
#define ll long long
int maxl = 1e6 + 1 ;
int flag[1000001] = {0};
int main(){
    int n ; cin >> n;
    int a[n];

    for(int i=0 ; i < n ; i++) cin >> a[i];

    for(int i = 0 ; i < n ; i++){
        if(flag[a[i]] == 0) flag[a[i]]++;
        else{
            flag[a[i]]++;
            a[i] = -1;
        }
    }
    
    for(int i = 0 ; i < n ; i++){
        if(a[i] >= 0) cout << a[i] << " " <<flag[a[i]] << endl;
    }

}