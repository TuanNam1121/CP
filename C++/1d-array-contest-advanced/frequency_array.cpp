#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int max_array = (int)1e7+1;
    int n; cin >> n;
    vector<int> mark(max_array,0);
    vector<int> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n; i++){
        mark[a[i]]++;
    }

    for(int i = 0; i < n; i++){
        if(mark[i] > 0) cout << i << " " << mark[i] << endl;
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        if(mark[a[i]] > 0){
            cout << a[i] << " " << mark[a[i]] << endl;
            mark[a[i]] = 0;
        }
    }
}