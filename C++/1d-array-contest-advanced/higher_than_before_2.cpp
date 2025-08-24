#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int max = -1;

    for(int i = 0 ; i < n ; i++){
        if(a[i] > max){
            cout << a[i] << " ";
            max = a[i];
        }
    }
}