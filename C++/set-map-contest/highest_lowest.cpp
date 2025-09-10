#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin >> n;
    vector<int> a(n);
    multiset<int> se;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        se.insert(a[i]);
    }

    int query; cin >> query;
    int c; 
    while(query--){
        int tc; cin >> tc;
        switch (tc)
        {
        case 1:
            cin >> c;
            se.insert(c);
            break;
        case 2:
            cin >> c;
            se.erase(c);
            break;
        case 3:
            cout << *(se.begin()) << endl;
            break;
        case 4:
            cout << *(--se.end()) << endl;
    
        }
    }


}