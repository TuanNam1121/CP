#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int minDistance = INT_MAX;
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        if(abs(a[i+1] - a[i]) < minDistance){
            minDistance = abs(a[i+1] - a[i]);
            count = 1;
        }
        else if(minDistance == abs(a[i+1] - a[i])) count++;
    }

    cout << minDistance << " " << count;
}