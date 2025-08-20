#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin>> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int min = a[0], count = 1;
    for(int i = 1 ; i < n ; i++){
        if(a[i] < min){
            min = a[i];
            count = 1;
        }
        else if(a[i] == min) count++;
    }
    cout << count;
}