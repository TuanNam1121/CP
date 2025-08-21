#include <bits/stdc++.h>
using namespace std;
#define ll long long

int maxl = 1e6 + 1 ;
int flag[1000001] = {0};

int main(){
    int n ; cin >> n ;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];

    for(int i = 0 ; i < n ; i++){
        flag[a[i]]++;
    }
    int maxValue = 0 , maxCount = 0;
    for(int i = 0 ; i < maxl ; i++){
        if(maxCount < flag[i]){
            maxValue = i ;
            maxCount = flag[i];
        }
    }

    cout << maxValue << " " << maxCount ;
}