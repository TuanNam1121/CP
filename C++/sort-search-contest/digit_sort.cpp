#include <bits/stdc++.h>
using namespace std;
#define ll long long

int digit(int a){
    int sum = 0;
    while(a > 0){
        sum += a % 10;
        a /= 10; 
    }
    return sum;
    
}

bool cmp(int a, int b){
    if(digit(a) == digit(b)) return a < b;
    else return digit(a) < digit(b);
}

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    sort(a.begin(), a.end(), cmp);
    for(int i : a) cout << i << " ";
}