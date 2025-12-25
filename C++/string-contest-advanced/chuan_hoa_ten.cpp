#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define fi first
#define se second
#define rep(i,a,b) for(int i=(a); i<(b); ++i)
#define rep2(i,j,a,b,c,d) for (int i = (a); i < (b); ++i) for (int j = (c); j < (d); ++j)

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void convert(string &s){
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.size(); ++i){
        s[i] = tolower(s[i]);
    }
}

int main() {
    fast_io();
    string name, bod;
    getline(cin, name);
    getline(cin, bod);
    stringstream ss(name);
    vector<string> a;
    string temp;
    while(ss >> temp){
        convert(temp);
        a.push_back(temp);
    }
    
    for(string i : a) cout << i << " ";
    cout << endl;
    
    // dd/mm/yyyy : sẽ bị thiếu ở vị trí 2 và 5 các dấu / : nếu bị thiếu ở vị trí 2 thì thêm số 0 và s[0], nếu thiếu vị trí 5 thì sẽ thêm vào 0
    // vào vị trí 3
    if(bod[2] != '/') bod = '0' + bod;
    if(bod[5] != '/') bod.insert(3, "0");
    cout << bod;

    return 0;
}