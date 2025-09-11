#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());
    int min_dis = INT32_MAX;
    for(int i = 1 ;i < n; i++){
        int dis = a[i-1] - a[i];
        if(dis < min_dis) min_dis = dis; 
    }
    cout << min_dis;
}