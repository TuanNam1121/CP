#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(int a){
    vector<int> d;
    while(a > 0){
        d.push_back(a % 10);
        a /= 10;
    }

    for(int i  = 0 ; i < (int)d.size() ; i++){
        if(d[i] < d[i+1]) return false;
    }
    return true;
}

void add(vector<pair<int, int>> &fre, int n){
    for(int i = 0; i < (int)fre.size(); i++){
        if(n == fre[i].first){
            fre[i].second++;
            return;
        }
    }
    fre.push_back({n,1});
}

int main(){
    vector<int> a;
    int temp;
    while(cin >> temp) a.push_back(temp);
    vector<pair<int, int>> fre;

    for(int i = 0 ; i < (int)a.size(); i++){
        if(check(a[i])){
            add(fre, a[i]);
        }
    }

    for(auto i : fre){
        cout << i.first << " " << i.second << endl;
    }
}