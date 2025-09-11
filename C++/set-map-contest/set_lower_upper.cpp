#include <bits/stdc++.h>
using namespace std;
#define ll long long

int lower(multiset<int> se, int x){
    auto it = se.lower_bound(x);
    while(it != se.begin()){
        if(*it <= x) return *it;
        --it;
    }
    return -1;
}


int main(){
    int n; cin >> n;
    int a[n];
    multiset<int> se;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        se.insert(a[i]);
    }
    int tc; cin >> tc;
    while(tc--){
        int t, x; cin >> t >> x;
        auto it = se.begin();
        switch(t){
            case 1 :
                se.insert(x);
                break;
            case 2 :
                it = se.find(x);
                se.erase(it);
                break;
            case 3 :
                it = se.lower_bound(x);
                if(it == se.end()) cout << -1 << endl;
                else cout << *it << endl;
                break;
            case 4 :
                int index = lower(se, x);
                cout << index << endl;
                break;
        }
    }
}