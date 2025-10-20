#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define fi first
#define se second

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    fast_io();
    int n; cin >> n;
    map<string, vector<int>> a;
    
    for(int i = 0 ; i < n ; i++){
        string line; getline(cin, line);
        string cate = "" ; int num;
        for(int i = 0 ; i < (int)line.length() ; i++){
            if(line[i] >= 'a' && line[i] <= 'Z') cate += line[i];
            if(line[i] >= '0' && line[i] <= '9'){
                num *= 10; 
                num += line[i] - '0';
            }
        }
        a[cate].push_back(num);
    }

    for(auto i : a){
        vector<int> res = i.second;
        sort(a.begin(), a.end());
        string cate = i.first;
        for(int i = 0 ; i < n ; i++){
            cout << cate << " " << res[i];
        }
    }

    return 0;
}