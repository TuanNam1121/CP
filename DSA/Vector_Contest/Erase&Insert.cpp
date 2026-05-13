#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    int n; cin >> n;
    vector<int> v;
    while(n--){
        int c; cin >> c;
        v.push_back(c);
    }
    int s = v.size();
    cin >> n;
    while(n--){
        int choice; cin >> choice;
        if(choice == 1){
            int pos, val;
            cin >> pos >> val;
            if(pos < 0 || pos > n) continue;
            v.insert(v.begin() + pos, val); 
        }
        else{
            int pos; cin >> pos;
            if(pos < 0 || pos > n) continue;
            v.erase(v.begin() + pos);
        }
    }

    if(v.size() == 0) cout << "EMPTY";
    else{
        for(int i : v) cout << i << " ";
    }
    return 0;
}