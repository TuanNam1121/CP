#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    
    int evenCount, oddCount;
    ll evenSum , oddSum; 
    evenCount = oddCount = 0;
    evenSum = oddSum = 0;
    
    for(int i : a){
        if(i % 2 == 0){
            evenCount++;
            evenSum += i;
        }
        else if(i == 0) continue;
        else{
            oddCount++;
            oddSum += i;
        }
    }

    cout << evenCount << endl << oddCount << endl << evenSum << endl << oddSum;
}