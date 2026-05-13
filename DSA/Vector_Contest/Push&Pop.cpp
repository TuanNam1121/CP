#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    int n; cin >> n;
    vector<int> v;
    while(n--){
        int choice;
        cin >> choice;
        if(choice == 1){
            int value; cin >> value;
            v.push_back(value);
        }
        if(choice == 2){
            if(!v.empty()) v.pop_back();
        }
    }

    if(v.empty()) cout << "EMPTY";
    else{
        for(int i : v) cout << i << " ";
    }


    return 0;
}