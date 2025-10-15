#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.first < b.first;
}

int main(){
    int n; cin >> n;
    vector<pair<int, int>> a(n);

    for(int i = 0 ; i < n ; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), cmp);

    ll minutes = a[0].first + a[0].second;

    for(int i = 1 ; i < n ; i++){
        if(a[i].first > minutes) minutes = a[i].first + a[i].second;
        else minutes += a[i].second;
    }
    cout << minutes;
}