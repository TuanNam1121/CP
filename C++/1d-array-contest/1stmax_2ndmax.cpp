#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    int prev = INT_MIN, max = a[0]; // nên khởi tạo prev = int_min để đỡ bị garbage value
    for(int i = 1 ; i < n ; i++){
        if(max < a[i]){
            prev = max;
            max = a[i];
        }
        else if(prev < a[i]){
            prev = a[i];
        }
    }

    cout << max << " "  << prev;
}