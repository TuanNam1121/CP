#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n ; cin >> n;
    vector<int> a(n);
    int cnt[3] = {0};
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < cnt[i]; j++){
            cout << i << " ";
        }
    }
    
    // sort(a.begin(), a.end());
    // for(int i : a) cout << i << " ";

}
