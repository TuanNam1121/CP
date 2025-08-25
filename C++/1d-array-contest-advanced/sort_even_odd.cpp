#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(int a, int b){
    if(a % 2 != 0 && b % 2 == 0) return true;
    else if(a % 2 == 0 && b % 2 != 0) return false;
    else{
        if(a % 2 == 1) return a > b;
        else return b > a;
    }
}

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end(), cmp);
    for(int i : a) cout << i << " ";

}